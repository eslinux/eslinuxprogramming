#include <stdio.h>
#include <string.h>

void recursion(int in){
    printf("in = %d \n", in);

    if(in > 0){
        in--;
        recursion(in);
    }else{
        //exit
    }
}



void recursion_deep3(int in){
    printf("in = %d \n", in);

    if(in > 0){
        in--;
    }else{
        //exit
    }
}
void recursion_deep2(int in){
    printf("in = %d \n", in);

    if(in > 0){
        in--;
        recursion_deep3(in);
    }else{
        //exit
    }
}
void recursion_deep1(int in){
    printf("in = %d \n", in);

    if(in > 0){
        in--;
        recursion_deep2(in);
    }else{
        //exit
    }
}
void recursion_deep(int in){
    printf("in = %d \n", in);

    if(in > 0){
        in--;
        recursion_deep1(in);
    }else{
        //exit
    }
}




int main()
{

    recursion(3);
    printf("\n");
    recursion_deep(3);
    return 0;
}


