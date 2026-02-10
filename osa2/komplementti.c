#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
  int size, i, x;
  x = 0;
  size = 0;
  while (argv[1][++size] != '\0');
  /*printf("size: %i\n", size);*/

  for (i = 1; i < size; i++ ){
    if ( argv[1][i] == '1'){
      /*printf("index: %i -> %f\n", size-1-i, pow(2, size-1-i));*/
      x += pow(2, size-1-i);
    }
  }

  if ( argv[1][0] == '1'){
    x -= pow(2, size-1);
  }

  printf("%i\n", x);
  return 0;
}