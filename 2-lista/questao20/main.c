#include <stdio.h>

int main() {
  int numero = 10;
  int fatorial = 1;
  
  puts("O fatorial entre essa faixa de valores ímpares é:");
  
  printf("\n!%d = ", numero);
  
  while (numero > 1) {
    if ((numero % 2)) {
      printf("%d x ", numero);
      fatorial *= numero;
    }
    
    numero--;
  }

  printf("1 = %d\n", fatorial);
  return 0;
}