#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[60];
    char buffer[60];
    int i = 0;
  
    fgets(frase, 60, stdin);

    while(i<strlen(frase)){
      
      sscanf(&frase[i], "%s", buffer);

      for(int j = 0; j<strlen(buffer); j++){
        if (j == 0){
          buffer[j] = toupper(buffer[j]);
        } else {
          buffer[j] = tolower(buffer[j]);
        }
      }

        printf("%s ", buffer);

        i += strlen(buffer);

        while (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n') {
            i++;
        }
    }

    return 0;
}
