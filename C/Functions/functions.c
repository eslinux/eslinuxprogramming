#include <stdio.h>

/* function declaration */
int max(int num1, int num2);

int main ()
{
    /* local variable definition */
    int a = 100;
    int b = 200;
    int retmax;

    /* calling a function to get max value */
    retmax = max(a, b);

    printf( "Max value is : %d\n", retmax );

    return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2)
{
    /* local variable declaration */
    int ret;

    if (num1 > num2)
        ret = num1;
    else
        ret = num2;

    return ret;
}
