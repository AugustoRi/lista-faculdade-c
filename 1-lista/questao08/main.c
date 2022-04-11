//8. Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.
#include <stdio.h>
#include <math.h>

int quadrado_numero_recebido(int numero_recebido){
  return pow(((double)numero_recebido), 2);
}

int main(){
  int numero_usuario;
  
  printf("Digite o valor inteiro para elevar ao quadrado: ");
  scanf("%d", &numero_usuario);

  printf("O quadrado do número digitado é: %d\n", quadrado_numero_recebido(numero_usuario));
  
  return 0;
}