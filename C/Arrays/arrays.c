#include <stdio.h>

#define ARRAY_SIZE 5

struct SomeThing{
    int nvalue;
    float fvalue;
};

int main()
{

    int i;
    /* mac dinh gia tri khoi tao tat ca cac phan tu = 0 */
    int narray[ARRAY_SIZE];
    /* khoi tao gia tri ban dau cho tat ca cac phan tu*/
    int n1array[ARRAY_SIZE] = {0, 1, 2, 3, 4};
    /* khoi tao gia tri ban dau cho tat ca cac phan tu = 1*/
    int n2array[ARRAY_SIZE] = {1, };
    struct SomeThing sArray[ARRAY_SIZE];


    for(i = 0; i < ARRAY_SIZE; i++){
        narray[i] = i;
        printf("narray[%d] = %d \n", i, narray[i]);

        sArray[i].nvalue = i;
        sArray[i].fvalue = i;
    }

    return 0;
}

