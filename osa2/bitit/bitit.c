#include <stdio.h>
#include <math.h>
#include "bitit.h"

void scharBitit(signed char x){
  int i, bit;
  int zero = 0;
  int one = 0;
  printf("%i\n", x);
  for (i = __CHAR_BIT__-1; i >= 0; i--){
    /*printf("i: %i ", i);
    printf("bit: %i\n", (x >> i) & 1);*/
    bit = (x >> i) & 1;
    printf("%i", bit);
    if (bit == 1) one++;
    if (bit == 0) zero++;
  }
  printf("\n%i\n%i", zero, one);

  printf("\n");
}

void shortBitit(short int x){
  int i, bit;
  int zero = 0;
  int one = 0;
  printf("%i\n", x);
  for (i = sizeof(short int)*__CHAR_BIT__-1; i >= 0; i--){
    /*printf("i: %i ", i);
    printf("bit: %i\n", (x >> i) & 1);*/
    bit = (x >> i) & 1;
    printf("%i", bit);
    if (bit == 1) one++;
    if (bit == 0) zero++;
  }
  printf("\n%i\n%i", zero, one);

  printf("\n");
}

void intBitit(int x){
  int i, bit;
  int zero = 0;
  int one = 0;
  printf("%i\n", x);
  for (i = sizeof(int)*__CHAR_BIT__-1; i >= 0; i--){
    /*printf("i: %i ", i);
    printf("bit: %i\n", (x >> i) & 1);*/
    bit = (x >> i) & 1;
    printf("%i", bit);
    if (bit == 1) one++;
    if (bit == 0) zero++;
  }
  printf("\n%i\n%i", zero, one);

  printf("\n");
}

void longBitit(long int x){
  int i, bit;
  int zero = 0;
  int one = 0;
  printf("%li\n", x);
  for (i = sizeof(long int)*__CHAR_BIT__-1; i >= 0; i--){
    /*printf("i: %i ", i);
    printf("bit: %i\n", (x >> i) & 1);*/
    bit = (x >> i) & 1;
    printf("%i", bit);
    if (bit == 1) one++;
    if (bit == 0) zero++;
  }
  printf("\n%i\n%i", zero, one);

  printf("\n");
}