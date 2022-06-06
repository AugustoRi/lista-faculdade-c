/*
1. Escreva um programa que receba dois valores por linha de execução e realize a soma ou multiplicação, conforme um código de operação também recebido por linha de execução.

generalizar depois
*/

#include <stdio.h>
#include <stdlib.h>

int realizar_operacao(unsigned int, int *, int *);

int main(int argc, char **argv) {
  int a, b, *pa, *pb;
  unsigned int oper;

  if (argc!=4){
    printf("Uso: \n%s primeiroValor segundoValor TECLE: [1] PARA SOMA. [2] PARA MULTIPLICAÇÃO.\n",argv[0]);
    exit(1);
  }
  pa = &a;
  pb = &b;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  oper = (unsigned int)atoi(argv[3]);

  puts("TECLE: [1] PARA SOMA. [2] PARA MULTIPLICAÇÃO.");

  if (oper && oper < 3) {
    printf("resultado: %d\n", realizar_operacao(oper, pa, pb));
  }
  else {
    puts("NÚMERO DE OPERAÇÃO INVÁLIDO.\n");
    exit(1);
  }

  return 0;
}

int realizar_operacao(unsigned int operacao, int *p1, int *p2) {
  int resultado;

  switch(operacao) {
    case 1:
      puts("soma selecionada");
      resultado = *p1 + *p2;
      printf("%d + %d = %d\n", *p1, *p2, resultado);
      break;
    case 2:
      puts("multiplicação selecionada");
      resultado = *p1 * *p2;
      printf("%d x %d = %d\n", *p1, *p2, resultado);
      break;
    default: 
      printf("nenhuma opção selecionada\n");
      break;
  }

  return resultado;
}
