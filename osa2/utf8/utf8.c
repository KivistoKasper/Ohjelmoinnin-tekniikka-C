#include <stdio.h>
#include "utf8.h"

void utf8_koodaa(unsigned int merkki, unsigned char utf8[]){
  int i;
  unsigned int value = merkki;
  int bits = 0;
  int bytes = 1;
  /*Check if merkki is 0*/
  if ( value == 0 ){
    bits = 1;
  } else {
    while ( value != 0 ){
      bits++;
      value >>=1;
    }
  }
  /*printf("Bittejä: %i", bits);*/

  /*How many bytes needed*/
  if ( bits <= 7) bytes = 1;
  if ( bits > 7 && bits <= 11) bytes = 2;
  if ( bits > 11 && bits <= 16) bytes = 3;
  if ( bits > 16) bytes = 4;
  /*printf(" Tavuja: %i", bytes);*/

  /*reset utf8[] */
  for (i = 0; i < bytes; i++ ){
    utf8[i] = 0;

    if (i == 0) {
      if (bytes == 2) utf8[i] |= 0xC0; /* 11000000 */
      if (bytes == 3) utf8[i] |= 0xE0; /* 11100000 */
      if (bytes == 4) utf8[i] |= 0xF0; /* 11110000 */
    } else {
        utf8[i] |= 0x80; /* 10000000 */
    }
  }
  utf8[bytes] = '\0';

  /* Fill payload bits from right to left */
  for (i = bytes - 1; i >= 0; i--) {
    /* first byte */
    if (i == 0) {
      if (bytes == 1) utf8[i] |= merkki & 0x7F; /* 01111111 */
      else if (bytes == 2) utf8[i] |= merkki & 0x1F; /* 00011111 */
      else if (bytes == 3) utf8[i] |= merkki & 0x0F; /* 00001111 */
      else utf8[i] |= merkki & 0x07; /* 00000111 */
    }
    /* continuation byte: 6 bits */ 
    else utf8[i] |= merkki & 0x3F; /* 00111111 */
    merkki >>= 6;
  }  

}