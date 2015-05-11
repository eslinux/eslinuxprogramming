#include <stdio.h>
#include <stdlib.h>

int main()
{

    //=============== MALLOC, REALLOC ================
    int *p = NULL;
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

    //=============== CALLOC ================
    int *pcalloc = NULL;
    pcalloc = (int*)calloc(1, sizeof(int));
    if(pcalloc){
        *pcalloc = 20;
        printf("Gia tri cua pcalloc: %x \n", pcalloc);
        printf("Gia tri vung nho ma pcalloc tro den: %d \n", *pcalloc);
    }
    if(pcalloc){
        free(pcalloc);
    }


    return 0;
}


