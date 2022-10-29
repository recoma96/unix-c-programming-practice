#include <stdio.h>

/*
디버그 모드를 보고 싶으면
gcc define.c -DDEBUG
*/

int main(void)
{
#ifdef DEBUG
    printf("This is the debug mode.");
#endif
    return 0;
}