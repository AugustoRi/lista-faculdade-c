/*
9. Faça um programa que leia uma matriz bidimensional do usuário,
de dimensão 3x3, e apresente os elementos da diagonal principal.
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

  srand(time(NULL));
  
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      matriz[i][j] = 10 + rand() % TAM;
    }  
  }

  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (i == j) diagonal[i] = matriz[i][j];  
    }  
  }

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