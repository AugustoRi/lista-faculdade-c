#include <stdio.h>

/*
Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.

//F = (9 * C + 160) / 5
*/

int main() {
  int celsius = 0, fahrenheit = 0;
  
  puts("O valor das duas temperaturas são:");
  for (int i = 10; i <= 100; i = i + 10) {
    celsius = i;

    fahrenheit = (9 * celsius + 160) / 5;

    printf("C°: %d \t F°: %d\n", celsius, fahrenheit);
  }
  printf("\n");
  return 0;
}