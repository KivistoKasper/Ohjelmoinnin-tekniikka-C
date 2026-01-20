#include <stdio.h>
#include <stdlib.h>
#include "caesar.h"

int main (int argc, char *argv[]){
  char aakkosto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char korvaavat[] = "OIUGENYMSWXVALPKHBQCZDFJRT";
  char mj[] = "OHJELMOINNIN TEKNIIKKA";
  
  printf("%s\n", aakkosto);
  printf("%s\n", korvaavat);
  printf("%s\n", mj);

  caesarKoodaa(mj, aakkosto, korvaavat);
  
  printf("%s\n", mj);

  caesarKoodaa(mj, korvaavat, aakkosto);

  printf("%s\n", mj);
  return 0;
} 