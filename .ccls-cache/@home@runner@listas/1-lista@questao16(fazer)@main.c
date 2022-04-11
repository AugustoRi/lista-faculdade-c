//16. Desenvolva um programa que calcule o salário líquido de um professor. Para elaborar o programa,  ́e necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer o desconto e ter o valor do salário líquido. Obs.: o programa deve informar o salário bruto e salário líquido do professor.

#include <stdio.h>
//7,5% para quem ganha um salário mínimo (R$ 1.212)
//9% para quem ganha entre R$ 1.212,01 e R$ 2.427,35
//12% para quem ganha entre R$ 2.427,36 e R$ 3.641,03
//14% para quem ganha entre R$ 3.641,04 e R$ 7.087,22

//dias -> numero_horas_trabalhadas
//valor_pago_ao_dia -> valor_hora_aula
//desconto_imposto_de_renda -> desconto_inss
//gratificacao_funcionario -> gratificacao_professor
float desconto_inss(float salario){
  char desconto = 0;
  
  if (salario > 1212) {
    desconto = 7.5;
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

int main(){
  float salario_teste;

  printf("salario: ");
  scanf("%f", &salario_teste);

  printf("salario de: %f \ndesconto de: %f\n", salario_teste, desconto_inss(salario))
}