// C program to illustrate
// close system call in UNIX File IO

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        // assume that iwin.txt is already created
        int fd1 = open("iwin.txt", O_RDONLY);
        if (fd1 < 0)
        {
                perror("c1");
                exit(1);
        }
        printf("opened the fd = % d\n", fd1);

        // Using close system Call
        if (close(fd1) < 0)
        {
                perror("c1");
                exit(1);
        }
        printf("closed the fd.\n");

        // assume that iwin.txt is already created
        /*
        int fd1 = open("iwin.txt", O_RDONLY, 0);
        close(fd1);

        // assume that iwin2.txt is already created
        int fd2 = open("iwin2.txt", O_RDONLY, 0);

        printf("fd2 = % d\n", fd2);
        exit(0);*/

}