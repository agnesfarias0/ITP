#include <stdio.h>

int main() {
  
  int m, n, irriga=0, naoirriga=0;

  scanf("%d %d", &m, &n);

  int terras[m][n];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &terras[i][j]);
    }
  }

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(terras[i][j]==2){
        continue;
      }
      if(terras[i][j]==1){
        if(terras[i][j-1]==2 || terras[i-1][j]==2 || terras[i][j+1]==2 || terras[i+1][j]==2){
          irriga++; 
        } else {
          naoirriga++;
        }
        // printf("empate: %d e %d\n", times[i][j], times[j][i]);
      }
    }
  }

  printf("%d %d", irriga, naoirriga);
}