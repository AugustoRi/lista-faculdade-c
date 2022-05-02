/*
7. Fa ̧ca um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleat ́orios no intervalo
[0, 19] e apresente a sua m ́edia aritm ́etica e geom ́etrica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define QTDE 3

int main() {
  int numeros[QTDE], soma = 0, multiplicacao = 1;
  float media_aritm, media_geom;
  
  srand(time(NULL));

  puts("Os números do vetor são:");
  for (int i = 0; i < QTDE; i++) {
    numeros[i] = rand() % 20;
    printf("%d | ", numeros[i]);
  }

  for (int i = 0; i < QTDE; i++) {
    soma += numeros[i];
    multiplicacao *= numeros[i];
  }
  

  media_aritm = ( (float)soma ) / QTDE;
  media_geom = (float)pow(multiplicacao, 1.0/QTDE);

  puts("\n===========");
  puts("Os resultados são:");
  printf("Media Aritmética: %.2f\n", media_aritm);
  printf("Media Geométrica: %.2f\n", media_geom);

  return 0;
}