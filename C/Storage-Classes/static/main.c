#include <stdio.h>
#include "func.h"

static int count = 5; /* global variable */

int main()
{

    while(count--)
    {
       printf("%s: count = %d \n", __FUNCTION__, count);
    }

    func_count();

    return 0;
}
