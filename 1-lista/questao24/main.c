//24. Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. Obs.: Utilize operadores binários.

// x * 2^n

#include <stdio.h>

int main() {
  int x, n;

  printf("Insira o número x: ");
  scanf("%d", &x);

  printf("Insira o número n: ");
  scanf("%d", &n);

  printf("O resultado é: %d\n", x << n);
}