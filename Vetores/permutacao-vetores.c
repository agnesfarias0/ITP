#include <stdio.h>

int main(void) {

  int n, aux=0;
  
  scanf("%d", &n);

  int numeros[n], seq[n];

  for(int i=0; i<n; i++){
    scanf("%d", &numeros[i]);
  }
  
  for(int i=0; i<n; i++){
    seq[i] = i+1;
  }
  
  for(int i=0; i<n; i++){
    int conta = 0;
    for(int j=0; j<n; j++){
      if(numeros[j] == seq[i]){
        conta++;
      }
    }
    if(conta != 1) {
        aux = 1;
        break;
    }
  }

  if(aux == 0){
    printf("sim");
  } else {
    printf("não");
  }
  
  return 0;
}