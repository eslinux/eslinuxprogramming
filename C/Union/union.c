#include <stdio.h>
#include <string.h>

union Data
{
   int i;
   float f;
   char  str[20];
} data;


int main()
{


    printf("sizeof data.i: %d \n", sizeof(data.i));
    printf("sizeof data.f: %d \n", sizeof(data.f));
    printf("sizeof data.str: %d \n", sizeof(data.str));
    printf("sizeof data: %d \n", sizeof(data));

    data.i = 20;
    printf("\n");
    printf("data.i = %d \n", data.i);
    printf("data.f = %f \n", data.f);
    printf("data.str = %s \n", data.str);



    data.f = 20.5f;
    printf("\n");
    printf("data.i = %d \n", data.i);
    printf("data.f = %f \n", data.f);
    printf("data.str = %s \n", data.str);



    strcpy(data.str, (char*)"Hello");
    printf("\n");
    printf("data.i = %d \n", data.i);
    printf("data.f = %f \n", data.f);
    printf("data.str = %s \n", data.str);

    return 0;
}
