#include <stdio.h>

int main() {

  int n, acertos=0;

  scanf("%d", &n);

  int questao[n], gabarito[n], respostas[n];

  for(int i=0; i<n; i++){
    scanf("%d", &gabarito[i]);
  }

  for(int i=0; i<n; i++){
    scanf("%d", &respostas[i]);
  }

  for(int i=0; i<n; i++){
    if(gabarito[i] == respostas[i]){
      acertos++;
    }
  }

  if(acertos==1 || acertos==0){
    printf("%d acerto", acertos);
  } else {
    printf("%d acertos", acertos);
  }
  
}