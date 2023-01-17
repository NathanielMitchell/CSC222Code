#include <stdio.h>
#include <unistd.h>

int main() {

    int x = 5, y = 10;
    pid_t mypid = getpid();
    pid_t ppid = getppid();
    printf("my pid = %d, parent pid = %d\n", mypid, ppid);
    pid_t r = fork();
    if(r > 0) {
        x = 100;
        y = -10;
    } else {
        x = x*y + 9;
    }
    printf("x = %d y = %d\n", x, y);
    return 0;

}
