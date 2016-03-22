#include <stdio.h>
#include "debug.h"


#define D_FEATURE_1
//#define D_FEATURE_2
#define D_FEATURE_3

#define D_FEATURE_4 1





#define PRINT_MAX(a, b) \
    if(a > b){ \
        DBG("MAX = a = : %d \n", a); \
    }else{ \
        DBG("MAX = b = : %d \n", b); \
    }


int main()
{

    int speed = 10;

    if(speed < 0){
        FATAL("fail ! \n");
        speed = 0;
    }else{
        DBG("speed: %d \n", speed);
        speed++;
    }


#ifdef D_FEATURE_1
    DBG("code for D_FEATURE_1 \n")   ;
#endif

#ifdef D_FEATURE_2
    DBG("code for D_FEATURE_2 \n")   ;
#endif

#if defined(D_FEATURE_3)
    DBG("code for D_FEATURE_3 \n")   ;
#endif

#if (D_FEATURE_4 == 1)
    DBG("code for D_FEATURE_4 \n")   ;
#endif


    PRINT_MAX(1, 2);
    PRINT_MAX(3, 2);
    PRINT_MAX(10, 20);
    PRINT_MAX(11, 2);

    return 0;
}


