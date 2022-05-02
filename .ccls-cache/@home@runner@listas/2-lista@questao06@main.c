#include <stdio.h>

/*
6. Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente
de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação
do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de
votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O codigo para
finalizar a urna (votação) é o usuário digitar algum número negativo.
*/

int main() {
  int numero_voto, confirmacao, total_votos = 0, sum_paulo = 0, sum_renata = 0, sum_branco = 0, sum_nulo = 0;
  float porcentagem_paulo = 0, porcentagem_renata = 0, porcentagem_branco = 0, porcentagem_nulo = 0;   

  
  puts("Relembre seus candidatos:");
  while(numero_voto >= 0) {
    puts("[5] - Paulo");
    puts("[7] - Renata");
    puts("[0] - Voto branco");
    puts("Qualquer número diferente - Nulo");
    puts("Pressione um número negativo p/ sair.");
    printf("insira o número do seu voto: ");
    scanf("%d", &numero_voto);

    if (!(numero_voto >= 0)) continue;

    printf("quer confirmar seu voto? [0] Não [1] Sim:\n");
    scanf("%d", &confirmacao);

    if (!confirmacao) continue;
    
    switch(numero_voto) {
      case 0:
        sum_branco += 1;
      case 5:
        sum_paulo += 1;
      case 7:
        sum_renata += 1;
      default:
        sum_nulo += 1;
    }
    total_votos++;
  }

  if (!total_votos) continue; 
  porcentagem_paulo = ((float)sum_paulo / total_votos) * 100;
  porcentagem_renata = ((float)sum_renata / total_votos) * 100;
  porcentagem_branco = ((float)sum_branco / total_votos) * 100; 
  porcentagem_nulo = ((float)sum_nulo / total_votos) * 100; 
  
  puts("Relatório da urna:");
  puts("==============");
  printf("Total de votos: %d\n", total_votos);
  printf("Votos em Paulo: %.2f\n", porcentagem_paulo);
  printf("Votos em Renata: %.2f\n", porcentagem_renata);
  printf("Votos em Branco: %.2f\n", porcentagem_branco);
  printf("Votos Nulos: %.2f\n", porcentagem_nulo);
  puts("==============");
  puts("O vencedor da eleição é:");
  (porcentagem_paulo > porcentagem_renata) ? printf("Renata com %.2f dos votos totais.\n", porcentagem_renata) : printf("Paulo com %.2f dos votos totais.\n", porcentagem_paulo);
  return 0;
}