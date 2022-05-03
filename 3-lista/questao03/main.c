/*
3. Faça um programa em C que leia uma string do usuário e informe a quantidade
de caracteres da string fornecida. Não use a função strlen().
*/
#include <stdio.h>

int main() {
  char string[50];

  printf("Insira a string: \n");
  scanf("%[^\n]", string);
  
  unsigned int k = 0;
  while(string[k]!='\0') k++;
    printf("A quantidade de caracteres dessa string é de = %u\n", k);
}