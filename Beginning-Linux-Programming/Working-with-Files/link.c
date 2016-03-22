#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int ret;
    const char *from = "/home/ninhld/Github/eslinuxprogramming/Beginning-Linux-Programming/Working-with-Files/from";
    const char *to = "/home/ninhld/Github/eslinuxprogramming/Beginning-Linux-Programming/Working-with-Files/to";

    ret = link(from, to);
    printf("ret: %d \n", ret);

//    ret = unlink(to);
//    printf("ret: %d \n", ret);
    return 0;
}
