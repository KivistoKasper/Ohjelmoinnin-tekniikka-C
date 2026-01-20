#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  int i, j, n, c_size, v_size;
  char *x;
  n = argc-1;
  c_size = 0;
  v_size = 0;
  
  /*index column size*/
  while (n > 0){
    n /= 10;
    c_size++;
  }

  /*Parameter column size*/
  for ( i=1; i<argc; i++){
    x = argv[i];
    n = 0;
    while (x[++n] != '\0');

    if (n > v_size){
      v_size = n;
    }
  }

  /*Printing*/
  for (i=0; i < c_size+v_size+3+4; i++){
    printf("%c", '#');
  }
  
  for ( i=1; i<argc; i++){
    x = argv[i];
    printf("\n# %*i | %-*s #", c_size, i, v_size, x);
    if (i < argc-1){
      printf("\n#");
      for (j=0; j < c_size+2; j++ ){
        printf("-");
      }
      printf("+");
      for (j=0; j < v_size+2; j++ ){
        printf("-");
      }
      printf("#");
    }
    
  }

  printf("\n");
  for (i=0; i < c_size+v_size+3+4; i++){
    printf("%c", '#');
  }

  printf("\n");
  return 0;
}