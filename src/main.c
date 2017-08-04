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
    if ((word == 0) && ((c != ' ') && (c != '\n'))){
    	word = 1;
    	cont ++;
    }
    else if ((word == 1) && (c == ' ')){
    	word = 0;
    }
  }

  printf("%d\n", cont);
  return 0;
}
