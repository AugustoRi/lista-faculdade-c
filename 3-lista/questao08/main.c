/*
8. Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
de ordena ̧c ̃ao por sele ̧c ̃ao e outra pelo m ́etodo bolha (bubble sort).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void imprimir_vetor(int v[], int tamanho);

int main() {
  int v[TAM], selecao[TAM], bolha[TAM], min, max, c;
  srand(time(NULL));

  printf("Informe o limite minimo do intervalo:\n");
  scanf("%d", &min);

  printf("Informe o limite maximo do intervalo:\n");
  scanf("%d", &max);

  for (int i = 0; i < TAM; i++) {
    v[i] = min + ( rand() % (max-min+1) );
  }
  
  for (int i = 0; i < TAM; i++) {
    selecao[i] = v[i];
    bolha[i] = v[i];
  }

  puts("Vetor original:");
  imprimir_vetor(v, TAM);
  
  for (int i = 0; i < TAM - 1; i++) {
    for (int k = i + 1; k < TAM; k++) {
      if (selecao[i] > selecao[k]) {
        c = selecao[i];
        selecao[i] = selecao[k];
        selecao[k] = c;
      }
    }
  }
  
  for (int i = 1; i < TAM; i++) {
    for (int k = 0; k < TAM - 1; k++) {
      if (bolha[k] > bolha[k+1]) {
        c = bolha[k];
        bolha[k] = bolha[k+1];
        bolha[k+1] = c;
        c = 0;
      }
    }
  } 

  puts("Ordenação crescente por seleção:");
  imprimir_vetor(selecao, TAM);

  puts("Ordenação crescente por bolha:");
  imprimir_vetor(bolha, TAM);

  return 0;
}

void imprimir_vetor(int v[], int tamanho) {
  unsigned int count = 0;
  for (int a = 0; a < tamanho; a++) {
    printf("%d |", v[a]);
    count++;
    if (count == 10) {
      printf("\n");
      count = 0;
    }
  }
  printf("\n");
}