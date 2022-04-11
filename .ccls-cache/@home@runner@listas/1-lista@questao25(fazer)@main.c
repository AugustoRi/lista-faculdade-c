//25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.

#include <stdio.h>

int conversao_segundo_minuto(int segundos){
  char minutos = 0;

  if (! (segundos % 60) ){
    minutos += 1;
  }
  
  return (int)minutos;
}

int main() {
  int segundos_usuario;

  printf("insira: ");
  scanf("%d", &segundos_usuario);

  printf("resultado: %d", conversao_segundo_minuto(segundos_usuario));
}