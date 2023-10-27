#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

  char placa[20];

  int i=0;
  int aux=0;

  fgets(placa, 20, stdin);
  // printf("%c\n", placa[3]);

  while(i<4){
    if(isalpha(placa[i]) && isupper(placa[i])){
      aux++;
    }
    i++; 
  }

  if(aux==3){
    if(placa[3] == '-' && placa[4] != '-'){
      aux++;
    }
  }

  i = 4;

  if(aux == 4){
    while(i<20){
      if(isdigit(placa[i])){
        aux++;
        // printf("%d\n", aux);
      }
      i++;
    }
  }

  // printf("%d\n", aux);
  // printf("%lu\n", strlen(placa));

  if((aux == 8 || aux == 9) && strlen(placa) == 8){
    printf("sim\n");
  } else {
    printf("não\n");
  }

  return 0;
}