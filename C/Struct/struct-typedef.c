
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Person
{
    char  name[20];
    int age;
    float height;
}Person;


int main()
{

    Person presidentUSA;

    sprintf(presidentUSA.name, "Obama");
    presidentUSA.age = 53;
    presidentUSA.height = 1.85f;

    printf("\n");
    printf("presidentUSA.name = %s \n", presidentUSA.name);
    printf("presidentUSA.age = %d \n", presidentUSA.age);
    printf("presidentUSA.height = %f \n", presidentUSA.height);


    return 0;
}
