/*
6. Escreva um programa que copie uma string para outra usando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void copiar_str(char *, char *);
void printar_str(char *);

int main() {
  char str1[TAM], str2[TAM], *pstr1 = NULL, *pstr2 = NULL;

  pstr1 = &str1[0];
  pstr2 = &str2[0];
  
  printf("Insira a string para copiar: ");
  scanf("%[^\n]", pstr1);

  if (!pstr1) {
    printf("Memória insuficiente para essa string.");
    exit(1);
  }
  
  copiar_str(pstr1, pstr2);
  puts("String copiada com sucesso!");
  puts("Conteudo da primeira string:");
  printar_str(pstr1);
  puts("conteudo da segunda string:");
  printar_str(pstr2);
  printf("\n");

  return 0;
}

void copiar_str(char *p1, char *p2) {
  unsigned int i = 0;

  while (*(p1 + i) != '\0') {
    *(p2 + i) = *(p1 + i);
    i++;
  }
}

void printar_str(char *str) {
  unsigned int i = 0;

  puts("==============================");
  while (*(str + i) != '\0') {
    printf("%c", *(str + i));
    i++;
  }
  printf("\n");
  puts("==============================");
}