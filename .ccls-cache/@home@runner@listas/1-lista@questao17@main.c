//17. Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo). Não utilize estrutura de decisão if.

#include <stdio.h>

int main() {
  int numero_usuario;
  
  printf("Insira o número inteiro para modular: ");
  scanf("%d", &numero_usuario);

  printf("O número modular desse inteiro é: %d\n", ~numero_usuario + 1);
}