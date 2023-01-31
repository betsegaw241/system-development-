/* 
	C Program to demonstrate 
	the use of chdir()
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>

int main()
{
	char s[100];

	/* printing current working directory */
	printf("%s\n", getcwd(s, 100));

	/* using the command */
	chdir("..");

	/* printing current working directory */
	printf("%s\n", getcwd(s, 100));

	/* after chdir is executed */
	return 0;
}
