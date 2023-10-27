#include <stdio.h>
#include <math.h>

int main() {

  int n,b,i;

  scanf("%d %d", &n, &b);

  for(i=0; i<n; i++){
    if(pow(b,i) == n){
      printf("sim");
      break;
    } else {
      continue;
    }
  }

  if(i==n){
    printf("não");
  }
    
}