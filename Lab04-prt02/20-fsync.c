/* 
   C program to demonstrate 
   the fsync() function
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
   char *A = "Welcome to Linux and C programming...";
   int fd, r;
   fd = open("fsync.txt", O_RDONLY | O_CREAT);
   if (fd < -1) {
      perror("creat()");
      exit(1); }
   r = write(fd, A, strlen(A));
   if(r < -1) {
      perror("write()");
      exit(1); }
   fsync(fd);
   close(fd);
   return 0;
}