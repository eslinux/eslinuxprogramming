
#include <stdio.h>

int main( int argc, char *argv[] )
{

    int *myarray;
    int i;
#define MAX 5

    for(i = 0; i < MAX; i++){
        myarray[i] = i;
    }

    for(i = 0; i < MAX; i++){
        printf("myarray[%d] = %d \n", i, myarray[i]);
    }

    return 1;
}


