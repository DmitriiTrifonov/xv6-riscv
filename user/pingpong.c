#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    int p[2];
    char buffer[10];
    pipe(p);

    int pid = fork();
    if (pid == 0) {
        write(p[1], "ping", 4);
        read(p[0], buffer, 4);
        printf("%d: recieved %s\n", getpid(), buffer);
    } else {
        wait(0);
        write(p[1], "pong", 4);
        read(p[0], buffer, 4);
        printf("%d: recieved %s\n", getpid(), buffer);
    }
    exit(0);
}

