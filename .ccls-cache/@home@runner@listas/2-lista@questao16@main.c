/*
Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.
*/

int main() {
  int numero_base = 3, sum = 0, sum_divisiveis_3 = 0, sum_divisiveis_5 = 0;

  for (int i = 0; i <= 200; i++) {
    
    if (i < 100) {
      numero_base = 5;
    }

    sum = (i % numero_base) ? sum : sum+i;
  }


  return 0;
}