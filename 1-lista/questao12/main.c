#include <stdio.h>

int main() {
  int primeiro_numero, segundo_numero;

  
  printf("Insira o primeiro número: ");
  scanf("%d", &primeiro_numero);
  
  printf("Insira o segundo número: ");
  scanf("%d", &segundo_numero);

  printf("Operações obtidas:\n");
  //soma, produto, diferença. quociente, resto da divisao
  
  printf("Soma: %d\n", primeiro_numero + segundo_numero);
  printf("Diferença: %d\n", primeiro_numero - segundo_numero);
  printf("Produto: %d\n", primeiro_numero * segundo_numero);
  printf("Quociente: %d\n", primeiro_numero / segundo_numero);
  printf("Resto da divisão: %d\n", primeiro_numero % segundo_numero);
}