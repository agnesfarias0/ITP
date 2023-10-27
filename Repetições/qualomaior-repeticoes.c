#include <stdio.h>

int main() {

  int n, a, maior=0;

  scanf("%d", &n);
  scanf("%d", &a);
  maior=a;

  for(int i=0; i<n; i++){
    scanf("%d", &a);
    if(maior<a){
      maior=a;
    } else {
      continue;
    }
  }

  printf("%d", maior);
  
}