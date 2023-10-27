#include <stdio.h>

int main() {

  int a, b;

  scanf("%d %d", &a, &b);

  if(b > a){
    while(a<b){
      printf("%d ", a);
      a++;
    }
    printf("%d", a);
  } else {
    while(b<a){
      printf("%d ", a);
      a--;
    }
    printf("%d", a);
  }
  
}