#include <stdio.h>

int main() {

  int n, j, aux;

  scanf("%d", &n);
  aux = n;
  
  for(int i=1; i<=n; i++){
    for(j=i; j<=aux; j++){
      printf("%d ", j);
    }
    printf("\n");
    aux++;
  }
    
}