#include <stdio.h>
#include <stdlib.h>
#include "muunto.h"

int main (int argc, char *argv[]){
  int i;
  char *x;
  

  for (i=1; i < argc; i++){
    x = argv[i];
    printf("%i: %s --> ", i, x); 
    muunna(x);
    printf("%s\n", x);
  }

  return 0;
} 