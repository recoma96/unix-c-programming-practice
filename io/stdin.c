#include <stdio.h>
#include <unistd.h>
#include <assert.h>

int main(void)
{
    char buf[128];
    ssize_t read_size = 0;

    read_size = read(STDIN_FILENO, buf, 128);
    if(read_size == -1)
        perror("Get Error");
    else
    {
        printf("입력된 문자열 길이: %ld\n", read_size);
        printf("문자열: %s\n", buf);
    }
    return 0;
}