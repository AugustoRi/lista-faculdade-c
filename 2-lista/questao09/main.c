#include <stdio.h>

/*
9. A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. 
Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.
*/

#define QTDE 20

int main() {
  int numeros[QTDE];
  
  for (int i = 0; i < QTDE; i++) {
    if (i <= 1) {
      numeros[i] = 1;
    }
    else {
     numeros[i] = numeros[i - 1] + numeros [i - 2]; 
    } 
  }


  puts("A série de Fibonacci pedida é:");

  for (int i = 0; i < QTDE; i++){
    printf("%d | ", numeros[i]);
  }
  
  printf("\n");
  return 0;
}