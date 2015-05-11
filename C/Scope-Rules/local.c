#include <stdio.h>

void func_count();

int main()
{


    {
        int count = 5; /* local variables */
        printf("%s<%d>: count = %d \n", __FUNCTION__, __LINE__, count) ;
    }

    int a = 0;
    switch(a){
    case 0:{
        int count = 0; /* local variables */
        printf("%s<%d>: count = %d \n", __FUNCTION__, __LINE__, count) ;
    }
        break;
    case 1:{
        int count = 1; /* local variables */
        printf("%s<%d>: count = %d \n", __FUNCTION__, __LINE__, count) ;
    }
        break;
    default:
        break;

    }


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

