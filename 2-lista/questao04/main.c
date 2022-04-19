#include <stdio.h>

/*
4. Implementar um programa para resolver o seguinte problema: José tem 150 centímetros e cresce 2 
centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos Pedro será maior que José?
*/

int main() {
  unsigned short int cm_jose = 150;
  unsigned short int aumento_cm_jose = 2;
  unsigned short int cm_pedro = 110;
  unsigned short int aumento_cm_pedro = 3;
  unsigned short int anos = 0;
  
  while (cm_jose >= cm_pedro) {
    cm_jose += aumento_cm_jose;
    cm_pedro += aumento_cm_pedro;
    anos += 1;
  }

  printf("Em %hu anos, Pedro será maior que José, onde terá %hu cm e José terá %hu cm.\n", anos, cm_pedro, cm_jose);
  return 0;
}