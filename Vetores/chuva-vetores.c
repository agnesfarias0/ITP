#include <stdio.h>

int main() {

  int n_dias_chuva, maior;

  scanf("%d", &n_dias_chuva);

  int diaschuva[n_dias_chuva];

  for(int i=0; i<n_dias_chuva; i++){
    scanf("%d", &diaschuva[i]);
  }

  maior = diaschuva[0];
  
  for(int i=1; i<n_dias_chuva; i++){
    if(maior>diaschuva[i]){
      maior = maior;
    } else {
      maior = diaschuva[i];
    } 
  }

  for(int i=0; i<n_dias_chuva; i++){
    if(diaschuva[i] == maior){
      printf("%d ", i+1);
    }
  }

  printf("%d", maior);
  
}