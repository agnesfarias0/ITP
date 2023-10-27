#include <stdio.h>

int main() {

  int comp, larg, aux=0;

  scanf("%d %d", &comp, &larg);

  if(comp > larg){
    do{
      comp = (comp/2);
      aux++;
    }while(comp != larg);
  } else if(larg > comp){
    do{
      larg = (larg/2);
      aux++;
    }while(larg != comp);
  }

  printf("%d", aux);

}