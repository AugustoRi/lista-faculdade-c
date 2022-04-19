#include <stdio.h>

//2. Refaça o programa da Questão 1, utilizando a estrutura de repetição com teste no final.

int main(){
  char semana[7][8] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sábado"};

  int numero_usuario;

  do {
    puts("==========");
    puts("tecle de 1-7 para informar o dia da semana, sendo 1 domingo e 7 sábado.");
    puts("tecle 0 para sair do programa.");
    printf("digite seu número: ");
    scanf("%d", &numero_usuario);

    if (numero_usuario != 0) {
      (numero_usuario <= 8) ? printf("\t\tO dia informado é: %s\n", semana[numero_usuario - 1]) : printf("Número de dia inválido\n");
    }
    
  } while (numero_usuario != 0);
  puts("==========");
  printf("Programa encerrado.\n");
  return 0;
}