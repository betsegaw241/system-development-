/* 
	C program to demonstrate
	To the readdir() function
	To the rewinddir() function that resets the position of the directory
	To the closedir() function
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *entry;
    int files = 0;

    folder = opendir(".");
    if(folder == NULL)
    {
        perror("Unable to read directory");
        return(1);
    }

    while( (entry=readdir(folder)) )
    {
        files++;
        printf("File %3d: %s\n",
                files,
                entry->d_name
              );
    }
	
 /* rewinddir(folder); */
    closedir(folder);
	
    return(0);
}