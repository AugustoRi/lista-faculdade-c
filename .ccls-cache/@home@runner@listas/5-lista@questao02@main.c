/*Escreva um programa em C que informe o endereço do menor elemento de um vetor de inteiros
gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 10
#define MAX 99

void preencher_vetor(int *, int, int, int);
void imprimir_vetor(int *, int);
int menor_numero_no_vetor(int *, int);

int main() {
  int *pv = NULL, qtde;

  printf("Insira a quantidade: ");
  scanf("%d", &qtde);

  pv = malloc(qtde * sizeof(qtde));

  preencher_vetor(pv, qtde, MIN, MAX);
  puts("O vetor preenchido é: ");
  imprimir_vetor(pv, qtde);
  printf("O menor número deste vetor é o: %d\n", menor_numero_no_vetor(pv, qtde));

  
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

int menor_numero_no_vetor(int *p, int qtde) {
  unsigned char menor = *(p + 0);

  for (int i = 1; i < qtde; i++) {
    if (*(p+i) < menor) menor = *(p + i); 
  }

  return ( (signed int) menor );
}