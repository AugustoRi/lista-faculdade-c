/*
5. Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da fun ̧c ̃ao strcat() e outra sem.
*/

#include <stdio.h>
#include <string.h>

#define TAM 50

int main() {
  char str_cat1[TAM], str_cat2[TAM], str1[TAM], str2[TAM];
  int i = 0, j = 0;
  //usando strcat()
  printf("Digite primeira string: ");
  scanf(" %[^\n]", str_cat1);
  getchar();

  printf("Digite segunda string: ");
  scanf(" %[^\n]", str_cat2);
  getchar();
  i = (int)strlen(str_cat1);

  strcpy(str1, str_cat1);
  strcpy(str2, str_cat2);

  strcat(str_cat1, str_cat2);

  while(str2[j]!='\0'){
    str1[i+j] = str2[j];
    j++;
  }
  str1[i+j]='\0';


  printf("string usando strcat: %s\n", str_cat1);
  printf("nome completo sem usar strcat: %s\n", str1);
}