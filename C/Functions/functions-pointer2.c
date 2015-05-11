#include <stdio.h>
#include <stdlib.h>

/* function declaration */
void max(int *ret, int num1, int num2);

int main ()
{
    /* local variable definition */
    int a = 100;
    int b = 200;
    int *retmax = NULL;

    retmax = (int*)malloc(sizeof(int));
    if(!retmax) return 0;

    /* calling a function to get max value */
    max(retmax, a, b);

    printf( "Max value is : %d\n", *retmax );

    free(retmax);
    return 0;
}

/* function returning the max between two numbers */
void max(int *ret, int num1, int num2)
{
    /* local variable declaration */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    *ret = result;
    return;
}
