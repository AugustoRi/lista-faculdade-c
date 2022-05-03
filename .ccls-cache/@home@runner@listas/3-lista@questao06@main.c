/*
6. Faça um programa em C que leia uma string do usuário
e a apresente na forma inversa.
*/

#include <stdio.h>
#include <string.h>
#define QTDE 50

int main () {
  char string[50], invertida[50];

  printf("Insira a string: \n");
  scanf(" %[^\n]", string);

  puts("===================");
  printf("A string fornecida foi: %s\n", string);
  
  int i = 0;
  for (int j = strlen(string) - 1; j >= 0; j--) {
    invertida[i] = string[j];
    i++;
  }
  invertida[i] = '\0';

  printf("A string invertida foi: %s\n", invertida);

  return 0;
}