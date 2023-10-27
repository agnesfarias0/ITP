#include <stdio.h>

int main() {

  int a, b, i=1;

  scanf("%d %d", &a, &b);

  if(b != 0){
    while(i<b){
      printf("%d, ", a);
      i++;
    }
    printf("%d", a);
  }
  
}