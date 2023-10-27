#include <stdio.h>
#include <string.h>

int main() {
  enum TipoJogo {LUTA, AVENTURA, ESTRATEGIA, ESPORTE, RPG};
  int numJogadores, prefLuta, prefAvent, prefEstrat, prefEsp, prefRpg = 0;

  scanf("%d", &numJogadores);

  char nome[numJogadores][50];
  char jogoPreferido[numJogadores][50];

  for(int i = 0; i < numJogadores; i++) {
    scanf("%s", nome[i]);
    scanf("%s", jogoPreferido[i]);

    if(strcmp(jogoPreferido[i], "LUTA") == 0){
      prefLuta++;
    } else if (strcmp(jogoPreferido[i], "AVENTURA") == 0) {
      prefAvent++;
    } else if (strcmp(jogoPreferido[i], "ESTRATEGIA") == 0) {
      prefEstrat++;
    } else if (strcmp(jogoPreferido[i], "ESPORTE") == 0) {
      prefEsp++;
    } else if (strcmp(jogoPreferido[i], "RPG") == 0) {
      prefRpg++;
    }
    
  }

  printf("Preferem LUTA: %d\n", prefLuta);
  printf("Preferem AVENTURA: %d\n", prefAvent);
  printf("Preferem ESTRATEGIA: %d\n", prefEstrat);
  printf("Preferem ESPORTE: %d\n", prefEsp);
  printf("Preferem RPG: %d\n", prefRpg);

}
