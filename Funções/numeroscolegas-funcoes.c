#include <stdio.h>
#include <math.h>

int somaDivisores(num){
    
  int somadiv=0;
  
  for(int i=1; i<num; i++){
    if(num%i == 0){
      somadiv = somadiv + i;
    }
  }
  
  return somadiv;
}

int isColegas(a,b){
    
  int somadiv_a, somadiv_b;
  
  somadiv_a = somaDivisores(a);
  somadiv_b = somaDivisores(b);

  if (abs(somadiv_a-b)<=2 && abs(somadiv_b-a)<=2) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  
  if (isColegas(a,b)){
    printf("S");
  } else {
    printf("N");
  }
  
}