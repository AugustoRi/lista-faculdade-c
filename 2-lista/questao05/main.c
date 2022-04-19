#include <stdio.h>
#include <stdlib.h>

//5. Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido. A condição de termino do programa é quando o usuário digitar zero.

int main() {
  int n, maior, menor;
  unsigned char primeiro_numero = 1;

  while (n != 0) {
    puts("==========");
    puts("digite 0 para encerrar o programa.");
    printf("Digite um valor n: ");
    scanf("%d", &n);

    if (primeiro_numero == 1) {
      maior = n;
      menor = n;
      primeiro_numero = 0;
    }

    if (n > 0) {
      maior = (n > maior) ? n : maior;
      menor = (n < menor) ? n : menor;
    }
  }
  printf("Maior número digitado: %d\n", maior);
  printf("Menor número digitado: %d\n", menor);
  puts("Programa encerrado.");
  return 0;
}