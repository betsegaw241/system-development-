/* 
	C program to demonstrate 
	the opendir() function that used to open a directory.
 */

#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
    DIR *folder;

    folder = opendir(".");
    if(folder == NULL)
    {
        puts("Unable to read directory");
        return(1);
    }
    else
    {
        puts("Directory is opened!");
    }
    closedir(folder);

    return(0);
}