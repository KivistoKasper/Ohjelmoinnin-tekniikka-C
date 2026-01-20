#include <stdio.h>
#include <stdlib.h>
#include "geometria.h"

int main (int argc, char *argv[]){
  int i;
  double x, A, V;

  printf("Piin arvo: %.19Lf\n", PII);

  for (i=1; i < argc; i++){
    x = atof(argv[i]);
    A = ympyranAla(x);
    V = pallonTilavuus(x);
    printf("Säteen %.6f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", x, A, V);
    printf("Säteen %.6f omaavan ympyrän piiri on %.10Lf\n", x, 2*PII*x);

  }

  return 0;
} 