/*
5. Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da fun ̧c ̃ao strcat() e outra sem.
*/

#include <stdio.h>
#include <string.h>

#define TAM 50

in main() {
  char str_cat1[TAM], str_cat2[TAM], str1, str2;
  //usando strcat()
  printf("Digite primeiro nome: ");
  scanf("%[^\n]", nome_completo);
  getchar();

  printf("Digite segundo nome: ");
  scanf("%[^\n]", segundo_nome);
  getchar();

  strcpy(str1, str_cat1);
  strcpy(str2, str_cat2);

  strcat(str_cat1, str_cat2);

  unsigned i = strlen(str_cat1);
  unsigned j = 0;
  while(str_cat1[j]!='\0'){
    str1[i+j] = str2[j];
    j++;
  }
  nome_completo[i+j]='\0';
}