#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **pp = NULL; /* pointer to pointer */
    int *p = NULL; /* pointer */
    int a = 1;

    pp = &p;
    printf("Gia tri cua pp: %x \n", pp); /* dia chi cua p */
    printf("Gia tri vung nho ma pp tro den: %d \n", *pp); /* NULL(0) */

    p = &a;
    printf("Gia tri cua pp: %x \n", pp); /* dia chi cua p */
    printf("Gia tri vung nho ma pp tro den: %d \n", *pp); /* dia chi cua a */

    return 0;
}

