#include <stdio.h>

//3. Escreva um programa que leia um número inteiro e positivo F e calcule o fatorial deste número.

int main() {
  int F;
  int fatorial = 1;

  printf("Informe F: ");
  scanf("%d", &F);

  printf("\n!%d = ", F);
  
  while (F > 1) {
    printf("%d x ", F);
    fatorial *= F;
    F--;
  }

  printf("1 = %d\n", fatorial);
  return 0;
}