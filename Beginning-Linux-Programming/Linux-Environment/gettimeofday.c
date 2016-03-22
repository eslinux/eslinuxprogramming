#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    long int cycle = 2000000;//us ~ 2s
    struct timeval tv, tv2;

    gettimeofday(&tv,NULL);
    while(1){
        gettimeofday(&tv2,NULL);
        if(tv2.tv_sec * 1000000 + tv2.tv_usec >= tv.tv_sec * 1000000 + tv.tv_usec + cycle){
            printf("Timer is starting ... \n");
            break;
        }
    }

    return 0;
}
