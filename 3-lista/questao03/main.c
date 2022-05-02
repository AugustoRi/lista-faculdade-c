/*
3. Fa ̧ca um programa em C que leia uma string do usu ́ario e informe a quantidade de caracteres da
string fornecida. N ̃ao use a fun ̧c ̃ao strlen().
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