#include <stdio.h>
#include <stdlib.h>

//=====================================================
int add(int a, int b){

    return (a+b);
}
int sub(int a, int b){

    return (a-b);
}

//=====================================================
int operator_math1(int a, int b, int (*ope_func)(int, int)){

    return ope_func(a, b);
}

//=====================================================
typedef int (*ope_function)(int, int);
int operator_math2(int a, int b, ope_function ope){

    return ope(a, b);
}

//=====================================================

int main ()
{

    int a = 3;
    int b = 2;
    int ret;


    ret =   operator_math1(a, b, &add);  /* hoac operator_math(a, b, add) */
    printf("a+b= %d \n", ret);
    ret =   operator_math1(a, b, &sub); /* hoac operator_math(a, b, sub) */
    printf("a-b= %d \n", ret);


    ret =   operator_math2(a, b, &add);  /* hoac operator_math2(a, b, add) */
    printf("a+b= %d \n", ret);
    ret =   operator_math2(a, b, &sub); /* hoac operator_math2(a, b, sub) */
    printf("a-b= %d \n", ret);

    return 0;
}

