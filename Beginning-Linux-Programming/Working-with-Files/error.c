#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(void)
{
    FILE *fd = NULL;

    // Reset errno to zero before calling fopen().
    errno = 0;

    // Lets open a file that does not exist
    fd = fopen("Linux.txt","r");
    if(errno || (NULL == fd))
    {
        // Use strerror to display the error string

#if 1
        perror("The function fopen failed due to");
#else
        printf("The function fopen failed due to %s \n", strerror(errno));
#endif
        return -1;
    }

    return 0;
}
