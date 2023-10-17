#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <path>\n", argv[0]);
        return 1;
    }

    char command[1000];
    snprintf(command, sizeof(command), "nautilus %s", argv[1]);

    system(command);  // Open Nautilus with the specified path
    return 0;
}
