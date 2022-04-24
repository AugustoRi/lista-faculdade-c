#include <stdio.h>

/*
Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.
*/

int main() {
  int numero;

  printf("insira o número da tabuada: ");
  scanf("%d", &numero);

  puts("a tabuada desse número seria:");
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero*i);
  }
  return 0;
}