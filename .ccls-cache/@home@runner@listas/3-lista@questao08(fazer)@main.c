/*
8. Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
de ordena ̧c ̃ao por sele ̧c ̃ao e outra pelo m ́etodo bolha (bubble sort).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void imprimir_vetor(int v[], int tamanho);

int main() {
  int v[TAM], selecao[TAM], bolha[TAM], min, max, nao_ordenado;
  srand(time(NULL));

  printf("Informe o limite minimo do intervalo:\n");
  scanf("%d", &min);

  printf("Informe o limite maximo do intervalo:\n");
  scanf("%d", &max);

  for (int i = 0; i < TAM; i++) {
    v[i] = min + ( rand() % (max+1) );
  }
  
  for (int i = 0; i < TAM; i++) {
    selecao[i] = v[i];
    bolha[i] = v[i];
  }

    for (int i = 0; i < TAM - 1; i++) {
      for (int k = i + 1; k < TAM; k++) {
        if (selecao[i] > selecao[k]) {
          selecao[i] = selecao[i] ^ selecao[k];
          selecao[k] = selecao[i] ^ selecao[k];
          selecao[i] = selecao[k] ^ selecao[k];
          //c = selecao[i];
          //v[i] = v[k];
          //v[k] = c;
        }
      }
  }

    do {
      nao_ordenado = 0;
      for (int k = 0; k < TAM - 1; k++) {
        if (bolha[k] > bolha[k+1]) {
          bolha[k] = bolha[k] ^ bolha[k+1];
          bolha[k+1] = bolha[k] ^ bolha[k+1];
          bolha[k] = bolha[k] ^ bolha[k+1];
          nao_ordenado = 1;
        }
      }
    } while(nao_ordenado);

  return 0;
}

void imprimir_vetor(int v[], int tamanho) {
  for (int a = 0; a < tamanho; a++) {
    printf("%d ", v[a]);
  }
  printf("\n");
}