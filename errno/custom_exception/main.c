#include <stdio.h>
#include "exceptions.h"

int
check_value(int num)
{
    printf("%d\n", num);
    if(num < 10)
    {
        custom_err = ERRLOWVAL;
        return -1;
    }
    else if(num > 100)
    {
        custom_err = ERRHIGHVAL;
        return -1;
    }
    else
        return 0;
}

int
main(void)
{
    int n;

    printf("Input you value>> ");
    scanf("%d", &n);
    if(check_value(n) == -1)
        print_error("Get Error", custom_err);
    else
        printf("ok\n");

    print_error("Get Error", 1000);
    print_error("Get Error", 3);
    return 0;
}