#include <stdio.h>

int isPrime(int x){
  
  int aux = 0;

  for(int i=2; i<x; i++){
    if(x%i == 0){
      aux++;
    }
  }
  
  if (aux==0){
    return 1;
  } else {
    return 0;
  }
  
}

int main() {
  
  int x;
  scanf("%d", &x);

  if (isPrime(x) && isPrime(x+2) && x != 1){
    printf("Numero forma par de gemeos"); 
  } else {
    printf("Numero nao forma par de gemeos");
  }
  
}