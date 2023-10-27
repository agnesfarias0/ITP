#include <stdio.h>
#include <math.h>

int pontos=0, bonus=0;

float distanciaEuclidiana(float x, float y, float x0, float y0){
  return sqrt(pow((x-x0),2)+pow((y-y0),2));
}

int calculaPontos(float dist){
  if(dist>=0 && dist<=1){
    pontos = 10;
  } else if(dist>1 && dist <=2){
    pontos = 6;
  } else if(dist>2 && dist<=3){
    pontos = 4;
  } else if(dist>3){
    pontos = 0;
  }
  return pontos;
}

int calculaBonus(float dist){
  if(dist>=0 && dist<=1){
    bonus = 5;
  } else if(dist>1 && dist<=2){
    bonus = 3;
  } else if(dist>2 && dist<=3){
    bonus = 2;
  } else if(dist>3){
    bonus = 0;
  }
  return bonus;
}

int main() {
  float x0=0, y0=0, x, y, dist, distPontos,aux, aux2;
  int pontFinal=0, pontAnterior=0, pontBonus = 0, pontRodada = 0;

  scanf("%f %f", &x, &y);
  dist = distanciaEuclidiana(x, y, 0, 0);
  pontFinal = calculaPontos(dist);
  printf("distancia = %f\n", dist);
  printf("pontos = %d\n", pontFinal);
  x0 = x;
  y0 = y;
  
  for(int i=0; i<9; i++){
    scanf("%f %f", &x, &y);
    dist = distanciaEuclidiana(x, y, 0, 0);
    distPontos = distanciaEuclidiana(x, y, x0, y0);
    printf("distancia = %f\n", dist);
    printf("distancia pontos = %f\n", distPontos);
    pontBonus = calculaBonus(distPontos);
    pontRodada = calculaPontos(dist);
    pontAnterior = pontBonus+pontRodada;
    pontFinal = pontFinal+pontAnterior;
    printf("pontos na rodada = %d\n", pontRodada);
    printf("pontos bonus = %d\n", pontBonus);
    printf("pontos finais = %d\n", pontFinal);
    x0 = x;
    y0 = y;
  }

  printf("%d", pontFinal);
  
}