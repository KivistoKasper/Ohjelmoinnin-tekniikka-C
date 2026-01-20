#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
  double smallest, biggest, x, y;
  int i, j, unique_count, times_seen, most_seen_count, times_seen_best, already_printed;

  smallest = atof(argv[1]);
  biggest = atof(argv[1]);
  unique_count = 0;
  most_seen_count = 0;
  times_seen_best = 0;

  /*Check big/small */
  for (i = 1; i < argc; i++){
    x = atof(argv[i]);
        if ( x < smallest ){
      smallest = x;
    }
    else if ( x > biggest ){
      biggest = x;
    }

    /*Unique count check for next for*/
    times_seen = 0;
    for (j = 1; j < argc; j++){
      y = atof(argv[j]);
      if (x == y){
        times_seen++;
      }
    }
    if (times_seen == 1){
      unique_count++;
    }
    /*For most seen statistics*/
    else if (times_seen > times_seen_best){
      times_seen_best = times_seen;
      most_seen_count = 1;
    }
    else if (times_seen == times_seen_best){
      most_seen_count++;
    }
  }
  printf("Pienin: %f", smallest);
  printf("\nSuurin: %f", biggest);

  /*Check if unique*/
  if (unique_count > 0){
    printf("\nAinutlaatuiset:");
    for (i = 1; i < argc; i++){
      x = atof(argv[i]);

      times_seen = 0;
      for (j = 1; j < argc; j++){
        y = atof(argv[j]);
        if (x == y){
          times_seen++;
        }
      }
      
      if (times_seen == 1){
        printf(" %f", x);
      }
    }
  }

  /*Check most seen*/
  if (times_seen_best > 1){
    printf("\nUseimmiten esiintyneet (%i kertaa):", times_seen_best);
    for (i = 1; i < argc; i++){
      x = atof(argv[i]);
      times_seen = 0;
      for (j = 1; j < argc; j++){
        y = atof(argv[j]);
        if (x == y){
          times_seen++;
        }
      }

      /* skip if x appeared earlier */
      already_printed = 0;
      for (j = 1; j < i; j++){
        if (x == atof(argv[j])){
          already_printed = 1;
          break;
        }
      }

      if (times_seen == times_seen_best && !already_printed){
        printf(" %f", x);
      }
    }
  }
  
  printf("\n");
  return 0;
} 