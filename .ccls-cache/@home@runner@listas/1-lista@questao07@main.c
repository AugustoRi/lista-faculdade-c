//7. Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.
#include <stdio.h>

int conversao_segundos(unsigned char horas, unsigned char minutos, unsigned char segundos) {
  return ((int)horas * 3600) + ((int)minutos * 60) + (int)segundos;
}

int main() {
  unsigned char horas_usuario, minutos_usuario, segundos_usuario;
  
  printf("Insira a quantidade de horas: ");
  scanf("%c", &horas_usuario);

  printf("Insira a quantidade de minutos: ");
  scanf(" %c", &minutos_usuario);

  printf("Insira a quantidade de segundos: ");
  scanf(" %c", &segundos_usuario);

  printf("Os seguintes dados foram fornecidos:\n");
  printf("Horas: %s \nMinutos: %s \nSegundos: %s\n", &horas_usuario, &minutos_usuario, &segundos_usuario);
  //printf("Para esses dados, temos que o total de segundos é de: \n%u\n", conversao_segundos(horas_usuario, minutos_usuario, segundos_usuario));
  return 0;
}