#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p = NULL;
    int a = 1;
    int b = 2;

    p = &a;
    printf("Gia tri cua p: %x \n", p);
    printf("Gia tri vung nho ma p tro den: %d \n", *p);


    p = &b;
    printf("Gia tri cua p: %x \n", p);
    printf("Gia tri vung nho ma p tro den: %d \n", *p);

    p = NULL;
    p = (int*)malloc(sizeof(int));
    if(p){
        printf("Gia tri cua p: %x \n", p); /* chua dia chi cua vung nho vua duoc cap phat boi lenh malloc */
        printf("Gia tri vung nho ma p tro den: %d \n", *p);

        *p = 10;
        printf("Gia tri cua p: %x \n", p);
        printf("Gia tri vung nho ma p tro den: %d \n", *p);
    }


    if(p){
        free(p);
    }


    return 0;
}

