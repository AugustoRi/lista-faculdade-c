//23. Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.

#include <stdio.h>

int main() {
  char numero[4];

  printf("Insira o número: ");
  numero = getchar();

  printf("Número recebido: %s \nNúmero invertido: %s", numero, strrev(str));
}