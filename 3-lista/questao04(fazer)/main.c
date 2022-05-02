/*
4. Fa ̧ca um programa em C que leia duas strings do usu ́ario e informe se elas s ̃ao iguais. Fa ̧ca uma
vers ̃ao com o uso da fun ̧c ̃ao strcmp() e outra sem.
*/

#include <stdio.h>
#include <string.h>
#define QTDE 50

int main() {
  char str1[QTDE], str2[QTDE];
  unsigned int iguais_cmp, iguais;

  //versao usando strcmp()
  printf("Insira a primera string: \n");
  scanf(" %[^\n]", str1);

  printf("Insira a segunda string: \n");
  scanf(" %[^\n]", str2);

  iguais_cmp = strcmp(str1, str2);

  puts("Resultado usando strcmp()");
  (!iguais_cmp)?printf("Strings iguais.\n"):printf("Strings diferentes.\n");

  //versao sem utilizar strcmp
  
  
}