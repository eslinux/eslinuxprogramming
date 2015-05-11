#include <stdio.h>

extern void func_count();

int main()
{

    int count = 5;
    while(count--)
    {
       printf("%s: count = %d \n", __FUNCTION__, count);
    }

    func_count();

    return 0;
}
