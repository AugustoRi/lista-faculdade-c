#include <stdio.h>

/*
Refa ̧ca a quest ̃ao 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O
programa deve funcionar tanto para A > B quanto para B > A.
*/

#define NUMEROMULTIPLO 4

int main() {
  int a, b, minimo, maximo;

  printf("Insira o 1° número: ");
  scanf("%d", &a);

  printf("Insira o 2° número: ");
  scanf("%d", &b);
  
  if (a > b) {
    maximo = a;
    minimo = b;
  }
  else {
    maximo = b;
    minimo = a;
  }

  printf("Os número múltiplos por 4 entre %d e %d são: \n", minimo, maximo);
  for (int i = minimo; i <= maximo; i++) {
    if (!(i % NUMEROMULTIPLO)) {
      printf("%d | ", i);
    }
  }
  printf("\n");
  return 0;
}