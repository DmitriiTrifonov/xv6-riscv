#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    int pid = fork();
    if(pid > 0){
        printf("pid: %s\n", pid);
    } else {
        printf("parent\n");
    }
    exit(0);
}

