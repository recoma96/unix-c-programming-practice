#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd;
    if(close(fd) == -1)
        perror("Failed");

    return 0;
}