//6. Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal através da seguinte fórmula: 
//para homens: 72.7 * altura - 58
//para mulheres: 62.1 * altura - 44.7
#include <stdio.h>
#include <string.h>

float peso_ideal(char sexo_usuario[1], float altura_usuario) {
  float resultado;
  
  if ( strcmp(sexo_usuario, "M") == 0 ) {
    resultado = 72.7 * altura_usuario - 58;
    return resultado;
  }  
  else if ( strcmp(sexo_usuario, "F") == 0 ) {
    resultado = 62.1 * altura_usuario - 44.7;
    return resultado;
  }

  return resultado;
}

int main() {
  float altura;
  char sexo[1];

  printf("Informe sua altura(em metros): ");
  scanf("%f", &altura);
  
  printf("Informe seu sexo [M] para masculino e [F] para feminino: ");
  scanf("%s", sexo);

  printf("Seu peso ideal é de: %g kg\n", peso_ideal(sexo, altura));

  return 0;
}