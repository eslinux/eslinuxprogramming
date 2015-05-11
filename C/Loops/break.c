

#include <stdio.h>

int main ()
{
    /* local variable definition */
    int a = 10;

    printf("========== while loop execution ============ \n");
    /* while loop execution */
    while( a < 20 )
    {
        printf("<while> value of a: %d\n", a);
        a++;
        if( a > 15)
        {
            /* terminate the loop using break statement */
            printf("<while> break \n");
            break;
        }
    }

    printf("========== do ... while loop execution ============ \n");
    a = 10;
    /* do ... while loop execution */
    do
    {
        printf("<do while> value of a: %d\n", a);
        a++;
        if( a > 15)
        {
            /* terminate the loop using break statement */
            printf("<do while> break \n");
            break;
        }
    }while( a < 20 );


    printf("========== for loop execution ============ \n");
    /* for loop execution */
    for(a = 10; a < 20; a++){
        printf("<for> value of a: %d\n", a);
        if( a > 15)
        {
            /* terminate the loop using break statement */
            printf("<for> break \n");
            break;
        }
    }


    printf("========== nested loop execution ============ \n");
    int b;
    a = 10;
    /* nested loop execution */
    while( a < 15 )
    {
        printf("<parent while> value of a: %d \n", a);
        a++;
        for(b = 0; b < 10; b++){
            printf("<child for> value of b: %d \n", b);
            if( b > 5)
            {
                /* terminate the loop using break statement */
                printf("<child for> break \n");
                break;
            }
        }

    }


    return 0;
}
