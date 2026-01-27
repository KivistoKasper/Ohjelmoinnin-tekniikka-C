#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void ucharIntervalli(unsigned char sade, unsigned char askel){
  int i;
  unsigned char number = -sade;
  unsigned int count = ( 2*(int)sade ) / (int)askel + 1;
  printf("unsigned char:");
  for(i = 0; i < count; i++){
    printf(" %u", number);
    number += askel;
  }
  printf("\n");
}

void ushortIntervalli(unsigned short sade, unsigned short askel){
  int i;
  unsigned short number = -sade;
  unsigned int count = ( 2*(int)sade ) / (int)askel + 1;
  printf("unsigned short:");
  for(i = 0; i < count; i++){
    printf(" %u", number);
    number += askel;
  }
  printf("\n");
}

void uintIntervalli(unsigned int sade, unsigned int askel){
  int i;
  unsigned int number = -sade;
  unsigned int count = ( 2*(unsigned long)sade ) / (unsigned long)askel + 1;
  printf("unsigned int:");
  for(i = 0; i < count; i++){
    printf(" %u", number);
    number += askel;
  }
  printf("\n");
}

void ulongIntervalli(unsigned long sade, unsigned long askel){
  int i;
  unsigned long number = -sade;
  unsigned int count = ( 2*(unsigned long)sade ) / (unsigned long)askel + 1;
  printf("unsigned long:");
  for(i = 0; i < count; i++){
    printf(" %lu", number);
    number += askel;
  }
  printf("\n");
}