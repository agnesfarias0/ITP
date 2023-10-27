#include <stdio.h>
#include <stdlib.h>

int main() {
  int qnt, maior1, maior2, dist1, dist2;

  scanf("%d", &qnt);

  int altura[qnt];

  for(int i=0; i<qnt; i++){
    scanf("%d", &altura[i]);
  }

  maior1 = altura[0];
  maior2 = altura[1];

  for(int i=1; i<qnt; i++){
    if(altura[i]>=maior1){
      maior2 = maior1;
      maior1 = altura[i];   
    } else if(altura[i]>=maior2){
      maior2 = altura[i];
    }
  }

  for(int i=0; i<qnt; i++){
    
    if(altura[i]==maior1 || altura[i]==maior2){
      dist2 = dist1;
      dist1 = i;
    } else if(altura[i]==maior1 || altura[i]==maior2) {
      dist2 = i;
    }
    
  }
  
  // printf("%d %d\n", maior1, maior2);
  // printf("%d\n", dist1);
  // printf("%d\n", dist2);
  printf("%d", abs((dist2-dist1))-1);
  
}