#include <stdio.h>

float conversao_real_dolar(float cotacao_atual, float valor_reais) {
  // 5 reais -> 1dolar
  return valor_reais / cotacao_atual;
}

int main(){
  float cotacao_usuario, moeda_usuario; 

  printf("Insira a cotação atual do dólar: ");
  scanf("%f", &cotacao_usuario);

  printf("Insira a quantia em reais que você deseja converter: ");
  scanf("%f", &moeda_usuario);

  printf("Com R$%.2f reais, você obtém US$%.2f dólares.\n", moeda_usuario, conversao_real_dolar(cotacao_usuario, moeda_usuario));
  
  return 0;
}