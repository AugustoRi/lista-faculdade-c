/*
1. Fa ̧ca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do menor e maior elemento do vetor fornecido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTDE 15

float random_float() {
  return ( ( (float)rand() ) / (float)RAND_MAX ) * 5;
}


void imprimir_vetor(float v[], int length);

int main() {
  float v[QTDE], maior = 0, menor = 0, soma;

  srand(time(NULL));

  for (int i = 0; i < QTDE; i++) {
    v[i] = random_float();
  } 

  maior = v[0];
  menor = v[0];

  for (int i = 0; i < QTDE; i++) {
    maior = (!(maior < v[i]))?v[i]:maior;
    menor = (!(menor > v[i]))?v[i]:menor;
  } 

  puts("O vetor é:\n");
  imprimir_vetor(v, QTDE);

  printf("Maior número: %.2f \nMenor número: %.2f\n", maior, menor);

  return 0;
}

void imprimir_vetor(float v[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d° número: %.2f \n", i+1, v[i]);
  }
  printf("\n");
}