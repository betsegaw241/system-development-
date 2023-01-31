/*
   C program to demonstrate
   the fstat () system call function. 
*/

#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
int main()
{
    char fl[] = "iwin.c";
    struct stat inf;
    int fd;
    if ((fd=creat(fl,S_IWUSR))<0)
        perror("creat() error");
    else
    {
        // close(fd) ;
            if(fstat(fd,&inf)!=0)
                perror("fstat() error");
            else
            {
             puts("We are getting below information from fstat() for a file:");
                printf(" File links :%d \n", (int) inf.st_nlink ) ;
                printf(" File uid :%d \n", (int) inf.st_uid ) ;
                printf(" File inode :%d \n", (int) inf.st_ino ) ;                             
				printf(" File gid :%d \n", (int) inf.st_gid ) ;
                printf(" File dev id :%d \n", (int) inf.st_dev ) ;
                printf(" File mode :%08x \n", inf.st_mode ) ;
                printf(" Best IO blksize :%d \n",(int) inf.st_blksize ) ;
                printf(" Block allocated :%d \n",(int) inf.st_blocks ) ;
                printf(" Time to access :%d \n",(int) inf.st_atime ) ;
                printf(" Time to last modify :%d \n",(int) inf.st_mtime ) ;
                printf(" Time to status change :%d \n",(int) inf.st_ctime ) ;
            }
        }
      // close(fd);
    return 0 ;
}