#include <stdio.h>

int main() {
  
  int m, n, x, saida, i=0;

  scanf("%d %d", &m, &n);

  int muros[m][n];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &muros[i][j]);
    }
  }

  scanf("%d", &x);

  while(i<=m){
    if(muros[i][x]==1){
      x = x-1;
      saida = muros[i+1][x];
    }
    if(muros[i][x]==2){
      x = x+1;
      saida = muros[i+1][x];
    }
    if(muros[i][x]==0){
      x = x;
      saida = muros[i][x];
    }
    i++;
  }
  
  if(x>=n || x<0){
    printf("ops");
  }else{
    printf("%d", x);
  }
}