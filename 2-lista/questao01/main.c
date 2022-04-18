#include <stdio.h>

/*
1. Implemente um programa que tenha como entrada um número (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terça, quarta, quinta,
sexta, sábado). Se o número lido não estiver no intervalo 1-7, imprima: “Número de dia não válido”.
O programa deve permanecer executando até que o usuário tecle o numero 0. (Utilize obrigatoriamente teste no início).
*/

int main(){
  char semana[7][8] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sábado"};

  unsigned char numero_usuario;

  do {
    puts("tecle de 1-7 para informar o dia da semana, sendo 1 domingo e 7 sábado.");
    puts("tecle 0 para sair do programa.");
    printf("digite seu número: ");
    scanf(" %c", &numero_usuario);

    if (!numero_usuario) {continue;}

    (numero_usuario <= 8 ? printf("Número de dia inválido") : printf("O dia informado é: %s\n", semana[numero_usuario - 1]));
    
  } while(!numero_usuario);

  printf("Programa encerrado.\n");
  return 0;
}