#include <stdio.h>

#define OPE_MASK_ADD (1 << 0) // 1 = 0x01 = 00000001
#define OPE_MASK_SUB (1 << 1) // 2 = 0x02 = 00000010
#define OPE_MASK_MUL (1 << 2) // 4 = 0x04 = 00000100
#define OPE_MASK_DEV (1 << 3) // 3 = 0x01 = 00001000

void math_operator_bitmask(int a, int b, unsigned char ope)
{
    if(ope & OPE_MASK_ADD){
        printf("sum: a+b= %d \n", (a+b));
    }

    if(ope & OPE_MASK_SUB){
        printf("sub: a-b= %d \n", (a-b));
    }

    if(ope & OPE_MASK_MUL){
        printf("mul: a*b= %d \n", (a*b));
    }

    if(ope & OPE_MASK_DEV){
        if(b!=0)
            printf("dev: a/b= %f \n", ((float)a/b));
        else
            printf("fail ! \n");
    }
    printf("\n");
}

int main()
{

    math_operator_bitmask(4,2, (OPE_MASK_ADD));
    math_operator_bitmask(4,2, (OPE_MASK_ADD | OPE_MASK_SUB));
    math_operator_bitmask(4,2, (OPE_MASK_ADD | OPE_MASK_SUB | OPE_MASK_MUL));
    math_operator_bitmask(4,2, (OPE_MASK_ADD | OPE_MASK_SUB) | OPE_MASK_MUL | OPE_MASK_DEV);

    return 0;
}


