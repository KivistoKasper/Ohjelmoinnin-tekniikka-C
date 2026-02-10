#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
  int i;
  double split;
  double d = 0;
  int exp = 0;
  int size = 32;

  for ( i = 9; i < size; i++){
    if ( argv[1][i] == '1'){
      split = pow(0.5, i-8);
      /*printf("%i split: %f\n", i, split);*/
      d += split;
    }
  }
  d += 1;
  printf("%.15f\n", d);

  for ( i = 1; i < 9; i++){
    if ( argv[1][i] == '1'){
      exp += pow(2, 8-i);
      /*printf("%i exp: %i\n", i, exp);*/
    }
  }
  exp -= 127;
  printf("%i\n", exp);

  if (argv[1][0] == '1') {
    printf("-\n");
    printf("%.15f\n", d*pow(2,exp)*-1);
  }
  else {
    printf("+\n");
    printf("%.15f\n", d*pow(2,exp));
  }


  return 0;
}