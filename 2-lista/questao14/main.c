#include <stdio.h>

/*
Elabore um programa que apresente a quantidade de n ́umeros divis ́ıveis por 3 pertencentes a faixa
A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.
*/

#define NUMERODIVISIVEL 3

int main() {
  int a, b, min, max;

  printf("Insira o 1° número: ");
  scanf("%d", &a);

  printf("Insira o 2° número: ");
  scanf("%d", &b);

  if (a > b) {
    max = a;
    min = b;
  }
  else {
    max = b;
    min = a;
  }

  printf("Os números divisíveis por 3 entre %d e %d são: \n", min, max);
  for (int i = min; i <= max; i++) {
    if (!(i % NUMERODIVISIVEL)) {
      printf("%d | ", i);
    }
  }
  printf("\n");
  return 0;
}