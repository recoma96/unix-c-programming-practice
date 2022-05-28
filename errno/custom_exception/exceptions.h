#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

#include <stdio.h>

#define SUCCESS     0
#define ERRLOWVAL   1
#define ERRHIGHVAL  2

#define MAX_ERR_VAL 5

int custom_err;

const char* const err_list[5] = {
    "success",
    "This value is too low",
    "This value is too high",
    NULL,
    "errno overflow",
};

void 
print_error(char* front, int err)
{
    if(err >= MAX_ERR_VAL || err_list[err] == NULL)
        err = MAX_ERR_VAL - 1;
    printf("%s: %s\n", front, err_list[err]);
}



#endif