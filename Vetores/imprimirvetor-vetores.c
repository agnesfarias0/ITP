#include <stdio.h>

int main() {

  int tam;

  scanf("%d", &tam);

  int vetor[tam];
  
  for (int i=0; i<tam; i++){
    scanf("%d", &vetor[i]); 
  }

  
  for(int i=0; i<tam; i++){
    
    for(int j=i+1; j<tam; j++){

      
      if(vetor[i] == vetor[j]){
        for(int k=j; k<tam-1; k++){
          vetor[k] = vetor[k+1];
        }
        tam--;
        j--;
      }
      
    }
  }

  for(int i=0; i<tam; i++){
    printf("%d ", vetor[i]);
  }

}