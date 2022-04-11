//26. Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano. (Utilize a função sqrt (numero), biblioteca math.h). 
//d = raiz((x2 − x1)² + (y2 − y1)²)

#include <math.h>
#include <stdio.h>

int main() {
  double distancia, expressao;
  int x1, x2, y1, y2, subtracao_x, subtracao_y;
  puts("Insira as primeiras coordenadas\n");
  printf("Insira o x1: ");
  scanf("%d", &x1);
  printf("Insira o y1: ");
  scanf("%d", &y1);

  puts("\nInsira as segundas coordenadas\n");
  printf("Insira o x2: ");
  scanf("%d", &x2);
  printf("Insira o y2: ");
  scanf("%d", &y2);

  expressao = pow((double)x2 - (double)x1, 2) + pow((double)y2 - (double)y1, 2);

  distancia = sqrt(expressao);

  printf("A distância é de: %.2lf\n", distancia);
}