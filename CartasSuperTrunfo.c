#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int idade, matricula; // Posso fazer está declaração individual ou junta
    float altura;
    char nome[20];

// Solicitação da idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

// Solicitação da altura
    printf("Digite sua altura: ");
    scanf("%.2f", &altura);

// Solicitação do Nome
    printf("Digite seu nome: ");
    scanf("%s", &nome);

// Solicitação da matricula
    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

// Saída de dados solicitados
    printf("O aluno se chama: %s e sua matricula e de numero: %d \n", nome, matricula);
    printf("Sua idade e de: %d anos e tem altura de: %.2f metros");

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
