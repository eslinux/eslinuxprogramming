#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char  name[20];
    int age;
    float height;
};


int main()
{

    struct Person presidentUSA;
    struct Person *presidentRussia = NULL;

    printf("sizeof presidentUSA.name: %d \n", sizeof(presidentUSA.name));
    printf("sizeof presidentUSA.age: %d \n", sizeof(presidentUSA.age));
    printf("sizeof presidentUSA.height: %d \n", sizeof(presidentUSA.height));
    printf("sizeof presidentUSA: %d \n", sizeof(presidentUSA));

    sprintf(presidentUSA.name, "Obama");
    presidentUSA.age = 53;
    presidentUSA.height = 1.85f;

    printf("\n");
    printf("presidentUSA.name = %s \n", presidentUSA.name);
    printf("presidentUSA.age = %d \n", presidentUSA.age);
    printf("presidentUSA.height = %f \n", presidentUSA.height);



    presidentRussia = (struct Person*)malloc(sizeof(struct Person));
    if(!presidentRussia) goto _exit;

    sprintf(presidentRussia->name, "Putin");
    presidentRussia->age = 62;
    presidentRussia->height = 1.7f;

    printf("\n");
    printf("presidentRussia.name = %s \n", presidentRussia->name);
    printf("presidentRussia.age = %d \n", presidentRussia->age);
    printf("presidentRussia.height = %f \n", presidentRussia->height);

    free(presidentRussia);

_exit:
    return 0;
}
