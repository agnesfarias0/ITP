#include <stdio.h>

int main() {

  int x, des=0;

  scanf("%d", &x);

  if(x>1000){
    while(x>1000){
      x = x/4;
      des++;
    }
  }
  
  if(x>= 500 && x<=1000){
    while(x>=500){
      x = x/3;
      des++;
    }
  }
  
  if(x<500){
    while(x != 0){
      x = x/2;
      des++;
    }  
  }

  // printf("x = %d\n", x);
  printf("%d", des);
  
}