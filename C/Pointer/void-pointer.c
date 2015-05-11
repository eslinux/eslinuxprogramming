#include <stdio.h>
#include <stdlib.h>

struct Something
{
    int nValue;
    float fValue;
};

int main()
{

    int nValue;
    float fValue;
    struct Something sValue;
    void *pVoid = NULL;

    nValue = 1;
    fValue = 3.14f;
    sValue.nValue = 2;
    sValue.fValue = 2.7f;

    pVoid = &nValue; // valid
    printf("nValue = %d \n", *((int*)pVoid));


    pVoid = &fValue; // valid
    printf("fValue = %f \n", *((float*)pVoid));

    pVoid = &sValue; // valid
    printf("sValue.nValue = %d \n", ((struct Something*)pVoid)->nValue);
    printf("sValue.fValue = %f \n", ((struct Something*)pVoid)->fValue);

    return 0;
}

