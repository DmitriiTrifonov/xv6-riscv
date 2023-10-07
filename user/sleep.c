#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    int ticks = 0;

    if (argc < 2) {
        fprintf(2, "Usage: sleep 10\n");
        exit(1);
    }

    //TODO: Add buffer flush if error
    ticks = atoi(argv[1]);
    sleep(ticks);
    exit(0);
}

