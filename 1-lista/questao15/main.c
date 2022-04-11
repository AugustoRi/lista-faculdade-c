//15. Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de dias trabalhados pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele trabalhou até 10 dias não tem direito à gratificação, se ele trabalhou acima de 10 dias e até 20 dias tem direito à gratificação de 20%, se ele trabalhou acima de 20 dias tem direito à gratificação de 30%. Sempre são descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>
//dados teste: dias 12 -> salario liquido de 651,24

int gratificacao_funcionario(int dias){
  char gratificacao;
  
  if (dias > 10) {
    if (dias > 20) {
     gratificacao = 30;
    } 
    else {
      gratificacao = 20;
    }
    return gratificacao;
  }
  else {
    gratificacao = 0;
    return gratificacao;
  }

  return (int)gratificacao;
}

float salario_liquido_funcionario(int dias){
  float const valor_pago_ao_dia = 50.25;
  float const desconto_imposto_de_renda = 0.1;

  int gratificacao = 0;
  float salario_liquido, salario_parcial;

  gratificacao = gratificacao_funcionario(dias);

  salario_parcial = valor_pago_ao_dia * dias;
  salario_parcial -= salario_parcial * desconto_imposto_de_renda;

  if (gratificacao != 0) {
    salario_liquido = salario_parcial + (salario_parcial * ((float)gratificacao / 100));
  }
  else {
    salario_liquido = salario_parcial;
  }
  
  return salario_liquido;
}

int main() {
  int dias_trabalhados;

  printf("Insira quantos dias foram trabalhados: ");
  scanf("%d", &dias_trabalhados);

  printf("Seu salário líquido foi de: R$%.2f\n", salario_liquido_funcionario(dias_trabalhados));
  
  return 0;
}