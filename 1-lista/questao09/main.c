//9. Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores sucessor e antecessor.

#include <stdio.h>

int antecessor_funcao(int numero){
  return numero - 1;
}

int sucessor_funcao(int numero){
  return numero + 1;
}

int main(){
  int numero_usuario, antecessor, sucessor;
  printf("Informe o valor numérico inteiro: ");
  scanf("%d", &numero_usuario);

  antecessor = antecessor_funcao(numero_usuario);
  sucessor = sucessor_funcao(numero_usuario);

  printf("O antecessor e o sucessor, respectivamente, do número %d são: \n%d e %d\n", numero_usuario, antecessor, sucessor);
  
  return 0;
}