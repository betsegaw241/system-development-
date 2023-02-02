/*
  C program to demonstrate
  fwide() function
*/

#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>

int check(int ret)
 {
    if (ret > 0){
        printf("Ret value is %d. The stream is wide oriented!\n",ret);
    }
    else if(ret < 0) {
        printf("Ret value is %d. The stream is byte oriented!\n",ret);
    }
    else if (ret == 0){
        printf("Ret value is %d. The stream has no orientation!\n",ret);
    }
  }
int main()
  {
    int ret=fwide(stdin, 0);
    check(ret);
    ret = fwide(stdin, -1); /* Negative 1 is passed as second argument */
    check(ret);
  }