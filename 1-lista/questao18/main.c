//18. Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência e sua área. Use o valor de 3,14159 para ”pi”. Faça cada um destes cálculos dentro da instruções (ou instruções) printf e use o especificador de conversão %f.

#include <stdio.h>

int main() {
  float const pi = 3.14159;
  float raio;
  
  printf("Insira o valor do raio do círculo: ");
  scanf("%f", &raio);

  printf("Dados do círculo:\n");
  printf("Diâmetro: %.2fcm \nCircunferência: %.2fcm \nÁrea: %.2fcm²\n", (raio * raio), (2 * pi * raio), (pi * (raio * raio)));
  
  return 0;
}