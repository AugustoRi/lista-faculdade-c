//1. Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir e mostre o valor de x depois que cada instrução for executada.
//• x = 7 + 3*6/2-l
//• x = 2%2 + 2*2-2/2;
//• x = (3 * 9 * (3 + (9*3/ (3) ) ) );

#include <stdio.h>

int primeiro_item(){
  return 7 + 3*6/2-1;
}

int segundo_item(){
  return 2%2 + 2*2-2/2;
}

int terceiro_item(){
  return (3 * 9 * (3 + (9*3/ (3) ) ) );
}

int main(){
  //primeiro item:
  //x = 7 + 18/2-1
  //x = 7 + 9 - 1
  //x = 16 - 1 .: x = 15.
  printf("Resposta primeiro item: %d\n", primeiro_item());

  //segundo item:
  //x = 0 + 2*2-2/2
  //x = 0 + 4-2/2
  //x = 0 + 4-1 -> x = 0 + 3 .: x = 3.
  printf("Resposta segundo item: %d\n", segundo_item());

  //terceiro item:
  //x = (3 * 9 * (3 + (9*3 / 3 ) ) )
  //x = (3 * 9 * (3 + (27 / 3 ) ) )
  //x = (3 * 9 * (3 + (9) ) )
  //x = (3 * 9 * (3 + 9) )
  //x = (3 * 9 * (12) )
  //x = (3 * 9 * 12)
  //x = (27 * 12) -> x = (324) .: x = 324.
  printf("Resposta terceiro item: %d\n", terceiro_item());
  return 0;
}