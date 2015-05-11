#include <stdio.h>


int main()
{

    int a = 0;
    int *pa = NULL;

    //NON-ZERO
    if(a){
        printf("line<%d> a = %d \n", __LINE__, a);
    }

    a= 5;
    if(a){
        printf("line<%d> a = %d \n", __LINE__, a);
    }

    //NON-NULL
    if(pa) {
        printf("line<%d> *pa = %d \n", __LINE__, *pa);
    }

    pa = &a;
    if(pa) {
        printf("line<%d> *pa = %d \n", __LINE__, *pa);
    }


    return 0;
}
