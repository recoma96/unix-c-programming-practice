#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
    // path 불러오기
    char* value = getenv("PATH");
    char* last;
    if((value = strtok_r(value, ":", &last)) == NULL)
        return 0;
    printf("PATH: %s\n", value);
    while(value = strtok_r(NULL, ":", &last))
    {
        printf("PATH: %s\n", value);
    }

    return 0;
}