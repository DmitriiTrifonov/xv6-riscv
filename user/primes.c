#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

//TODO: Finish with pipe and forks
int main(int argc, char *argv[]) {
    int i = 2;
    char *template = "prime %d\n";
    printf(template, i);
    for (; i < 35; i++) {
        if (i == 3) {
            printf(template, i);
            continue;
        }

        if (i == 5) {
            printf(template, i);
            continue;
        }
    }
    exit(0);
}

