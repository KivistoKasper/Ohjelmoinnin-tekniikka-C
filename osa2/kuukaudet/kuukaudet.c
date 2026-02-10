#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "kuukaudet.h"

const char *KK_NIMET[KK_LKM] = {
  "tammikuu",
  "helmikuu",
  "maaliskuu",
  "huhtikuu",
  "toukokuu",
  "kesäkuu",
  "heinäkuu",
  "elokuu",
  "syyskuu",
  "lokakuu",
  "marraskuu",
  "joulukuu"
};

const char KK_PAIVAT[2][KK_LKM] = {
    /* tavallinen vuosi */
    {31,28,31,30,31,30,31,31,30,31,30,31},
    /* karkausvuosi */
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

  int karkausvuosi(int vuosiluku){
    return ((vuosiluku % 4 == 0 && vuosiluku % 100 != 0) || (vuosiluku % 400 == 0)) ? 1 : 0;
  }

  static int strcasecmp_simple(const char *a, const char *b) {
    while (*a && *b) {
      if (tolower((unsigned char)*a) != tolower((unsigned char)*b))
        return 0;
      a++;
      b++;
    }
    return *a == *b;
  }

  char kkPituus(const char *kkNimi, int vuosiluku){
    int kk;
    int karkaus = karkausvuosi(vuosiluku);

    for (kk = 0; kk < KK_LKM; kk++) {
      if (strcasecmp_simple(kkNimi, KK_NIMET[kk])) {
        return KK_PAIVAT[karkaus][kk];
      }
    }

    return -1;
  }