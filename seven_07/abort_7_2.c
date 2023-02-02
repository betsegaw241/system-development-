/*
  C program to demonstrate
  abort() siganls

*/

#include <stdlib.h>

int main( void )
{
    int major_error = 1;

    if( major_error )
        abort(); /* SIGABRT  */

    /* You'll never get here. */
    return EXIT_SUCCESS;
}