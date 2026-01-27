#include "likimvrt.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double tole = 0.000001;

double lueToleranssi(){
  return tole;
}

void asetaToleranssi(double uusiToleranssi){
  tole = uusiToleranssi;
}

int doubleVrt(double a, double b){
  return fabs(a-b) <= tole ? 1 : 0;
}