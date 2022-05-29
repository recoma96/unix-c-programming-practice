#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

char** get_paths(void);
void destroy_paths(char** paths);

int
main(void)
{
    char** paths = get_paths();
    int i;
    for(i = 0; paths[i]; i++)
        printf("PATH: %s\n", paths[i]);

    destroy_paths(paths);

    return 0;
}

char** get_paths(void)
{
    char** paths = NULL;
    char* raw_path = getenv("PATH");
    unsigned int i, start, k;
    unsigned int path_size = 0; // PATH 갯수

    for(i = 0; raw_path[i]; i++)
        if(raw_path[i] == ':') path_size++;

    // 갯수만큼 할당
    paths = (char**)malloc(sizeof(char*) * (path_size + 1));

    start = 0;
    k = 0;
    for(i = 0; raw_path[i]; i++)
    {
        if(raw_path[i] == ':')
        {
            paths[k++] = raw_path + (sizeof(char) * start);
            raw_path[i] = '\0';
            start = i + 1;
        }
    }
    if(start < i)
        paths[k] = raw_path + start;
    return paths;
}

void destroy_paths(char** paths)
{
    free(paths);
}