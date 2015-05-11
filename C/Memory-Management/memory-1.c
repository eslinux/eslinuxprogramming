#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 2

int main()
{

    int *p = NULL;
    int *p2 = NULL;

    p = (int*)malloc(MAX_ELEMENT*sizeof(int)); /* malloc 2 element  */
    if(!p){
        printf("malloc FAIL ! \n");
        return 0;
    }

    p2 = p;
    int i;
    for(i = 0; i < MAX_ELEMENT; i++){
        *p2 = (i+1);

        printf("p value: %d \n", *p2);
        p2++;
    }


    if(p){
        free(p);
    }

    return 0;
}

