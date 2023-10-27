#include <stdio.h>

int main() {

  int x, aux=0;

  scanf("%d", &x);
  
  for(int i=1; i<x; i++){
    if(x%i == 0){
      aux=aux+i;
    }
  }
    
  if(aux==x && x>0) {
    printf("Perfeito");
  } else {
    printf("Não perfeito");
  }
    
}