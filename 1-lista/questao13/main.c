#include <stdio.h>

int main() {
  int a, b, c;

  printf("Insira o valor de a: ");
  scanf("%d", &a);

  printf("Insira o valor de b: ");
  scanf("%d", &b);
  
  c = a;
  a = b;
  b = c;

  c = 0;

  printf("Valores trocados. Novos valores são: \na = %d, b = %d e c = %d\n", a, b, c);
}