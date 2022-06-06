/*
5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

void encontrar_tamanho_string(char *, int *);

int main() {
  char v[TAM], *pstring = NULL;
  int tam;

  pstring = &v[0];

  printf("Insira a string:\n");
  scanf("%[^\n]", pstring);

  if (!pstring) {
    puts("Não existe memoria disponível");
		exit(1);
  }

  encontrar_tamanho_string(pstring, &tam);
  printf("o tamanho da string é: %d\n", tam);

  return 0;
}

void encontrar_tamanho_string(char *p, int *tam) {
  unsigned int i = 0;
  
  while (*(p + i) != '\0') {
    printf("%c", *(p + i));
    i++;
  }
  printf("\n");

  *tam = i;
}