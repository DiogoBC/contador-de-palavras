/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c = 0;
  int cont = 0, word = 0;  

  while (c != '\n') {
    scanf("%c", &c);
    if ((word == 0) && ((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))){
    	word = 1;    	
    	cont ++;
    }
    else if ((word == 1) && !((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))){
    	word = 0;    	
    }
  }

  printf("%d\n", cont);
  return 0;
}
