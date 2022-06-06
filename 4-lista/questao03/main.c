/*
3. Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void menor_numero(int, int *);

int main() {
  int numero_usuario = 0, menor, primeira_interacao = 1;

  puts("ENTRE COM UM NÚMERO NEGATIVO PARA PARAR.");

  while (numero_usuario >= 0) {
    printf("Entre com um número: ");
    scanf("%d", &numero_usuario);
    
    if (numero_usuario < 0) {
      puts("Programa encerrado.");
      exit(1);
    }
    
    if (primeira_interacao) {
      menor = numero_usuario;
      primeira_interacao = 0;
    }
    puts("O menor número dentre os digitados é: ");
    menor_numero(numero_usuario, &menor);
    
  }
  
  return 0;
}

void menor_numero(int numero, int *p) {
  if (*p > numero) {
    *p = numero;
  }
  printf("%d\n", *p);
}