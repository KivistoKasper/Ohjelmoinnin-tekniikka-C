#include <stdio.h>

int main( void ){
    int i = 0;
    int j = 100;
    for( i = 1; i<j; i++ ){
      if ( i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
        if ( i != 1 ){
          printf(" ");
        }
        printf("%i", i);
      }
    }
    printf("\n");
    return 0;
}