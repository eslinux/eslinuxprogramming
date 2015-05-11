#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char  name[20];
    int age;
    float height;
};


struct Info
{
    int age;
    float height;
};

int main()
{

    struct Person presidentUSA= {
        .name = "hello",
        .age = 53,
        .height = 1.85f,
    };

//    sprintf(presidentUSA.name, "Obama");
//    presidentUSA.age = 53;
//    presidentUSA.height = 1.85f;

    printf("\n");
    printf("presidentUSA.name = %s \n", presidentUSA.name);
    printf("presidentUSA.age = %d \n", presidentUSA.age);
    printf("presidentUSA.height = %f \n", presidentUSA.height);


    return 0;
}
