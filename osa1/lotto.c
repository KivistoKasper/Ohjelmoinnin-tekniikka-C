#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int v, l, i, j;
  int count = 0;
  int correct[7];

  printf("Voittorivi:");
  for (i = 1; i <= 7; i++){
    v = atoi(argv[i]);
    printf(" %i", v);
  }

  printf("\nLottorivi:");
  for (j = 8; j <= 14; j++){
    l = atoi(argv[j]);
    printf(" %i", l);
  }

  for (j = 8; j <= 14; j++){
    l = atoi(argv[j]);
    for (i = 1; i <= 7; i++){
      v = atoi(argv[i]);
      if (l == v){
        correct[count] = l;
        count++;
      }
    }
  }

  if (count == 0){
    printf("\nEi yhtään oikein!\n");
    return 0;
  }

  printf("\n%i oikein:", count);
  for (j = 0; j < count; j++){
    printf(" %i", correct[j]);
  }

  printf("\n");
  return 0;
}