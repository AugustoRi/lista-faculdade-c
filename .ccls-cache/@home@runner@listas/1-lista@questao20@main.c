//20. Escreva um programa que receba um número inteiro e então determine e imprima se ele é par ou ímpar. Obs.: Não utilizar estrutura de decisão if.

#include <stdio.h>

int main() {
  int numero_usuario;

  printf("Insira o número inteiro: ");
  scanf("%d", &numero_usuario);

  printf("O número é:\n");
  (numero_usuario % 2 ? printf("Ímpar\n") : printf("Par\n"));
}