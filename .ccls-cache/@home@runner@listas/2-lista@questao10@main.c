#include <stdio.h>

//10. Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de 15 a 90.

#define QTDEMINIMA 15
#define QTDEMAXIMA 90
#define NUMEROMULTIPLO 4

int main() {

  puts("Os número múltiplos são: ");
  for (int i = QTDEMINIMA; i <= QTDEMAXIMA; i++) {
    if (!(i % NUMEROMULTIPLO)) {
      printf("%d | ", i);
    }
  }
  printf("\n");
  return 0;
}