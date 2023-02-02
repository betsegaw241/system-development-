/*
  C program to demonstrate
  setjmp() & longjmp() UNIX process control function
*/
#include <stdio.h>
#include <setjmp.h>
jmp_buf buf;

void func()
 {
  printf("Welcome \n");

  /* jump to the piont setup by setjmp*/
  longjmp(buf, 1);
  printf("Value 2\n");
 }
int main()
 {
  /* setup jump position using buf and return*/
   if(setjmp(buf))
        {
         printf("Value 3\n");
        }
   else
   {
      printf("Value 4\n");
      func();
   }
  return 0;
 }