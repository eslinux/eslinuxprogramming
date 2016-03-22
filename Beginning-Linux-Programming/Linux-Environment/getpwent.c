/*
 * This program loops, reading a login name from standard
 * input and checking to see if it is a valid name. If it
 * is not valid, the entire contents of the name in the
 * password database are printed.
 */
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

void main()
{
    struct passwd *pw;

    setpwent( );
    while( ( pw=getpwent( ) ) != ( struct passwd * )0 )
        printf( "%s\n", pw->pw_name );
    endpwent();
}
