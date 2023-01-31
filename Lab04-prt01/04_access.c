/*
   C program to check whether a specified file exist
   or not using access() function
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int isFileExist = 0;

    isFileExist = access("iwin.txt", F_OK);

    if (isFileExist != -1) {
        printf("file exists.\n");
        return 1;
    }

    printf("file does not exists.\n");
    return 0;
}


/*
int main( int argc, char **argv )
  {
    if( argc!= 2 ) {
      fprintf( stderr, 
        "use: readable <filename>\n" );
      return EXIT_FAILURE;
    }

    if( !access( argv[1], R_OK ) ) {
      printf( "ok to read %s\n", argv[1] );
      return EXIT_SUCCESS;
    } else {
      perror( argv[1] );
      return EXIT_FAILURE;
    }
  }

*/