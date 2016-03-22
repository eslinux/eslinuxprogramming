#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int idata; /*  default: 0 */
    bool bdata; /*  default: false */
    float *pdata; /*  default: NULL */


    if(!idata){
        /*  code here */
        printf("goto here 1\n");
    }

    if(!bdata){
        /*  code here */
        printf("goto here 2\n");

    }


    if(!pdata){
        /*  code here */
        printf("goto here 3\n");
        pdata = (float*)malloc(sizeof(float));
    }

    *pdata = 10;
    free(pdata);


    return 1;
}
