/*
9. Fa ̧ca um programa que leia uma matriz bidimensional do usu ́ario, de dimens ̃ao 3x3, e apresente os
elementos da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 3
#define TOTAL 9
#define TAM 90

void imprimir_linha(int v[]);

int main() {
  int matriz[L][C], diagonal[L];

  //entrada de dados
  srand(time(NULL));
  
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      matriz[i][j] = 10 + rand() % TAM;
    }  
  }

  //Processamento dos dados
  
  //atribuindo valores a diagonal principal
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (i == j) diagonal[i] = matriz[i][j];  
    }  
  }

  //Saída dos dados
  puts("A matriz é composta por: ");
  for (int i = 0; i < L; i++) imprimir_linha(matriz[i]);
  
  puts("\nA diagonal principal é: ");
  imprimir_linha(diagonal);

  return 0;
}


void imprimir_linha(int v[]) {
  for (int i = 0; i < C; i++) {
    printf("%d | ", v[i]);
  }
  printf("\n");
}