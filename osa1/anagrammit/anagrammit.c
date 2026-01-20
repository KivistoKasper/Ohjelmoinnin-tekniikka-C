#include <stdio.h>
#include <limits.h>
#include "anagrammit.h"

int anagrammeja(char mj1[], char mj2[]){
  char c;
  int i, flag;
  unsigned char lkmt[UCHAR_MAX +1];  

  /*Alusta nollat*/
  for (i = 0; i <= UCHAR_MAX; i++) {
    lkmt[i] = 0;
  }
  
  /*laske kirjaimet erikseen*/
  for (i = 0; mj1[i] != '\0'; i++){
    c = mj1[i];
    /*printf("%c", c);*/
    lkmt[(unsigned char) c]++;
  };
 
  for (i = 0; mj2[i] != '\0'; i++){
    c = mj2[i];
    /*printf("%c", c);*/
    lkmt[(unsigned char) c]--;
  };

  /*Jäikö kirjaimia yli*/
  flag = 1;
  for (i = 0; i <= UCHAR_MAX; i++) {
    if (lkmt[i] > 0) {
        /*printf("'%c' (%d) -> %u\n", i, i, lkmt[i]);*/
        flag = 0;
    }
  }

  return flag;
}