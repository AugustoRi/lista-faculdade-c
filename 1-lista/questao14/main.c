#include <stdio.h>

float conversao_fahrenheit_celsius(float c) {
  return ((9 * c) + 160) / 5;
}

int main(){
  float celsius;

  printf("Insira a temperatura em Celsius para conversão: C°");
  scanf("%f", &celsius);

  printf("Sua temperatura em fahrenheit é: °F%.2f\n", conversao_fahrenheit_celsius(celsius));
}