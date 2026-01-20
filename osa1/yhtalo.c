#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  double a, b, c, x1, x2, in_sqrt;
  a = atof(argv[1]);
  b = atof(argv[2]);
  c = atof(argv[3]);  
  x1 = 0;
  x2 = 0;
  in_sqrt = b*b-4*a*c; 
  
  if (in_sqrt < 0 ){
    printf("Ei ratkaisua");
  }
  else if (in_sqrt == 0.0){
    x1 = -b/2/a;
    printf("%.3f", x1);
  }
  else if (in_sqrt > 0){
    x1 = (-b + sqrt(in_sqrt)) / (2*a);
    x2 = (-b - sqrt(in_sqrt)) / (2*a);
    
    if (x1 > x2 ){
      printf("%.3f %.3f", x2, x1);
    }
    else {
      printf("%.3f %.3f", x1, x2);
    }
  }

  printf("\n");
  return 0;
}