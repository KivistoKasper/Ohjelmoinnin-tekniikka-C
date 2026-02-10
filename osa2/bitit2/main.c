#include <stdio.h>
#include "bitit.h"

void tulostaScharBitit( signed char cx){
  int i;
  int bit;
  printf("%i\n", cx);
  for (i = __CHAR_BIT__-1; i >= 0; i--){
    bit = (cx >> i) & 1;
    printf("%i", bit);
  }
  printf("\n");
}


int main(int argc, char *argv[]){

  long int lx = 2015;
  signed char cx = lx;
  short sx = lx;
  int ix = lx;

  tulostaScharBitit(cx);
  kaannaScharBitit(&cx);
  tulostaScharBitit(cx);
  printf("\n");

  kaannaShortBitit(&sx);
  printf("\n");


  kaannaIntBitit(&ix);
  printf("\n");


  kaannaLongBitit(&lx);

  return 0;
}