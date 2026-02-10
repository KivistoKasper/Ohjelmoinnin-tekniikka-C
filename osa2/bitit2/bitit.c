#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "bitit.h"

void kaannaScharBitit(signed char *x){
  int i, j;
  int bit1, bit2;
  j = 0;
  for (i = __CHAR_BIT__-1; i >= 0; i--){
    if (i < __CHAR_BIT__/2 ){
      break;
    }
    bit1 = (*x >> i) & 1;
    bit2 = (*x >> j) & 1;
    /*printf("1: %i  -  2: %i\n", bit1, bit2);*/
    
    *x &= ~(1 << i);
    *x &= ~(1 << j);

    *x |= (bit2 << i);
    *x |= (bit1 << j);
    
    j++;
  }
}

void kaannaShortBitit(short *x){
  int i, j;
  int bit1, bit2;
  j = 0;
/*  printf("%hd\n", *x);*/
  for (i = __CHAR_BIT__*2-1; i >= 0; i--){
    if (i < __CHAR_BIT__*2/2 ){
      break;
    }
    bit1 = (*x >> i) & 1;
    bit2 = (*x >> j) & 1;
/*    printf("1: %i  -  2: %i\n", bit1, bit2);*/
    
    *x &= ~(1 << i);
    *x &= ~(1 << j);

    *x |= (bit2 << i);
    *x |= (bit1 << j);
    
    j++;
  }
/*  printf("%hd\n", *x);*/
}

void kaannaIntBitit(int *x){
  int i, j;
  int bit1, bit2;
  j = 0;
/*  printf("%i\n", *x);*/
  for (i = __CHAR_BIT__*4-1; i >= 0; i--){
    if (i < __CHAR_BIT__*4/2 ){
      break;
    }
    bit1 = (*x >> i) & 1;
    bit2 = (*x >> j) & 1;
/*    printf("1: %i  -  2: %i\n", bit1, bit2);*/
    
    *x &= ~(1 << i);
    *x &= ~(1 << j);

    *x |= (bit2 << i);
    *x |= (bit1 << j);
    
    j++;
  }
/*  printf("%i\n", *x);*/
}

void kaannaLongBitit(long *x){
  int i, j;
  long int bit1, bit2;
  j = 0;
/*  printf("%li\n", *x);*/
  for (i = sizeof(long int)*CHAR_BIT-1; i >= 0; i--){
    if (i < sizeof(long int)*CHAR_BIT/2 ){
      break;
    }
    bit1 = (*x >> i) & 1L;
    bit2 = (*x >> j) & 1L;
/*    printf("1: %i  -  2: %i\n", bit1, bit2);*/
    
    *x &= ~(1L << i);
    *x &= ~(1L << j);

    *x |= (bit2 << i);
    *x |= (bit1 << j);
    
    j++;
  }
/*  printf("%li\n", *x);*/
}
