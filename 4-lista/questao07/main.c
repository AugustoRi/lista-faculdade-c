/*
7. Escreva um programa que concatene duas strings utilizando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void verificar_tam_str(char *, int *);
void concatenar_str(char *, char *, int);
void printar_str(char *);

int main() {
  char str1[TAM], str2[TAM], *pstr1 = NULL, *pstr2 = NULL;
  int tamanho_primeira_string;

  pstr1 = &str1[0];
  pstr2 = &str2[0];

  printf("Informe a primeira string:\n");
  scanf(" %[^\n]", pstr1);

  printf("Informe a string para concatenar:\n");
  scanf(" %[^\n]", pstr2);

  if (!pstr1 || !pstr2) {
    puts("Memória indisponível.");
    exit(1);
  }
  
  verificar_tam_str(pstr1, &tamanho_primeira_string);
  concatenar_str(pstr1, pstr2, tamanho_primeira_string);
  puts("Concatenação feita com sucesso!");
  puts("Conteudo da string concatenada:");
  printar_str(pstr1);
  printf("\n");

  return 0;
}

void verificar_tam_str(char *str, int *tam) {
  unsigned int i = 0;

  while (*(str + i) != '\0') i++;

  *tam = i;
}

void concatenar_str(char *p1, char *p2, int tam) {
  unsigned int j = 0;

  while (*(p2 + j) != '\0') {
    *(p1 + tam + j) = *(p2 + j);
    j++;
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