#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Carta 01 Informação

    char estado_01 [50];
    char codigo_01 [20];
    char cidade_01 [50];
    int populacao_01;
    float area_01; // Área em km²
    float pib_01;
    int pontos_01; // Número de pontos turísticos

    // Carta 02 Informação

    char estado_02 [50];
    char codigo_02 [20];
    char cidade_02 [50];
    int populacao_02;
    float area_02; // Área em km²
    float pib_02;
    int pontos_02; // Número de pontos turísticos
    
  // Área para entrada de dados
    // *** Entrada e Saída Carta 01 ***

    printf("*** Carta 01 ***\n\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado_01);
    
    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo_01);
    
    printf("Digite a cidade: \n");
    scanf("%s", &cidade_01);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao_01);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area_01);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_01);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_01);

    printf("\n\n");

    //***Entrada Carta 02***//

    printf("*** Carta 2:*** \n\n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado_02);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo_02);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade_02);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao_02);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area_02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_02);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_02);

    printf("\n\n");  

  // Área para exibição dos dados da cidade
     printf("Carta 1: \n\n");
    printf("Estado: %s\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %d de habitantes\n", populacao_01);
    printf("Area: %.2f m2\n", area_01);
    printf("PIB: %.2f bilhoes de reais\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n", pontos_01);

    printf("\n\n");

    printf("Carta 2: \n\n");
    printf("Estado: %s\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %d de habitantes\n", pontos_02);
    printf("Area: %.2f m2\n", area_02);
    printf("PIB: %.2f bilhoes de reais\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_02);

return 0;
} 
