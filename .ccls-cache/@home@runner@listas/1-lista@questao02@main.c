#include <stdio.h>

//Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.
//Ex.: Entre com o valor: 10
//Hexadecimal: A
//Octal: 12

int main(){
  int X;

  printf("Escreva o valor de x em decimal: ");
  scanf("%d", &X);

  printf("Com o valor de X sendo %d, temos:\n", X);
  printf("X em hexadecimal: %X\n", X);
  printf("X em Octal: %o\n", X);
  
  
  return 0;
}