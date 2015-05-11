#include <stdio.h>
#include <string.h>

struct
{
    unsigned int age;  /* 0 <= age <= (2^32 - 1) */
} AgeLarger;

struct
{
    unsigned int age : 3; /* 0 <= age <= (2^3 - 1) */
} Age;

int main( )
{
    printf( "Sizeof( AgeLarger ) : %d\n", sizeof(AgeLarger) );
    printf( "Sizeof( Age ) : %d\n", sizeof(Age) );


    Age.age = 4;
    printf( "Age.age : %d\n", Age.age );

    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );

    Age.age = 8;
    printf( "Age.age : %d\n", Age.age );

    return 0;
}
