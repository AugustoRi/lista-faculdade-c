//25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.

#include <stdio.h>

int main() {
  int segundos_usuario, minutos = 0, horas = 0;

  printf("insira: ");
  scanf("%d", &segundos_usuario);

  while (segundos_usuario >= 60) {
    minutos += 1;
    if (minutos == 60) {
      horas += 1;
      minutos = 0;
    }
    segundos_usuario -= 60;
  }
  
  printf("resultado: \nHoras: %d \nMinutos: %d \nSegundos: %d\n", horas, minutos, segundos_usuario);
  //printf("sobraram: %d\n", segundos_usuario);
}