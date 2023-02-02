/*
  C prgram to demonstrate
  wait() function in UNIX
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
        pid_t cpid;
        if (fork()== 0)
                exit(0);   /* terminate child */
        else
		{
          cpid = wait(NULL); /* wait until a state change in the child process to reaping the parent */
          printf("Parent pid = %d\n", getpid());
          printf("Child pid = %d\n", cpid);
		}
        return 0;
}