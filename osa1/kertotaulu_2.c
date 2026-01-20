#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
  int a, b, c, d, n, x, i, j;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  d = atoi(argv[4]);
  n = b*d;
  x = 1;

  while ( n > 0){
    n /= 10;
    x++;
  }

  printf("%*c", x, ' ');
  for (i = a; i <= b; i++){
    printf("%*i", x, i);
  }

  printf("\n");
  for (j = c; j <= d; j++){
    printf("%*i", x, j);
    for (i = a; i <= b; i++){
      printf("%*i", x, i*j);
      
    };
    printf("\n");
  };
  return 0;
} 