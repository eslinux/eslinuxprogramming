#include "math_operator.h"
#include <stdbool.h>


bool add(float a, float b, float *ret){
    *ret  = (a+b);
    return true;
}

bool sub(float a, float b, float *ret){
    *ret  = (a-b);
    return true;
}

bool multi(float a, float b, float *ret){
    *ret  = (a*b);
    return true;
}

bool devision(float a, float b, float *ret){
    if(b != 0){
        *ret  = ((float)a/b);
        return true;
    }

    return false;
}

