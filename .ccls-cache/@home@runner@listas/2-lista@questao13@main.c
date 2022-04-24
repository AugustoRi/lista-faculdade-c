#include <stdio.h>

/*
Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.
*/


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

  printf("Os número pares entre %d e %d são: \n", min, max);
  for (int i = min; i <= max; i++) {
    if (!(i % 2)) {
      printf("%d | ", i);
    }
  }
  printf("\n");
  return 0;
}