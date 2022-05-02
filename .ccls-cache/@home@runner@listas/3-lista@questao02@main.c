/*
2. Fa ̧ca um programa em C que leia uma string e um caractere do usu ́ario e informe se a string de
entrada cont ́em o caracter fornecido.
*/

#include <stdio.h>
#define QTDE 50
int main() {
  char c, string[QTDE];
  unsigned int contem = 0;
  
  printf("Insira a string: \n");
  scanf("%[^\n]", string);

  printf("Insira o caracter: ");
  scanf(" %c", &c);

  for (int i = 0; i < QTDE; i++) {
    if (string[i] == c) {
      contem = 1;
      break;
    }
  }

  (contem)?printf("A string contém o caracter.\n"):printf("A string não contém o caracter.\n");

  return 0;
}