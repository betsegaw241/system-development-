/*
   C program to demonstrate
   the fork() function. 
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

	fork();

	printf("System Programming!\n");
	return 0;
}
