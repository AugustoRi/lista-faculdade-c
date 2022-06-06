/*
Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros
gerados aleatoriamente em tempo de execu ̧c ̃ao.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 100

void preencher_vetor(int *, int, int, int);
void imprimir_vetor(int *, int);
void contador_frequencia(int *, int);
void ordenar_vetor_crescente(int *, int);
void calcular_moda(int *p, int qtde, int *pf, int max, int min, int *pmoda);

int main() {
  int *pv = NULL, *pf = NULL, *pcrescente = NULL, qtde, moda;
  float media, mediana;

  printf("Insira a quantidade: ");
  scanf("%d", &qtde);

  pv = malloc(qtde * sizeof(qtde));
  pf = malloc(MAX * sizeof(int));
  preencher_vetor(pv, qtde, MIN, MAX);
  contador_frequencia(pf, MAX - 10);
  ordenar_vetor_crescente(pv, qtde);
  imprimir_vetor(pv, qtde);
  calcular_moda(pv, qtde, pf, MAX, MIN, &moda);
  printf("A moda é: %d\n", moda);
  
  return 0;
}

void preencher_vetor(int *p, int qtde, int min, int max) {
  srand(time(NULL));
  max -= min;

  for (int i = 0; i < qtde; i++) {
    *(p + i) = min + rand() % max;
  }
}

void ordenar_vetor_crescente(int *p, int qtde) {
  for (int i = 0; i < qtde - 1; i++) {
    for (int j = i+1; j < qtde; j++) {
      if (*(p + j) < *(p + i)) {
        *(p + i) = *(p + i) ^ *(p + j);
        *(p + j) = *(p + i) ^ *(p + j);
        *(p + i) = *(p + i) ^ *(p + j);
      }
    }
  }
}

void imprimir_vetor(int *p, int qtde) {
  for (int i = 0; i < qtde; i++) {
    printf("%d | ", *(p + i));
  }
  printf("\n");
}

/*
void media(int *p, int qtde, float *pmedia) {
  float sum = 0;

  for (int i = 0; i < qtde; i++) {
    sum += *(p + i);
  }

  *pmedia = sum / qtde;
}

void mediana(int *p, int qtde, float *pmediana) {
  if (! (qtde % 2) ) {
    *pmediana = *(p + (qtde / 2)) + *(p + (qtde / 2 + 1)) / 2;
  }
  else {
    *pmediana = (qtde / 2) + 1;
  }
}
*/

void contador_frequencia(int *p, int tam) {
  for (int i = 0; i < tam; i++) {
    *(p + i) = 0;
  }
}

void calcular_moda(int *p, int qtde, int *pf, int max, int min, int *pmoda) {
  // 2, 2, 4, 5, 5, 3, 3, 3
  int count = 0;
  
  for (int i = 0; i < qtde; i++) {
    *(pf + ( *(p + i) - min )) = *(pf + ( *(p + i) - min )) + 1;
  }
  
  for (int j = 0; j < max; j++) {
    printf("%d posicao %d\n", *(pf + j), j);
    if (*(pf + j)) if (count <= *(pf + j)) count = j;
    printf("count looping = %d\n", count);
  }

  printf("count final = %d\n", count);

  //moda = p[pf[count] + ini]
  
  *pmoda = *(p + ( *(pf + count) + min ));
  // dando (3) maior na posicao 69
  // printando valor na posicao (10)
  
/*
  unsigned char count = 0, qtde_rep = 0;
  unsigned char *pc;
  for (int i = 0; i < qtde - 1; i++) {
    for (int k = i + 1; k < qtde; k++) {
      if (*(p + i) == *(p + k)) count++;
      else {
        if (qtde_rep  < count) {
          qtde_rep = count;
          count = 0;
        }
      }
    }
  }

  for (int i = 0; i < qtde - 1; i++) {
    for (int k = i + 1; k < qtde; k++) {
      if (*(p + i) == *(p + k)) {
        count++;
      }

      if (qtde_rep == count) {
        *moda = *(p + i);
        break;
      }
    }
  }
*/

}

// pegar os numeros que se repetem
// dos numeros que se repetem, tenho que verificar qual deles se repete mais vezes
