/*
  C program to demonstrate
  getrlimit() & setrlimit() UNIX process control function
*/

#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>
int main()
 {
  struct rlimit r1;

  /* Obtain the current limits. */
  getrlimit(RLIMIT_CPU, &r1);
  printf("%d \n",RLIMIT_CPU);

  /* SET a CPU limit of one second. */
  r1.rlim_cur = 1;
  setrlimit(RLIMIT_CPU,&r1);

  /* Do busy work  */

  while(1);
  return 0;
 }