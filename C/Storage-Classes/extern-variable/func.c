#include "func.h"

extern int count;

void func_count(){

    while(count < 10){
        printf("%s: count = %d \n", __FUNCTION__, count) ;
        count++;
    }
}
