#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int arg;

    printf("Program name: %s \n", argv[0]);
    for(arg = 1; arg < argc; arg++) {
            printf("argument %d: %s\n", arg, argv[arg]);
    }

    return 0;
}
