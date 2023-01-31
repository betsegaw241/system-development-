/*
   C Program to demonstrate the use of umask()
*/

#include <stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
        umask(0);
        if (creat("iwin.txt",S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |    S_IROTH | S_IWOTH) < 0)
        perror("creat error for iwin txt");

        umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
        if (creat("iwin2.txt", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH) < 0)
        perror("creat error iwin2 text");
        exit(0);
}

/*
int main()
{
        int fd;
        mode_t old;
        printf("Old mask is: %i\n",old=umask(S_IRWXG));
        if((fd = open("iwin.txt", O_RDWR | O_CREAT))<0){
                perror("Creat() error");
        }
    else{
        system("ls -l iwin.txt");
        close(fd);
    }
 umask(old);
}
*/