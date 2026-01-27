#include <stdio.h>
#include <stdlib.h>
#include "unsigned.h"

int main (int argc, char *argv[]){
  unsigned char sade1 = 150;
  unsigned char askel1 = 50;
  unsigned short sade2 = 45000;
  unsigned short askel2 = 15000;
  unsigned int sade3 = 3300000000;
  unsigned int askel3 = 1100000000;
  unsigned long sade4 = 9000000000000000000;
  unsigned long askel4 = 3000000000000000000;
  
  /*
  Test case 1
  */
  printf("\nTEST 1\n");

  ucharIntervalli(sade1, askel1);
  ushortIntervalli(sade2, askel2);
  uintIntervalli(sade3, askel3);
  ulongIntervalli(sade4, askel4);

  /*
  Test case 2
  */
  printf("\nTEST 2\n");
  sade1 = 40;
  askel1 = 75;
  sade2 = 65535;
  askel2 = 65535;
  sade3 = 400000;
  askel3 = 750000;
  sade4 = 400000000;
  askel4 = 1500000000;

  ucharIntervalli(sade1, askel1);
  ushortIntervalli(sade2, askel2);
  uintIntervalli(sade3, askel3);
  ulongIntervalli(sade4, askel4);
  /*


  */

  return 0;
} 