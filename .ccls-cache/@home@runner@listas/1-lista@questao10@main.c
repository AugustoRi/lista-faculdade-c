//10. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
#include <stdio.h>

float volume_retangulo(float comprimento, float largura, float altura){
  return comprimento * largura * altura;
}

int main(){
  float comprimento_caixa, largura_caixa, altura_caixa;
  
  printf("Insira o comprimento da caixa retangular: ");
  scanf("%f", &comprimento_caixa);

  printf("Insira a largura da caixa retangular: ");
  scanf("%f", &largura_caixa);

  printf("Insira a altura da caixa retangular: ");
  scanf("%f", &altura_caixa);

  printf("Tendo como valores para cálculo do volume dessa caixa retangular:\n");
  printf("Comprimento: %.2f \nLargura: %.2f \nAltura: %.2f\n", comprimento_caixa, largura_caixa, altura_caixa);
  printf("Então, o volume dessa caixa é de: %.2f m³.\n", volume_retangulo(comprimento_caixa, largura_caixa, altura_caixa));
  
  return 0;
}