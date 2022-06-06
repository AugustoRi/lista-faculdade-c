/*
8. Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int procurar_caracter(char *, char);

int main () {
  char str1[TAM], *pstr1 = NULL, c;

  pstr1 = &str1[0];

  printf("Insira qual a string: ");
  scanf("%[^\n]", pstr1);
  getchar();
  printf("Insira o caracter que deseja buscar:");
  scanf(" %c", &c);

  if (!procurar_caracter(pstr1, c)) {
    puts("Caracter não encontrado na string.");
    exit(1);
  }

  puts("Caracter encontrado na string!");

  return 0;
}

int procurar_caracter(char *str, char caracter) {
  unsigned int i = 0, controle = 0;

  while (*(str + i) != '\0') {
    if (*(str + i) == caracter) {
      controle = 1;
      break;
    }
    i++;
  }
  
  return (signed)controle;
}