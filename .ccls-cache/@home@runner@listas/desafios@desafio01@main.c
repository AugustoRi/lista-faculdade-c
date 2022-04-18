#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTDE_ARMARIOS 8

int bit_alto_nivel(int valor, int num_bit){
  int mascara_num_bit = (1 << num_bit);
  return ( valor & mascara_num_bit );
}  

int main() {
  unsigned char controle = 0, escolha = 0;
  int posicao;

  puts("Bem vindo ao programa para gerenciamento de armários!");
  puts("Fique atento as opções do menu abaixo:");
  
  while (escolha != '3') {
    printf("\n");
    puts("1. Ocupar armário");
    puts("2. Liberar armário");
    puts("3. Sair");
    printf("Entre com sua escolha: ");
    
    scanf(" %c", &escolha);
  
    switch(escolha){
      case '1':
        srand(time(NULL));
        controle |= (1<<rand() % QTDE_ARMARIOS);

        printf("\n===\n");
        puts("As posições ocupadas são:");
        for (int i = QTDE_ARMARIOS - 1; 0 <= i; i--) {
          if (bit_alto_nivel(controle, i)) printf("%d | ", i);
        }

        puts("\nAs posições desocupadas são:");
        for (int i = QTDE_ARMARIOS - 1; 0 <= i; i--) {
          if (!bit_alto_nivel(controle, i)) printf("%d | ", i);
        }
        printf("\n===");
        break;
      case '2':
        printf("Insira o armário que deseja desocupar: ");
        scanf("%d", &posicao);
        controle &= ~(1<<posicao);
        
        printf("\n===\n");
        puts("As posições ocupadas são:");
        for (int i = QTDE_ARMARIOS - 1; 0 <= i; i--) {
          if (bit_alto_nivel(controle, i)) printf("%d | ", i);
        }

        puts("\nAs posições desocupadas são:");
        for (int i = QTDE_ARMARIOS - 1; 0 <= i; i--) {
          if (!bit_alto_nivel(controle, i)) printf("%d | ", i);
        }
        printf("\n===");
        break;
      case '3':
        break;
      default:
        puts("Nenhuma opção selecionada. Tente novamente.\n");
        break;
    }
  }
  printf("Programa encerrado.\n");
  return 0;
}