/*
4. Faça um programa em C que leia duas strings do usuário e informe se elas
são iguais. Faça uma versão com o uso da função strcmp() e outra sem.
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

  //versao sem utilizar strcmp
  if (strlen(str1) == strlen(str2)) {
    for (int i = 0; i < strlen(str1) - 1; i++){
      if (str1[i] != str2[i]) {
        iguais = 0;
        break;
      }
      iguais = 1;
    }
  } 
  
  puts("=============");
  puts("Resultado usando strcmp()");
  (!iguais_cmp)?printf("Strings iguais.\n"):printf("Strings diferentes.\n");

  puts("Resultado sem usar strcmp()");
  (iguais)?printf("Strings iguais.\n"):printf("Strings diferentes.\n");
  puts("=============");

  return 0;
}