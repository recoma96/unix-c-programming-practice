#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    pid_t process_id = getpid();
    pid_t parent_process_id = getppid();
    uid_t user_id = getuid();
    gid_t group_id = getgid();
    uid_t effective_id = geteuid();
    gid_t group_effective_id = getegid();

    printf("Process ID\t\t%ld\n", (long)process_id);
    printf("Parent Process ID\t%ld\n", (long)parent_process_id);
    printf("User ID\t\t\t%ld\n", (long)user_id);
    printf("Group ID\t\t%ld\n", (long)group_id);
    printf("Effective ID\t\t%ld\n", (long)effective_id);
    printf("Group Effective ID\t%ld\n", (long)group_effective_id);

    return 0;
}