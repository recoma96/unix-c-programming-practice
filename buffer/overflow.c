#include <stdio.h>

int
main(void)
{
    int buf[10];
 
    // %s 대신 %9s로 잡으면 버퍼 크기에 넘어가도
    // 오버플로우가 발생하지 않는다.
    scanf("%9s", buf);
    printf("%s\n", buf);

    return 0;
}