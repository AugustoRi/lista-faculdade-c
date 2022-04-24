#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/*
Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.
*/

#define QTDEMAX 8

int main () {
  int x;
  srand(time(NULL));
  x = rand() % QTDEMAX;

  printf("8 ^ %d = ", x);

  printf("%.0lf\n", pow(3, (double)x));
  
  return 0;
}