#include <stdio.h>

/*
7. Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.
*/

void divisao(int n1, int n2);

int main() {
  int n1, n2;

  printf("insira o primeiro valor = ");
  scanf("%d", &n1);

  do {
    printf("insira o n2(diferente de 0): ");
    scanf("%d", &n2);
  }while (!n2);

  printf("O resultado da divisão é: ");
  divisao(n1, n2);
  
  return 0;
}

void divisao(int n1, int n2) {
  printf("%.2f", (float)n1 / n2);
  printf("\n");
}