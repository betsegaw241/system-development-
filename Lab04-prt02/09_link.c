/*
        C program to create an Hard Link
        to the existing file
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
        /* Link function  */

        int l = link(argv[1], argv[2]);

        /* int l = unlink(argv[1]); */

        /* argv[1] is existing file name
           argv[2] is link file name  */

        if (l == 0) {
                printf("Hard Link created succuessfuly.\n");
        }
        else
        {
          printf("link is not created between files.\n");
        }

        return 0;
}
