/*
9. Implemente o método de ordenação bolha utilizando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 10
#define MAX 100

void preencher_vetor(int *, int, int, int);
void printar_vetor(int *, int);
void ordenar_vetor(int *, int);

int main() {
  int v[TAM], *pv = NULL;

  pv = &v[0];

  preencher_vetor(pv, TAM, MIN, MAX);
  puts("Vetor preenchido abaixo:");
  printar_vetor(pv, TAM);
  ordenar_vetor(pv, TAM);
  puts("Vetor ordenado abaixo:");
  printar_vetor(pv, TAM);
  return 0;
}

void preencher_vetor(int *p, int tam, int min, int max) {
  max -= min;
  srand(time(NULL));

  for (int i = 0; i < tam; i++) {
    *(p + i) = min + rand() % max;
  }
}

void printar_vetor(int *p, int tam) {
  for (int i = 0; i < tam; i++) {
    printf("%d | ", *(p + i));
  }
  printf("\n");
}

void ordenar_vetor(int *p, int tam) {
  for (int i = 0; i < tam - 1; i++) {
    for (int k = i; k < tam; k++) {
      if (*(p + k) < *(p + i)) {
        *(p + i) = *(p + i) ^ *(p + k);
        *(p + k) = *(p + i) ^ *(p + k);
        *(p + i) = *(p + i) ^ *(p + k);
      }
    }
  }
}