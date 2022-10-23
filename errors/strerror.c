#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
    int fd;
    if(close(fd) == -1)
        fprintf(stderr, "Failed!: %s\n", strerror(errno));
    return 0;
}