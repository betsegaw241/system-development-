/*
   C program to demonstrate
   group in linux
*/
#include<sys/types.h>
#include<sys/stat.h>
#include <grp.h>
#include <stdio.h>

int main() {
  struct stat info;
  struct group *grp;

  if (stat(".", &info) < 0)
    perror("stat() error");
  else {
    printf("The root is owned by gid %d\n", info.st_gid);
    if ((grp = getgrgid(info.st_gid)) == NULL)
      perror("getgrgid() error");
    else
      printf("This group name is %s\n", grp->gr_name);
      printf("This group passwd is %s\n", grp->gr_passwd);
      printf("This group gid is %d\n", grp->gr_gid);
  }
  return 0;
}