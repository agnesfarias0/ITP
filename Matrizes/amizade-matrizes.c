#include <stdio.h>

int main(void) {

  int m,x,cont=0,repetido,aux;

  scanf("%d", &m);

  int amigos[m][m], comum[m];

  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &amigos[i][j]);
    }
  }

  scanf("%d", &x);

  for(int i=0; i<m; i++){
    
    if(amigos[x][i] == 1 && i != x){
      for(int j=0; j<m;j++){
        if(amigos[i][j]==1 && amigos[x][j]==0 && j != x){
          comum[cont] = j;
          cont++;
        }
      } 
    }
    
  }

  for(int i=0; i<cont;i++){
    for(int j=0; j<i;j++){
      if(comum[i]<comum[j]){
        aux=comum[j];
        comum[j]=comum[i];
        comum[i]=aux;
        j--;
      }
    }
  }
  
  for (int i = 0; i < cont; i++) {
    repetido = 0;
    for (int j = 0; j < i; j++) {
      if (comum[j] == comum[i]) {
        repetido = 1;
        break;
      }
    }
    if (!repetido) {
      printf("%d ", comum[i]);
    }
  }

  
  return 0;
}