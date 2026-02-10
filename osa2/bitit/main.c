#include <stdio.h>
#include "bitit.h"

int main(int argc, char *argv[]){
  int x = 2015;

  scharBitit(x);
   printf("\n");

  shortBitit(x);
   printf("\n");

  intBitit(x);
   printf("\n");

  longBitit(x);
   printf("\n");

  return 0;
}