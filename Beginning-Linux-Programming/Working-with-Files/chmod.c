#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{

    const char *path="/home/ninhld/Github/eslinuxprogramming/Beginning-Linux-Programming/Working-with-Files/testfile.txt";
    chmod(path, S_IRUSR|S_IRGRP|S_IROTH);

//#define	S_IRUSR	__S_IREAD	/* Read by owner.  */
//#define	S_IWUSR	__S_IWRITE	/* Write by owner.  */
//#define	S_IXUSR	__S_IEXEC	/* Execute by owner.  */

//#define	S_IRGRP	(S_IRUSR >> 3)	/* Read by group.  */
//#define	S_IWGRP	(S_IWUSR >> 3)	/* Write by group.  */
//#define	S_IXGRP	(S_IXUSR >> 3)	/* Execute by group.  */

//#define	S_IROTH	(S_IRGRP >> 3)	/* Read by others.  */
//#define	S_IWOTH	(S_IWGRP >> 3)	/* Write by others.  */
//#define	S_IXOTH	(S_IXGRP >> 3)	/* Execute by others.  */



    return 0;
}
