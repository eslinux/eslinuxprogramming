#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{

    int i;
    int *p;

    for(i = 0; i < ARRAY_SIZE; i++){
        p[i] = i;

        printf("p[%d] = %d, p: %d \n", i, p[i], p);
    }

    return 0;
}

