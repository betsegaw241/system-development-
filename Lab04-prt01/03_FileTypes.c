/*
   C program to demonstrate
   the stat() or lstat() or fstat() functions. 
   for all types of files in UNIX
*/

#include <sys/types.h>
#include<time.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct stat a;
    int i;

   for (i = 1; i < argc; i++) {
           printf("%s: ", argv[i]);

    if (lstat(argv[i], &a) == -1) {
        perror("some error for lstat");
        continue; 
		/* exit(EXIT_FAILURE); */
    }

   printf("So the input File type is =>   ");

  if ((a.st_mode & S_IFMT) == S_IFDIR)
        printf ("Directory\n");
  else if ((a.st_mode & S_IFMT) == S_IFIFO)
        printf ("FIFO/PIPE\n");
  else if ((a.st_mode & S_IFMT) == S_IFCHR)
        printf ("Character Device\n");
  else if ((a.st_mode & S_IFMT) == S_IFBLK)
        printf ("Block Device\n");
  else if ((a.st_mode & S_IFMT) == S_IFREG)
        printf ("Regular\n");
  else if ((a.st_mode & S_IFMT) == S_IFSOCK)
        printf ("Socket\n");
  else if ((a.st_mode & S_IFMT) == S_IFLNK)
        printf ("Symbolic Link\n");
  else
        printf("Unknown\n");

   printf("No. of link list:%ld\n", (long) a.st_nlink);
   printf("Ownership: UID=%ld   GID=%ld\n",
            (long) a.st_uid, (long) a.st_gid);

   printf("inode no %ld\n", (long) a.st_ino);
   printf("Mode: %lo (octal)\n",
            (unsigned long) a.st_mode);

   printf("Last change time is:%s", ctime(&a.st_ctime));
   printf("Last access time is: %s", ctime(&a.st_atime));
   printf("Last changing the content of the file time is: %s",
                   ctime(&a.st_mtime));

   printf("Preferred length of the blocks of giving I/O: %ld bytes\n",
            (long) a.st_blksize);
   printf("The length of the file is: %lld bytes\n",
            (long long) a.st_size);
   printf("Counting the no. of used  blocks %lld\n",
            (long long) a.st_blocks);

   exit(EXIT_SUCCESS);
  }
}