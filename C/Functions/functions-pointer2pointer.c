#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* function declaration */
bool max(int **ret, int num1, int num2);

int main ()
{
    /* local variable definition */
    int a = 100;
    int b = 200;
    int *retmax = NULL;


    /* calling a function to get max value */
    if(max(&retmax, a, b)){
        printf( "Max value is : %d\n", *retmax );

        free(ret);
    }

    return 0;
}

/* function returning the max between two numbers */
bool max(int **ret, int num1, int num2)
{
    int *result = NULL;

    result = (int*)malloc(sizeof(int));
    if(!result) return false;


    if (num1 > num2)
        *result = num1;
    else
        *result = num2;

    /*
     * vi ret la pointer-to-pointer nen *ret chua dia chi cua pointer ma no tro den
     * tuc la *ret = retmax
     * nhu vay nho co pointer-to-pointer ma ta co the dua pointer tu ngoai vao
     * trong ham de cap phat bo nho va thao tac du lieu tren no
    */
    *ret = result;
    return true;
}

