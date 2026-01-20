#include <stdio.h>
#include <stdlib.h>
#include "anagrammit.h"

int main (int argc, char *argv[]){
  char mj1[] = "arvo";
  char mj2[] = "vaaro";

  printf("value: %i", anagrammeja(mj1, mj2));

  return 0;
} 