#include <stdio.h>

/*
Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.
*/

int main() {
  int qtde_numeros, sum = 0;
  float media;

  printf("Digite a quantidade de numeros para a média: ");
  scanf("%d", &qtde_numeros);

  for (int i = 0; i < qtde_numeros; i++) {
    sum += i + 1;
  }

  media = (float)sum / qtde_numeros;
  
  puts("A média aritmética é de:");
  printf("%.2f\n", media);
  return 0;
}