#include <stdio.h>

int main( int argc, char *argv[] )
{

    printf("Storage size for char : %d \n", sizeof(char));
    printf("Storage size for short : %d \n", sizeof(short));
    printf("Storage size for int : %d \n", sizeof(int));
    printf("Storage size for unsigned int : %d \n", sizeof(unsigned int));
    printf("Storage size for long : %d \n", sizeof(long));


    printf("Storage size for float : %d \n", sizeof(float));
    printf("Storage size for double : %d \n", sizeof(double));
    printf("Storage size for long double : %d \n", sizeof(long double));

    return 1;
}
