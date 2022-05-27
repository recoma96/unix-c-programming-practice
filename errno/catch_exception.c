#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int
main(void)
{

    int file = 100;
    // perror 출력
    if(close(file) == -1)
        perror("에러 발생");
    
    // strerror 출력
    if(close(file) == -1)
        fprintf(stderr, "해당 파일 디스크립터 %d번 에서 오류 발생: %s\n",
                file, strerror(errno));
    
    return 0;
}