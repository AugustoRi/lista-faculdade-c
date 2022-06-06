/*Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente.
A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a fun ̧c ̃ao rand()
para alimentar o vetor com valores pseudo-aleat ́orios.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 100

float random_float(int, int);
void preencher_vetor(float *, int, int, int);
void imprimir_vetor(float *, int);
void soma_vetor_float(float *, int, float *);

int main() {
  int qtde;
  float *pv = NULL, sum = 0;

  printf("Informe a quantidade:");
  scanf("%d", &qtde);

  pv = malloc(qtde * sizeof(qtde));

  preencher_vetor(pv, qtde, MIN, MAX);
  puts("O vetor preenchido é:");
  imprimir_vetor(pv, qtde);
  
  soma_vetor_float(pv, qtde, &sum);
  printf("A soma dos elementos desse vetor é de: %.2f\n", sum);

  return 0;
}

float random_float(int min, int max) {
  max -= min;
  
  return min + ( (float)rand() / (float)RAND_MAX * max) ;
}

void preencher_vetor(float *p, int qtde, int min, int max) {
  srand(time(NULL));
  
  for (int i = 0; i < qtde; i++) {
    *(p + i) = random_float(min, max);
  }
}

void imprimir_vetor(float *p, int qtde) {
  for (int i = 0; i < qtde; i++) {
   printf("%.2f | ", *(p + i));
  }
  printf("\n");
}

void soma_vetor_float(float *p, int qtde, float *psum) {
  for (int i = 0; i < qtde; i++) {
    *psum += *(p + i);
  }
}