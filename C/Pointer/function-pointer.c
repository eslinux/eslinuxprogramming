#include <stdio.h>

/* Function Pointer */
int (*pt2Function)(float, char, char) = NULL; // C


/* Test function */
int DoIt (float a, char b, char c) {
    printf("DoIt\n");
    return a+b+c;
}
int DoMore(float a, char b, char c){
    printf("DoMore\n");
    return a-b+c;
}


int main()
{

    int ret;

    pt2Function = DoIt; // short form
    ret = pt2Function(1, 2, 3);
    printf("ret value: %d \n", ret);

    pt2Function = &DoMore; // correct assignment using address operator
    ret = pt2Function(1, 2, 3);
    printf("ret value: %d \n", ret);

    return 0;
}

