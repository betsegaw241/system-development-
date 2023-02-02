/*
   C program to demonstrate
   job-controls signals
*/

#include<stdlib.h>
#include<unistd.h>
#include <signal.h>
#include <stdio.h>

int main( ) {
   int pid1, pid2;
   pid1 = fork();
  if (pid1 == 0) {

     while(1)
      {
        printf("pid1 isalive\n");
        sleep(1);
      }
  }
  pid2 = fork();

   if (pid2 == 0) {

   while (1)
   {
       printf("pid2 is alive\n");
       sleep(1);
   }
 }
   sleep(3); kill(pid1,SIGSTOP);
   sleep(3); kill(pid1,SIGCONT);
   sleep(3); kill(pid1,SIGINT);
   kill(pid2,SIGINT);
}