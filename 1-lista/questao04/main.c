//4. Sabendo que os argumentos da função ”printf”podem ser expressões (a+b, a/b, a*b...), e não somente argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.
#include <stdio.h>
#include <math.h>

int main() {
  int x;

  printf("Insira o valor de X: ");
  scanf("%d", &x);

  printf("O valor de x sendo %d, temos os dados:\n", x);
  printf("Seu triplo: %d\n", 3*x);
  printf("Seu quadrado: %.0lf\n", pow(((double)x), 2));
  printf("Seu meio: %.1f\n", ( (float)x )/ 2);
}