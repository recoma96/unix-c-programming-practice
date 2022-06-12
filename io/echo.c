#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_LEN (ssize_t)128

int main(void)
{
    char buf[MAX_LEN];
    ssize_t read_byte = read(STDIN_FILENO, buf, MAX_LEN);
    if(read_byte > 0)
        write(STDOUT_FILENO, buf, read_byte);

    return 0;
}