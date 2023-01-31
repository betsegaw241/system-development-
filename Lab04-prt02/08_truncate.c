/*
   C program to demonstrate
   to the truncate function in UNIX enviroment.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include<errno.h>
extern int errno;

int main()
{
        int fd = open("iwin.txt", O_RDONLY | O_CREAT);
        printf("fd = %d\n", fd);
        if (fd ==-1){
                printf("Error Number % d\n", errno);
                perror("Error");
        }
        else{
                if(ftruncate(fd,20)<0)
                  {
                        printf("Error Number % d\n", errno);
                        perror("Error");
                  }
        }
   return 0;
}
