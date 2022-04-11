//22. Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes ao conjunto seguinte: ABC abc 0 12 $ * + / e o caractere espaço em branco.

#include <stdio.h>

int main() {
  int char_usuario;

  printf("Digite o caracter para representar em inteiro: ");
  char_usuario = getchar();

  printf("A resposta é: %d", char_usuario);
}