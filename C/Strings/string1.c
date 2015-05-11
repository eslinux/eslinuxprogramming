#include <stdio.h>
#include <stdlib.h>

int main()
{

    char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting2[] = "Hello";
    char *greeting3 = "Hello";

    printf("greeting1: %s \n", greeting1);
    printf("greeting2: %s \n", greeting2);
    printf("greeting3: %s \n", greeting3);


    /* Array chuoi string */
    char greeting22[2][32] = {"Hello", "Hello2"}; /* array co 2 chuoi string, moi chuoi toi da 32 ki tu  */
    char *greeting32[32] = {"Hello", "Hello2"};

    printf("greeting22[0]: %s \n", greeting22[0]);
    printf("greeting22[1]: %s \n", greeting22[1]);

    printf("greeting32[0]: %s \n", greeting32[0]);
    printf("greeting32[1]: %s \n", greeting32[1]);


    return 0;
}

