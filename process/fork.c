#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t child_pid = -1;
    child_pid = fork();

    if(child_pid == -1)
    {
        perror("프로세스 생성 실패.");
        return 1;
    }
    if(child_pid == 0) // 자식 프로세스
    {
        printf("This is Child Process: %ld\n", (long)getpid());
        printf("This is My Parent Process: %ld\n", (long)getppid());
    }
    else // 부모 프로세스
        printf("This is Parent Process %ld\n", (long)getpid());

    return 0;
}
