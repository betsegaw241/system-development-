/*
  C program to demonstrate
  kill() & raise() siganls
*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<signal.h>

 void sig_usr(int signo)
 {
  printf("received SIGUSR1 signal!\n");
 }

 int main(int argc, char* argv[])
 {
  if(signal(SIGUSR1, sig_usr) == SIG_ERR) {
   printf("signal error!\n");
   exit(1);
  }

  // Send signal to itself
  if(kill(getpid(), SIGUSR1) < 0) {
   printf("kill error!\n");
   exit(2);
  }

  // Check if the process still exists
  if(kill(getpid(), 0) < 0) {
   printf("kill error! probably process doesn't exist!\n");
   exit(2);
  }

  // Use raise system call to send signal to itself
  if(raise(SIGUSR1) < 0) {
   printf("raise error!\n");
   exit(3);
  }

  exit(0);
 }