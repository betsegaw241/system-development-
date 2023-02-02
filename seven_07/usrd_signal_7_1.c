/*
   CPP program to illustrate
   User-defined Signal Handler
*/

#include<stdio.h>
#include<signal.h>
#include <unistd.h>

/* Handler for SIGINT, caused by
   Ctrl-C at keyboard */

void handle_sigint(int sig)
{
        printf("Caught signal %d\n", sig);
        (void) signal(SIGFPE,SIG_DFL);
}

int main()
{
        (void) signal(SIGFPE, handle_sigint);
        int a=13,b=0,result;
        result=a/b;
        printf("Result is : %d\n",result);
        return 0;
}