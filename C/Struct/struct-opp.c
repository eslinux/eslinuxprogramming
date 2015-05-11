#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
    char  name[20];
    int age;
    float height;

    void (*intro)(struct Person who);
};

void person_intro(struct Person who){

    printf("hello, I'am %s \n", who.name);
    printf("       age: %d \n", who.age);
    printf("       height: %f \n", who.height);

}

int main()
{

    struct Person presidentUSA = {
                .name = "Obama",
                .age = 53,
                .height = 1.85f,
                .intro = &person_intro
    };

    presidentUSA.intro(presidentUSA);


    return 0;
}
