#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char *tmp;

    tmp = getenv("PATH");
    if(tmp)
        printf("PATH : %s\n", tmp);

    tmp = getenv("HOME");
    if(tmp)
        printf("HOME : %s\n", tmp);

    tmp = getenv("ROOT");
    if(tmp){
        printf("ROOT : %s\n", tmp);
    } else{
        char *root = "ROOT=/root";
        putenv(root);
        printf("set ROOT : %s\n", getenv("ROOT"));
    }

    return(0);
}
