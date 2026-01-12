#include <stdio.h>

int main (void){
  int x, y, i;
  int n = 15;

  printf("%4c", 'x');
  for ( i = 1; i <=n; i++){
    printf("%4i", i);
  }
  printf("\n");
  for ( y = 1; y <= n; y++){
    printf("%4i", y);
    for (x = 1; x <= n; x++){
      printf("%4i", x*y);
      
    };
    printf("\n");
  };
  return 0;
} 