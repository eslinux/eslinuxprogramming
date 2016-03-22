#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i;
    time_t the_time, timmer;
    for(i = 1; i <= 5; i++) {
        the_time = time(&timmer);
        printf("The time is %ld\n", the_time); // the_time == timmer
        sleep(1);
    }
    exit(0);
}
