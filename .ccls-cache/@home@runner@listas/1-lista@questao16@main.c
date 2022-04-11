//16. Desenvolva um programa que calcule o salário líquido de um professor. Para elaborar o programa,  ́e necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer o desconto e ter o valor do salário líquido. Obs.: o programa deve informar o salário bruto e salário líquido do professor.

#include <stdio.h>

//dias -> numero_horas_trabalhadas
//valor_pago_ao_dia -> valor_hora_aula
//desconto_imposto_de_renda -> desconto_inss
//gratificacao_funcionario -> gratificacao_professor
float porcentagem_inss(float salario){
  char desconto = 0;
  
  if (salario > 1212) {
    desconto = 8;
    if (salario >= 2427.35) {
      desconto = 9;
      if (salario >= 3641.03) {
        desconto = 12;
        if (salario >= 7087.22) {
          desconto = 14;
        }
      }
    }
    return desconto;
  }

  return (float)desconto;
}

float salario_bruto_professor(int horas_trabalhadas, float valor_hora_aula){
  float salario_bruto;
  
  salario_bruto = valor_hora_aula * horas_trabalhadas;
  return salario_bruto;
}

float salario_liquido_professor(float salario_bruto_recebido){
  float salario_liquido;
  int desconto_inss = 0;
  
  desconto_inss = porcentagem_inss(salario_bruto_recebido);

  if (desconto_inss != 0) {
    salario_liquido = salario_bruto_recebido - (salario_bruto_recebido * ((float)desconto_inss / 100));
  }
  else {
    salario_liquido = salario_bruto_recebido;
  }
  return salario_liquido;
}

int main() {
  float valor_hora_aula, salario_bruto, salario_liquido;
  int horas_aula_trabalhadas;

  puts("Fique ciente da taxa de porcentagem de desconto do INSS vigente:");
  puts("8% para quem ganha um salário mínimo (R$ 1.212)");
  puts("9% para quem ganha entre R$ 1.212,01 e R$ 2.427,35");
  puts("12% para quem ganha entre R$ 2.427,36 e R$ 3.641,03");
  puts("14% para quem ganha entre R$ 3.641,04 e R$ 7.087,22");

  puts("Agora, insira os dados pedidos:\n");

  printf("Insira o valor de sua hora aula: ");
  scanf("%f", &valor_hora_aula);
  
  printf("Insira quantos horas aula foram trabalhadas: ");
  scanf("%d", &horas_aula_trabalhadas);

  salario_bruto = salario_bruto_professor(horas_aula_trabalhadas, valor_hora_aula);

  salario_liquido = salario_liquido_professor(salario_bruto);
  
  printf("Seu salário bruto foi de: R$%.2f\n", salario_bruto);
  
  printf("Seu salário líquido foi de: R$%.2f\n", salario_liquido);
  
  return 0;
}