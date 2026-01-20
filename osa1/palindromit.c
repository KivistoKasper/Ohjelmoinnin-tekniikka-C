#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  int i, j, size, true;
  char *x;
   
  for ( i=1; i<argc; i++){
    x = argv[i];
    size = 0;
    while(x[++size] != '\0');

    true = 1;
    for (j=0; j < size; j++){
      if (tolower(x[j]) != tolower(x[size-1-j])){
        true = 0;
        break;
      }
      /*printf("%c", x[size-1-j]);*/
    }

    if (true){
      printf("\"%s\": on palindromi\n", x);
    }
    else {
      printf("\"%s\": ei ole palindromi\n", x);
    }
  }

  return 0;
}