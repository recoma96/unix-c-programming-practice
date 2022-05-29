# 유닉스 프로그래밍 연습하기
재밌는 유닉스 프로그래밍 연습

## 개발 환경
* Ubuntu 20.04 (WSL2)
* gcc 9.4.0

## 목차
* [Buffer 관련](buffer)
    * [Buffer Overflow](buffer/overflow.c)
* [Exception 처리 관련](errno)
    * [에러 잡기](errno/catch_exception.c)
    * [에러 일으키기](errno/raise_exception.c)
    * [에러코드 커스텀 하기](errno/custom_exception)
* [Process 관련](process)
    * [환경 변수 전체를 문자열로 받기](process/environ.c)
    * [환경 변수를 원하는 Key값으로 받기](process/getenv.c)
    * [PATH 데이터 파싱하기](process/get_path.c)
    * [프로세스 종료 핸들러 구현하기](process/atexit.c)
    * [프로세스 및 사용자 ID값 확인하기](process/id.c)
    * [fork() 기본 사용법](process/fork.c)
    * [wait()으로 자식 프로세스 기다리기](process/wait.c)