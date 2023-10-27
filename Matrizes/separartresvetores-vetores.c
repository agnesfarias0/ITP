#include <stdio.h>

int main(void) {

  int vetorA[15], vetorB[15], vetorC[15], vetorD[15], cpA[15];

  for(int i=0; i<15; i++){
    scanf("%d", &vetorA[i]);
  }

  for(int i=0; i<15; i++){
    vetorB[i] = 0;
    vetorC[i] = 0;
    vetorD[i] = 0;
  }

  for(int i=0; i<15; i++){
    cpA[i] = vetorA[i];
  }

  for(int i=0; i<15; i++){
    if(vetorA[i] % 2 == 0){
      vetorB[i] = cpA[i];
    }
    if(vetorA[i] % 3 == 0){
      vetorC[i] = cpA[i];
    }
    if(vetorA[i]%2 != 0 && vetorA[i]%3 != 0){
      vetorD[i] = cpA[i];
    }
  }

  printf("B = [");
  int primeiroB = 0;
  for(int i=0; i<15; i++){
    if(vetorB[i] != 0){
      if(primeiroB == 1){
        printf(", ");
      }
      printf("%d", vetorB[i]);
      primeiroB = 1;
    }
  }
  printf("]\nC = [");
  int primeiroC = 0;
  for(int i=0; i<15; i++){
    if(vetorC[i] != 0){
      if(primeiroC == 1){
        printf(", ");
      }
      printf("%d", vetorC[i]);
      primeiroC = 1;
    }
  }
  printf("]\nD = [");
  int primeiroD = 0;
  for(int i=0; i<15; i++){
    if(vetorD[i] != 0){
      if(primeiroD == 1){
        printf(", ");
      }
      printf("%d", vetorD[i]);
      primeiroD = 1;
    }
  }
  printf("]");

  
}