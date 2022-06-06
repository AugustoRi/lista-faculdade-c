/*
2. Escreva um programa que troque o valor de dois números utilizando ponteiros.
*/

#include <stdio.h>

#define N1 10
#define N2 20

void printar_numeros(int *, int *);
void trocar_numeros(int *, int *);

int main() {
  int a, b, *pa = NULL, *pb = NULL;

  pa = &a;
  pb = &b;

  printf("Insira o primeiro número:");
  scanf("%d", &a);
  
  printf("Insira o segundo número:");
  scanf("%d", &b);
  
  puts("números antes da troca:");
  printar_numeros(pa, pb);
  
  trocar_numeros(pa, pb);

  puts("números depois da troca:");
  printar_numeros(pa, pb);

  return 0;
}

void printar_numeros(int *p1, int *p2) {
  puts("===================");
  printf("1°: %d\n", *p1);
  printf("2°: %d\n", *p2);
  puts("===================");
}

void trocar_numeros(int *p1, int *p2) {
  *p1 = *p1 ^ *p2;
  *p2 = *p1 ^ *p2;
  *p1 = *p1 ^ *p2;
}
