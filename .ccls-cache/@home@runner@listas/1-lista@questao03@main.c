//3. Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.
#include <stdio.h>

int main(){
  float valor_real;

  printf("Entre com o valor real: ");
  scanf("%f", &valor_real);

  printf("O valor escolhido com a formatação desejada é: %.1f\n", valor_real);
  return 0;
}