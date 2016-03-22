#include <stdio.h>
#include <string.h>

int main()
{
   FILE *fp = NULL;
   int nread;
   char buffer[100];
   memset(buffer, '\0', sizeof(buffer));

   /* Open file for both reading */
   fp = fopen("testfile.dt", "rb");
   if(!fp) return 1;

   /* Read and display data */
   nread = fread(buffer, sizeof(char), 100, fp);
   printf("nread: %d, str: %s\n", nread, buffer);

   memset(buffer, '\0', sizeof(buffer));
   nread = fread(buffer, sizeof(char)*2, 10, fp);
   printf("nread: %d, str: %s\n", nread, buffer);

   fclose(fp);
   return(0);
}
