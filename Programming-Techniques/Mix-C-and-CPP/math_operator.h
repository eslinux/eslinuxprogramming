#ifndef MATH_OPERATOR_H
#define MATH_OPERATOR_H

#ifdef __cplusplus
extern "C"{
#endif

// ... your include, types, methods, variables ...


#include <stdio.h>

bool add(float a, float b, float *ret);
bool sub(float a, float b, float *ret);
bool multi(float a, float b, float *ret);
bool devision(float a, float b, float *ret);

#ifdef __cplusplus
} //extern "C"{
#endif

#endif // MATH_OPERATOR_H
