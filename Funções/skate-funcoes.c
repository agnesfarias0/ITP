#include <stdio.h>

int pontoDia(p1,p2,p3){
  int pontosDia=0;
  if(p1 == p2 || p1 == p3){
    pontosDia = p1;
  } else if (p2 == p3) {
    pontosDia = p2;
  }
  if(p1>p2 && p1>p3 && p3>p2){
      pontosDia = p3;
  } else if(p1>p2 && p1>p3 && p2>p3){
      pontosDia = p2;
  } else if(p2>p1 && p2>p3 && p1>p3){
      pontosDia = p1;
  } else if(p2>p1 && p2>p3 && p3>p1){
      pontosDia = p3;
  } else if(p3>p1 && p3>p2 && p2>p1){
      pontosDia = p2;
  } else if(p3>p1 && p3>p2 && p1>p2){
      pontosDia = p1;
  }
  return pontosDia;
}

int lerPontos(){
  int p1,p2,p3,pf1,pf2,pf3;
  
  scanf("%d %d %d", &p1, &p2, &p3);
  pf1 = pontoDia(p1,p2,p3);

  scanf("%d %d %d", &p1, &p2, &p3);
  pf2 = pontoDia(p1,p2,p3);

  scanf("%d %d %d", &p1, &p2, &p3);
  pf3 = pontoDia(p1,p2,p3);
  
  return pontoDia(pf1,pf2,pf3);
}


int main() {

  int pontos_a,pontos_b;

  pontos_a = lerPontos();  
  pontos_b = lerPontos();

  if(pontos_a > pontos_b){
    printf("A");
  } else if(pontos_b > pontos_a){
    printf("B");
  } else if(pontos_b == pontos_a){
    printf("empate");
  }
}