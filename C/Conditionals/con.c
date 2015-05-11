#include <stdio.h>


int main()
{

    int a = 0;
    int b;

    b = (a > 5) ? 5:a;
    printf("a = %d, b = %d\n", a, b);

    //The same as
    if(a > 0){
       b = 5;
    } else {
       b = a;
    }
    printf("a = %d, b = %d\n", a, b);

    return 0;
}


