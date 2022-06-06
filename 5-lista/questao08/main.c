/*
Escreva um programa em C que binarize os elementos da matriz M gerada aleatoriamente e com
dimensões obtidas em tempo de execução. A partir de um limiar(limite) t dado, crie a matriz S da seguinte
forma:

Si.j{ 
- 1 se Mi,j > t
- 0 caso contrário
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 100
#define BIN 10

void preencher_vetor(int **, int, int, int, int);
void alocar_matriz_int(int **, int, int);
void binarizar_vetor(int **, int, int, int);
void imprimir_vetor(int **, int, int);

int main() {
  int lin, col, **pm = NULL, **ps = NULL;

  puts("INFORME A DIMENSÃO DA MATRIZ A SEGUIR");
  printf("qtde de linhas: ");
  scanf("%d", &lin);
  
  printf("qtde de colunas: ");
  scanf("%d", &col);

  alocar_matriz_int(pm, lin, col); 
  preencher_vetor(pm, lin, col, MIN, MAX);
  binarizar_vetor(pm, lin, col, BIN);
  imprimir_vetor(pm, lin, col);

  
  return 0;
}

void alocar_matriz_int(int **p, int l, int c) {
  p = malloc(c * sizeof(int*));

 for (int i = 0; i < l; i++) *(p + i) = malloc(l * sizeof(int));
}

void preencher_vetor(int **p, int l, int c, int min, int max) {
  srand(time(NULL));
  max -= min;

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++)
      *(*(p + i) + j) = min + rand() % max;
  }
}

void binarizar_vetor(int **p, int l, int c, int bin) {
  int numero_base = 0000000000;
  int numero_convertido;

  //binarizar vetor == 2 === 0010
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      if (! (*(*(p + i) + j) % 2) ) {
        for (int k = bin; k <= 0; k--) {
          numero_convertido = numero_base & *(*(p + i) + j);
          *(*(p + i) + j) = *(*(p + i) + j) / 2;
          if ((*(*(p + i) + j) % 2)) break;
        }
      }
    }
  }
/*
   for(int i = MIN; i >= 0; i--) {
    *(p + i) = *(p + i) >> i;
         
    if(*(p + i) & 1) {
      printf("1");
    } else {
      printf("0");
    }
   }
  */
}


void imprimir_vetor(int **p, int l, int c) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) printf("%d | ", *(*(p + i) + j));
    printf("\n");
  }
}

//10
/*
  10 % 2 => 0
  5 % 2 => 1
  1 % 2 => 1

0 + 0 1 2 3 4 5 6 7 8 9
    0 0 0 0 0 0 0 0 0 0

1 + 0 1 2 3 4 5 6 7 8 9
    0 0 0 0 0 0 0 0 1 0

1 + 0 1 2 3 4 5 6 7 8 9
    0 0 0 0 0 0 0 1 1 0

number = number & numero_da_matriz 
*/