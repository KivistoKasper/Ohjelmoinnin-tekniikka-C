#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int x, i;
  double f, q;
  x = atoi(argv[1]);

  for (i = 2; i < argc; i++){
    f = atof(argv[i]);
    q = sqrt(f);
    printf("sqrt(%.*f) = %.*f\n", x, f, x, q);
  }

  return 0;
}