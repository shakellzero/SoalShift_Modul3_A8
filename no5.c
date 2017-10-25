#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t t1,t2;

void *read1 (void *ptr){
  stringLen = strlen(str);
  count=0;
  word1[5]="Fina";

  for(i=0; i <= stringLen-4; i++){
     found=1;
     for(j=0; j<4; j++){
        if(str[i+j]!=word1[j]){
           found = 0;
           break;
        }
     }
  }

  if(found==1){
    count++
  }

  return count;
} 
