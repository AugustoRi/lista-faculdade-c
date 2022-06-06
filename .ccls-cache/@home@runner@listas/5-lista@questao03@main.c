/*
Modifique a questão anterior criando uma função que armazena em um vetor os endereços do menor
e do maior elemento do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 99

void preencher_vetor(int *, int, int, int);
void imprimir_vetor(int *, int);
void menor_numero_no_vetor(int *, int, int *);
void maior_numero_no_vetor(int *, int, int *);

int main() {
  int *pv = NULL, qtde, menor, maior;

  printf("Insira a quantidade: ");
  scanf("%d", &qtde);

  pv = malloc(qtde * sizeof(qtde));

  preencher_vetor(pv, qtde, MIN, MAX);
  menor = *(pv + 0);
  maior = *(pv + 0);
  
  puts("O vetor preenchido é: ");
  imprimir_vetor(pv, qtde);
  
  menor_numero_no_vetor(pv, qtde, &menor);
  maior_numero_no_vetor(pv, qtde, &maior);

  printf("O menor número desse vetor é: %d\n", menor);
  printf("O maior número desse vetor é: %d\n", maior);
  return 0;
}

void preencher_vetor(int *p, int qtde, int min, int max) {
  srand(time(NULL));

  max -= min;

  for (int i = 0; i < qtde; i++) {
    *(p + i) = min + rand() % max;
  }
}

void imprimir_vetor(int *p, int qtde) {
  for (int i = 0; i < qtde; i++) {
    printf("%d | ", *(p + i));
  }
  printf("\n");
}

void menor_numero_no_vetor(int *p, int qtde, int *pmenor) {

  for (int i = 1; i < qtde; i++) {
    if (*(p+i) < *pmenor) *pmenor = *(p + i);
  }
}

void maior_numero_no_vetor(int *p, int qtde, int *pmaior) {

  for (int i = 1; i < qtde; i++) {
    if (*pmaior < *(p+i)) *pmaior = *(p + i); 
  }
  
}