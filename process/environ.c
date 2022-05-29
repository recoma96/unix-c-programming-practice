#include <stdio.h>
#include <string.h>

extern char** environ;

int
main(void)
{
    int i;

    printf("Envs\n");
    for(i = 0; environ[i]; i++)
    {
        char* env = environ[i];
        char* key = strtok(env, "=");
        char* value = strtok(NULL, "=");
        printf("KEY: %s\n", key);
        printf("VAL: %s\n", value);
        printf("\n");

    }
    
    return 0;
}