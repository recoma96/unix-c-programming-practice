#include <stdlib.h>
#include <stdio.h>

void
exit_handler(void)
{
    printf("Program Ended\n");
}

int
main(void)
{
    printf("program is running\n");
    if(atexit(exit_handler))
    {
        printf("핸들러 등록 실패\n");
        return 1;
    }
    return 0;
}