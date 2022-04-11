//21. Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. Obs.: Não utilizar estrutura de decisão if.

#include <stdio.h>

int main() {
  int n1, n2;

  printf("Insira o primeiro número: ");
  scanf("%d", &n1);

  printf("Insira o segundo número: ");
  scanf("%d", &n2);

  (n2 % n1 ? printf("primeiro número não é múltiplo do segundo\n") : printf("primeiro número é múltiplo do segundo\n"));
}