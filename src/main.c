/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c = 0;
  int cont = 0, word = 0, ehnum = 0, pontoDec = 0;    

  while (c != '\n') {
    scanf("%c", &c);
    if (word == 0){ // Possível começo de palavra
      if (48 <= c && c <= 57){ // É um número
        ehnum = 1;
        word = 1;
        cont ++;        
      }
      else if ((65 <= c && c <= 90) || (97 <= c && c <= 122)){ // É uma letra
        word = 1;
        cont ++;        
      }
    }
    else { // Possível fim de palavra
      if (ehnum == 1){ // Palavra de número
        if ((65 <= c && c <= 90) || (97 <= c && c <= 122)){ // Começo de palavra com letra logo em seguida do fim de número
          ehnum = 0;
          pontoDec = 0;
          cont++;
        }
        else if (!((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))){ // Fim de número
          if (c == '.' || c == ','){
            if (pontoDec == 0){
              pontoDec = 1;
            }
            else {
              pontoDec = 0;
              ehnum = 0;
              word = 0;
            }
          }
          else {
            ehnum = 0;
            pontoDec = 0;
            word = 0;
          }
        }
      }
      else { // Palavra de letra
        if (48 <= c && c <= 57){ // Começo de palavra com número logo em seguida do fim de letra
          ehnum = 1;
          cont ++;
        }
        else if (!((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))){ // Fim de letra
          word = 0;
        }
      }     
    }
  }

  printf("%d\n", cont);
  return 0;
}
