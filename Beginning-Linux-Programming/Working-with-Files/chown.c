#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{


    uid_t uid = getuid();
    gid_t gid = getgid();

    printf("current uid: %d, gid: %d \n", uid, gid);

    int ret;
    ret = chown("/home/ninhld/Github/eslinuxprogramming/testfile.txt",
          0,
          0);
    printf("ret: %d \n", ret);


    return 0;
}
