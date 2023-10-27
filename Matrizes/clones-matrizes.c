#include <stdio.h>

int main() {

  int n,m,jedix,jediy,cont=0, achou=0;

  scanf("%d %d", &n, &m);
  scanf("%d %d", &jedix, &jediy);

  int mapa[n][m], maiores[n][2];

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &mapa[i][j]);
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){

      if(j == 0 && i == 0) { //primeira linha, primeira coluna
        if(mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i+1][j+1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else if(i == 0 && j != 0 && j != m-1) { //primeira linha
        if(
          mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i+1][j+1] &&
          mapa[i][j]>mapa[i-1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
      
      } else if(j == 0 && i != 0 && i != n-1) { //primeira coluna
        if(mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i+1][j+1] &&
          mapa[i][j]>mapa[i-1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else if(j == m-1 && i == n-1) { //ultima coluna, última linha
        if(mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i-1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }

      } else if(j == m-1 && i == 0) { //primeira linha, última coluna
        if(mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i+1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else if(j == 0 && i == n-1) { //ultima linha, primeira coluna
        if(mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i-1][j+1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else if(j != m-1 && i == n-1 && j != 0) { //ultima linha
        if(mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i-1][j+1] &&
          mapa[i][j]>mapa[i-1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else if(i != n-1 && j == m-1 && i != 0) { //ultima coluna
        if(mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i+1][j-1] &&
          mapa[i][j]>mapa[i-1][j-1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }
        
      } else { //outras posições
        if(mapa[i][j]>mapa[i][j-1] &&
          mapa[i][j]>mapa[i][j+1] &&
          mapa[i][j]>mapa[i-1][j] &&
          mapa[i][j]>mapa[i+1][j] &&
          mapa[i][j]>mapa[i+1][j+1] &&
          mapa[i][j]>mapa[i-1][j-1] &&
          mapa[i][j]>mapa[i+1][j-1] &&
          mapa[i][j]>mapa[i-1][j+1]) {
          maiores[cont][0] = i+1;
          maiores[cont][1] = j+1;
          cont++;
        }        
      }
      
    }
  }

  for(int i=0; i<cont; i++){
    printf("Local %d: ", i+1);
    for(int j=0; j<2; j++){
      printf("%d ", maiores[i][j]);
    }
    printf("\n");
  }

  for(int i=0; i<cont; i++){
    if(jedix == maiores[i][0] && jediy == maiores[i][1]){
      achou = 1;
    }
  }

  if(achou == 1){
    printf("Descanse na Força...");
  } else {
    printf("Ao resgate!");
  }
  
}