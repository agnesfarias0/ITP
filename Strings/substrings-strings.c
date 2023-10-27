#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char A[40];
  char B[40];
  char posicoes[40];
  int i, k = 0;

  fgets(A, 40, stdin);
  fgets(B, 40, stdin);

  int comprimento = strlen(A)+1;

  for(int i=0; i<strlen(B); i++){
    B[i] = tolower(B[i]);
  }
  for(int i=0; i<strlen(A); i++){
    A[i] = tolower(A[i]);
  }

  int tamanhoSubstring = (strlen(A)-1);
  int tamanhoString = (strlen(B)-1);

  // printf("substring: %d\n", tamanhoSubstring);
  // printf("string: %d\n", tamanhoString);

  int repete = 0;
  int j = 0;
  int posicao = 0;

  for(i = 0; i<tamanhoString; i++) {

    if(B[i] == A[j]){

      j++;

      if(j == tamanhoSubstring){
        posicao = (i-tamanhoSubstring)+1;
        if(posicao == 1){
          posicoes[k] = 0;
        } else {
          posicoes[k] = posicao;
        }
        repete++;
        k++;
        j=0;
        // printf("posicao: %d\n", i-1);
      }

    } else {
      j = 0;

        if(B[i] == A[j]){

            j++;

            if(j == tamanhoSubstring){
                posicao = (i-tamanhoSubstring)+1;
            if(posicao == 1){
                posicoes[k] = 0;
            } else {
                posicoes[k] = posicao;
            }
          }

            repete++;
            k++;
            j=0;
        // printf("posicao: %d\n", i-1);
      }
    }
  }


  if (repete == 0){
    printf("Repetições: 0");
  } else {
    printf("Repetições: %d\n", repete);
    printf("Posições: ");

    for(int i=0; i<k; i++){
      printf("%d ", posicoes[i]);
    }
  }

}