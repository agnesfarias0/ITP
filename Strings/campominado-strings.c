#include <stdio.h>
#include <string.h>

int main() {

  char campo[20];
  int posicao;
  int bombas = 0;

  // fgets(campo, 20, stdin);
  scanf("%19s", campo);

  while(getchar() != '\n'){
    scanf("%d", &posicao);
  }

  // printf("posicao: %d\n", posicao);
  // printf("campo: %c\n", campo[posicao]);
  
  if(campo[posicao] == '*'){

    printf("bum!");

  } else {

    if(posicao>0){
        if(campo[posicao-1] == '*'){
          bombas++;
        }
      }

    if(posicao<strlen(campo)){
      if(campo[posicao+1] == '*'){
        bombas++;
      }
    }

    printf("%d", bombas);
  }
  
}