#include <stdio.h>
#include <errno.h>
#include <string.h>

int
count(int n)
{ 
    if(n < 0)
    {
        // 음수면 EINVAL 에러 호출
        errno = EINVAL;
        return -1;
    }
    else
        return n + 1;
}

int
main(void)
{
    int x = -1;
    int error;
    if(count(x))
    {
#ifdef DEBUG    // 디버그 모드에서만 작동한다.

        /*
            strerror는 출력할 버퍼가 없거나, error가 없으면 errno를 바꾼다
            따라서 이를 예방하려면 errno를 다른 변수에 저장해야 한다.
        */
        error = errno;
        fprintf(stderr, "에러 발생: %s, 에러 변수: %d\n", strerror(errno), x);
        // 저장한 errno 데이터를 errno로 저정하면 error 코드를 유지해서 사용할 수 있다.
        errno = error;
#endif
    }
    return 0;
}