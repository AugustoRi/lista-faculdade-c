/*
Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
também o endereço de memória onde o valor resultante dessa soma está armazenado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTDE_NUMEROS 2

void soma(int, int, int *);

int main() {
  int n1, n2, resultado, *pn1 = NULL, *pn2 = NULL;

  pn1 = &n1;
  pn2 = &n2;

  puts("INSIRA AS INFORMAÇÕES ABAIXO");
    
  printf("Insira o primero número: ");
  scanf("%d", &n1);
  printf("Insira o segundo número: ");
  scanf("%d", &n2);
  
  soma(n1, n2, &resultado);

  puts("RESULTADO DA SOMA E SEU ENDEREÇAMENTO NA MEMÓRIA:");
  printf("endereçamento: [%pn1] | soma: %d\n", &resultado, resultado);

  return 0;
}

void soma(int a, int b, int *p) {
  *p = a + b;
}