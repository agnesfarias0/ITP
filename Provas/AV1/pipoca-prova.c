#include <stdio.h>

int main() {
  int n, ocu_esq=0, liv_esq=0, ocu_dir=0, liv_dir=0, meu=0;

  scanf("%d", &n);

  int fila[n];

  for(int i=0; i<n; i++){
    scanf("%d", &fila[i]);
  }

  //checa lado esquerdo
  for(int i=0; i<n; i++){
    if(fila[i] == 1){
      ocu_esq++;
    } else if (fila[i] == 0){
      liv_esq++;
    } else if (fila[i] == 2){
      meu = i;
      break;
    }
  }

  //checa lado direito
  for(int i=meu; i<n; i++){
    if(fila[i] == 1){
      ocu_dir++;
    } else if (fila[i] == 0){
      liv_dir++;
    }
  }

  if(ocu_esq<ocu_dir){
    printf("esquerda");
  } else if(liv_dir==liv_esq || ocu_dir==ocu_esq){
    printf("tanto faz");
  } else if(ocu_dir<ocu_esq){
    printf("direita");
  }
  // printf("ocu_esq: %d\n", ocu_esq);
  // printf("liv_esq: %d", liv_esq);
  // printf("ocu_dir: %d\n", ocu_dir);
  // printf("liv_dir: %d", liv_dir);
  
}