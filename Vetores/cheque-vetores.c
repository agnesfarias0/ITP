#include <stdio.h>

int main(void) {

  int ilhas[10], aux=0, zero=0;

  for(int i=0; i<10; i++){
    scanf("%d", &ilhas[i]);
  }

  for(int i=0; i<10; i++){
    
    if(ilhas[i]==0 && zero==0){
      zero = 1;
    //   printf("0");
      break;
      
    } else {
      for(int j=0; j<i; j++){
        if (ilhas[j] == ilhas[i]){
          aux = ilhas[i];
          break;
        }
      }
      if(aux != 0){
        break;
      }
    }
    
  }
    
if(zero == 0 && aux != 0){
  printf("%d", aux);
} else if (zero == 1){
    printf("0");
}

} 