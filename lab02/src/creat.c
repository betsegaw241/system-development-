// C program to describe
// creat() function in UNIX File IO system call

#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>

int main() {
  char fn[]="iwin.txt", text[]="This is a system programming lab session.";
  int fd;
  fd = creat(fn, S_IRUSR | S_IWUSR);
  if (fd < 0)
    {
     perror("creat() error");
    }
  else {
    write(fd, text, strlen(text));
    close(fd);
   // unlink(fn);
  }
 printf("File discribiter fd= %d\n", fd);

}
