/*
10. Escreva um programa que gere um vetor X com números pseudoaleatórios no intervalo [0,N − 1].
Crie um vetor F com N posições e armazene em cada posição de F a quantidade de ocorrências
dos elementos de X. Exemplo:
Para N = 7, temos:

X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]

Portanto,

F = [2, 0, 4, 2, 1, 3, 2]

Observe que as ocorrências dos elementos de X são armazenadas em F nos índices de mesmo valor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void numero_ocorrencia(int *, int *, int, int);

int main() {
  int *px = NULL, *pf = NULL, tam, n;
  
  printf("Insira o tamanho do vetor X: ");
  scanf("%d", &tam);
  printf("Insira o intervalo máximo do vetor X: ");
  scanf("%d", &n);

  px = malloc(tam * sizeof(int));
  pf = malloc(n * sizeof(int));
  
  preencher_vetor(px, tam, n);
  puts("Vetor X abaixo:");
  imprimir_vetor(px, tam);
  numero_ocorrencia(px, pf, tam, n);
  puts("Vetor F abaixo:");
  imprimir_vetor(pf, tam);
  free(px);
  free(pf);
  return 0;
}

void preencher_vetor(int *p, int tam, int max) {
  srand(time(NULL));

  for (int i = 0; i < tam; i++) {
    *(p + i) = rand() % max;
  }
}

void imprimir_vetor(int *p, int tam) {
  printf("[");
  for (int i = 0; i < tam; i++) {
    if (i != tam - 1)
      printf("%d, ", *(p + i));
    else
      printf("%d]", *(p + i));
  }
  printf("\n");
}

void numero_ocorrencia(int *p1, int *p2, int tam, int n) {
  unsigned count = 0;
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < tam; k++) {
      if (*(p1 + k) == i) count++;
      if (k == tam - 1) {
        *(p2 + i) = count;
        count = 0;
      }
    }
  }

}