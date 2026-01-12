#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
    int a, b, i;
    int passed = 0;
    int first_printed = 0;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    for(; a <= b; a++){
      passed = 1;
      for( i = 3; i<argc; i++ ){
        if ( a %  atoi(argv[i]) == 0 ){
          passed = 0;
          break;
        }
      }
      if (passed == 1){
        if ( first_printed == 0) {
          printf("%i", a);
        }
        else {
          printf(" %i", a);
        }
        first_printed = 1;
      }
    }

    if (first_printed == 1) {
      printf("\n");
    }
    return 0;
}