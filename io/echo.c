#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_LEN 128

int main(void)
{
    char buf[MAX_LEN];
    int read_byte = read(STDIN_FILENO, buf, MAX_LEN);

    write(STDOUT_FILENO, buf, read_byte);

    return 0;
}