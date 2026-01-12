#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a, b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);

  for (; a <= b; a++){
    printf("%i: %c\n", a, a);
  }

  return 0;
}