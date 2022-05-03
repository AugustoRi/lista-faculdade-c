/*
//1. Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir
10. Faça um programa que gere uma matriz bidimensional com elementos aleatórios
e receba do usuário um valor inteiro x. 
O programa deve informar quantas vezes x aparece na matriz gerada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 5
#define C 5

int main() {
  int v[L][C], x, count = 0;
  srand(time(NULL));

  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      v[i][j] = rand() % 100;
    }
  }
  
  printf("Informe o valor x para verificar: ");
  scanf("%d", &x);

  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (v[i][j] == x) count++;
    }
  }

  puts("A matriz gerada é: ");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("%d | ", v[i][j]);
    }
    printf("\n");
  }

  printf("Portanto, o x aparece %d vezes.\n", count);

  return 0;
}