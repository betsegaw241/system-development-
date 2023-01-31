// C program to describe
// Write system call in UNIX File IO

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
int sz;

int fd = open("iwin.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd < 0)
{
        perror("r1");
        exit(1);
}

sz = write(fd, "Hello students\n", strlen("Hello students\n"));

printf("called write(%d, \"Hello students\\n\", %ld)."
        " It returned %d\n", fd, strlen("Hello students\n"), sz);

close(fd);

/*
    int fd[2];
    char buf1[12] = "hello world";
    char buf2[12];

    // assume iwin.txt is already created
    fd[0] = open("iwin.txt", O_RDWR);
    fd[1] = open("iwin.txt", O_RDWR);
    write(fd[0], buf1, strlen(buf1));
    write(1, buf2, read(fd[1], buf2, 12));
    close(fd[0]);
    close(fd[1]);
    return 0
        */
}