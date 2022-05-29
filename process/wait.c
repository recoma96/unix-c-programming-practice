#include <stdio.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>

pid_t r_wait(int* static_loc);

int main(void)
{
    pid_t child_pid;
    int i, n = 4;

    // 4개의 자식 프로세스를 실행
    // 자식 프로세스일 경우 child_pid가 -1로 설정되므로
    // for문에서 빠져나온다.
    for(i = 1; i < n; i++)
        if((child_pid = fork()) <= 0)
            break;

    // 자식 프로세스 기다리기
    while(r_wait(NULL) > 0);
    // 프로세스 정보 출력
    fprintf(stderr, "The %d process ID: %ld, parent ID: %ld, child ID: %ld\n",
                    i, (long)getpid(), (long)getppid(), (long)child_pid);

    return 0;
}

pid_t r_wait(int* static_loc)
{
    int retval;

    while (
        // 시그널이 생겨도 계속해서 자식 프로세스를 기다린다.
        ((retval = wait(static_loc)) == -1) &&
        (errno == EINTR)
    );
    return retval;
}