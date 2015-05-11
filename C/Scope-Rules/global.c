#include <stdio.h>


int count = 5; /* global variables */

void func_count();

int main()
{

    printf("%s<%d>: count = %d \n", __FUNCTION__, __LINE__, count) ;

    func_count();

    return 0;
}


void func_count(){

    int count = 0; /* local variables */
    while(count < 5){
        printf("%s: count = %d \n", __FUNCTION__, count) ;
        count++;
    }
}


