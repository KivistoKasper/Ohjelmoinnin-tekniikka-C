#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]){
  int i, a, flag; 

  for (i = 1; i < argc; i++ ){
    a = atoi(argv[i]);
    flag = 0;

    printf("%i:", a);
    if (a >= SCHAR_MIN && a <= SCHAR_MAX){
      if (!flag){flag = 1;}
      printf(" signed char");
    }

    if (a >= 0 && a <= UCHAR_MAX){
      if (!flag){flag = 1;}
      else if (flag){printf(",");}
      printf(" unsigned char");
    }

    if (a >= SHRT_MIN && a <= SHRT_MAX){
      if (!flag){flag = 1;}
      else if (flag){printf(",");}
      printf(" short int");
    }

    if (a >= 0 && a <= USHRT_MAX){
      if (!flag){flag = 1;}
      else if (flag){printf(",");}
      printf(" unsigned short int");
    }

    if (a >= INT_MIN && a <= INT_MAX){
      if (!flag){flag = 1;}
      else if (flag){printf(",");}
      printf(" int");
    }
    printf("\n");
  }

  return 0;
}