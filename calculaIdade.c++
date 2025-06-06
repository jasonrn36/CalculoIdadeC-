#include <stdio.h>
#include <iostream>

int main() {
  // Declarar as variáveis para armazenar os números e o resultado
  int anoNascimento, anoAtual, resultado;

  // Solicitar ao usuário que insira o primeiro número
  printf("Insira o ano atual: ");
  // Ler o primeiro número inserido pelo usuário
  scanf("%d", &anoAtual);

  // Solicitar ao usuário que insira o segundo número
  printf("Insira o ano do seu nascimento: ");
  // Ler o segundo número inserido pelo usuário
  scanf("%d", &anoNascimento);

  // Calcular a diferença
  resultado = anoAtual - anoNascimento;

  // Exibir o resultado
  printf("Voce tem: %d", resultado);
  printf(" de idade");

  return 0; // Indicar que o programa foi executado com sucesso
}