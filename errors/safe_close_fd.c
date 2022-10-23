#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

void r_close(int fd)
{
    int error;
    while(((error = close(fd)) == -1) && (errno == EINTR));
    /*
        EINTR: 인터럽트로 인한 에러 발생
        외부의 인터럽트로 인해 close하는 도중에 발생했으므로
        정상적으로 닫힐 때 까지 반복
    */
    if(error == -1)
        perror("Failed to close file");
}

int main(void)
{
    int fd;
    fd = open("errors/example.txt", O_RDONLY);
    r_close(fd);

    return 0;
}