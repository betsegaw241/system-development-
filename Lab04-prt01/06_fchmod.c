/*
   C program to demonstrate
   the fchmod() function
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include<errno.h>
#include <sys/types.h>
#include <sys/stat.h>

int main( int argc, char **argv )
{
    int i,fd;
    int ecode = 0;

    for( i = 1; i < argc; i++ ) {
        fd = open(argv[i], O_RDONLY | O_CREAT);
        if(fd>0){
             fchmod(fd, S_IRUSR| S_IWUSR| S_IRGRP| S_IROTH);
                close(fd);
            }
         else{
            perror( argv[i] );
            ecode++;
        }
    }

    return ecode;
}