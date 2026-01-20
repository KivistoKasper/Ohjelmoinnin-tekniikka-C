#include <stdio.h>
#include <limits.h>
#include "caesar.h"

void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[]){
  char c;
  int i, j;
  
  
  for (i = 0; mj[i] != '\0'; i++){
    c = mj[i];
    /*printf("%c", c);*/
    j = 0;
    for (j = 0; aakkosto[j] != '\0'; j++){
      if ( c == aakkosto[j] ){
        mj[i] = korvaavat[j];
        break;
      }
    }
    if ( aakkosto[j] == '\0'){
      mj[i] = c;
    }
    
  };
 
  return;
}