#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{

    int i;
    int *p;
    int narray[ARRAY_SIZE];

    for(i = 0; i < ARRAY_SIZE; i++){
        narray[i] = i;
    }


    p = narray;
    for(i = 0; i < ARRAY_SIZE; i++){
        printf("narray[%d] = %d \n", i, *p);
        p++; /* point to next element */
    }



    return 0;
}

