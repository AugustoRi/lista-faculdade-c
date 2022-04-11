//23. Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.

#include <stdio.h>

int main() {
  int numero, numero_revertido = 0;
  
  printf("Digite o número para reverter: ");    
  scanf("%d", &numero);

  while (numero) {
    numero_revertido = numero_revertido * 10;
    
    numero_revertido = numero_revertido + numero%10;
    
    numero = numero/10;
  }

  printf("Ele invertido é: %d\n", numero_revertido);    
  return 0;
}