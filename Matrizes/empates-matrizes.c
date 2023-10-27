#include <stdio.h>

int main() {
  
  int m, empate=0;

  scanf("%d", &m);

  int times[m][m];

  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &times[i][j]);
    }
  }

  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      if(i==j){
        continue;
      }
      if(times[i][j]==times[j][i]){
        empate++;
        // printf("empate: %d e %d\n", times[i][j], times[j][i]);
      }
    }
  }

  printf("%d", empate/2);
}