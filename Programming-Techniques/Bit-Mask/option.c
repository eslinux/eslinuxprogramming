#include <stdio.h>

enum {
    OPE_ADD = 0,
    OPE_SUB,
    OPE_MUL,
    OPE_DEV
};


void math_operator(int a, int b, unsigned char ope)
{
    if(ope == OPE_ADD){
        printf("sum: a+b= %d \n", (a+b));
    }

    if(ope == OPE_SUB){
        printf("sub: a-b= %d \n", (a-b));
    }

    if(ope == OPE_MUL){
        printf("multi: a*b= %d \n", (a*b));
    }

    if(ope == OPE_DEV){
        if(b!=0)
            printf("devi: a/b= %f \n", ((float)a/b));
        else
            printf("fail ! \n");
    }
    printf("\n");
}

int main()
{

    math_operator(4,2, OPE_ADD);
    math_operator(4,2, OPE_SUB);
    math_operator(4,2, OPE_MUL);
    math_operator(4,2, OPE_DEV);

    return 0;
}


