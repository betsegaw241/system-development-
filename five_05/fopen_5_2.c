/*
   c program to demonstrate
   the fopen() function.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    FILE *fp;
    int displayer;

    fp = fopen("report.dat", "w+" );
    if( fp != NULL ) {
    /* */
        fprintf(fp, "%s %s %s", "Welcome","to", " System programming lab session.\n");
        fclose( fp );
        printf("Its done!\n");
        return EXIT_SUCCESS;
    /**/
    /* For reading file/
       while (1) {
          displayer = fgetc(fp);
          if (feof(fp)){
              break;}
          printf("%c", displayer);
        }
     printf("\n");
     fclose(fp);
 / */

 }
    return EXIT_FAILURE;
}