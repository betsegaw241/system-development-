/*
	C program to demonstrate symlink function that used to
	create a symbolic link to "/usr/nto/include"
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( void )
  {
    if( symlink( "/usr/nto/include", "slink" ) == -1) {
      perror( "slink -> /usr/nto/include" );
      exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
  }
  
  /*
  int main(int argc, char* argv[])
{
    int sl = symlink(argv[1], argv[2]);
	
    if (sl == 0) {
        printf("Soft Link created"
               " succuessfuly");
    }
  
    return 0;
}
*/