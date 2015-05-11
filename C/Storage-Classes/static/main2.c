#include <stdio.h>

/* function declaration */
void func(void);


main()
{
   int count = 5;
   while(count--)
   {
      func();
   }
   return 0;
}


/* function definition */
void func( void )
{
   static int i = 5; /* local static variable, must set initial value, is 5 */
   int k = 5; /* local variable */

   printf("i = %d, k = %d \n", i, k);

   i++;
   k++;
}
