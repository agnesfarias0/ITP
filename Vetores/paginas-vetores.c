#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int m, n, aux=0;

  scanf("%d", &m);
  scanf("%d", &n);

  int paginasDig[n], paginasFalt[m], paginasCopia[m];

  for(int i=0; i<n; i++){
    scanf("%d", &paginasDig[i]);  
  }

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(paginasDig[i]>paginasDig[j]){
        aux = paginasDig[i];
        paginasDig[i] = paginasDig[j];
        paginasDig[j] = aux;
      } else {
        continue;
      }
    }
  }

  for(int i=0; i<n; i++){
    paginasCopia[i] = paginasDig[i];  
  }

  for(int i=0; i<m; i++){
    paginasFalt[i] = i+1;
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(paginasFalt[j] == paginasCopia[i]){
        paginasFalt[j] = 0;
        break;
      }
    }
  }
  
  for(int i=0; i<m; i++){
    if (paginasFalt[i] != 0) {
      printf("%d ", paginasFalt[i]);
    }
  }
  
  return 0;
  
}