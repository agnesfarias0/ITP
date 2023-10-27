#include <stdio.h>

int imprimeImagem(char matriz[7][7]){

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
          printf("%c", matriz[i][j]);
        }
      printf("\n");
    }
  
  return 0;
}

int main() {
    char matriz[7][7];
  
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            matriz[i][j] = '_';
        }
    }
  
  int x0, y0, x=0, y=0, aux;

    scanf("%d %d", &x0, &y0);

    while (x0 != -1 && y0 != -1 && x != -1 && y != -1) {
      
      scanf("%d %d", &x, &y);
      
        if (x0 == x) {
          
          if(y>y0){
            for (int j = y0; j <= y; j++) { //mexe da esquerda pra direita
                matriz[x][j] = '#';
            }
          } else if (y0>y) {
            for (int j = y0; j >= y; j--) { //mexe da direita pra esquerda
                matriz[x][j] = '#';
            }
          }
          
        } else if (y0 == y) {
            for (int i = x0; i <= x; i++) {
                matriz[i][y] = '#';
            }
        }

        x0 = x;
        y0 = y;
        
    }

    imprimeImagem(matriz);

    return 0;
}