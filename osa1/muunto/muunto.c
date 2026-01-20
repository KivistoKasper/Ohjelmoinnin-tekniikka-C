#include <stdio.h>
#include <ctype.h>
#include "muunto.h"

void muunna(char mj[]){
  int i, size;
  char a, b;
  size = 0;
  while (mj[++size] != '\0');

  for (i = 0; i < size; i++){
    if (size % 2 == 0 && i >= size / 2){
      break;
    }
    if (size % 2 != 0 && i > size / 2){
      break;
    }

    a = isupper(mj[i]) ? tolower(mj[i]) : toupper(mj[i]);
    b = isupper(mj[size-1-i]) ? tolower(mj[size-1-i]) : toupper(mj[size-1-i]);

    mj[i] = b;
    mj[size-1-i] = a;
  }
  
  /*printf("%s\n", mj);*/
  return;
}