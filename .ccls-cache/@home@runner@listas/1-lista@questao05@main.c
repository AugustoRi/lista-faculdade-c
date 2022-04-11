//5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.
#include <stdio.h>

float conta(int valor_conta, int gorgeta){
  float resultado;

  resultado = (float)valor_conta + ((float)valor_conta * ((float)gorgeta / 100) ); 
  return resultado;
}

int main(){
  int conta_usuario;
  
  printf("Informe o valor a ser pago: ");
  scanf("%d", &conta_usuario);

  printf("O valor total que será pago será: R$%g\n", conta(conta_usuario, 10));
  return 0;
}