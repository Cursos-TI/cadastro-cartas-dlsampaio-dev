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
    float densidade_pop_01; // Desidade Populacional = População / Área Cidade
    float pib_percapta_01; // PIB / População
    float super_poder_01; // Soma de todos os atributos númerico.

  // Carta 02 Informação

    char estado_02 [50];
    char codigo_02 [20];
    char cidade_02 [50];
    int populacao_02;
    float area_02; // Área em km²
    float pib_02;
    int pontos_02; // Número de pontos turísticos
    float densidade_pop_02; // Desnsidade Populacional = População / Área Cidade
    float pib_percapta_02; // PIB / População
    float super_poder_02; // Soma de todos os atributos númericos.

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

   //*** Entrada e Saída Carta 02 ***

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

  // Área para exibição dos dados da cidade Carta 01
    
    printf("Carta 1: \n\n");
    printf("Estado: %s\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %d de habitantes\n", populacao_01);
    printf("Area: %.2f m2\n", area_01);
    printf("PIB: %.2f bilhoes de reais\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n", pontos_01);
    
  // Calculo da Densidade Populacional e PIB Percapta Carta 01
  
    densidade_pop_01 = populacao_01 / area_01; // Nivel Aventureiro
    pib_percapta_01 = pib_01 / populacao_01; // Nível Aventureiro
    printf("Desidade Populacional: %.2f reais\n", densidade_pop_01);
    printf("PIB per capita: %.2f reais\n", pib_percapta_01);
    
  // Calculo do Super Poder Carta 01
  
    super_poder_01 = (float) populacao_01 + area_01 + pib_01 + (float) pontos_01 + densidade_pop_01 + pib_percapta_01; 
    printf("Super Poder: %.2f", super_poder_01);
    
    printf("\n\n");

  // Área para exibição dos dados da cidade Carta 02

    printf("Carta 2: \n\n");
    printf("Estado: %s\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %d de habitantes\n", pontos_02);
    printf("Area: %.2f m2\n", area_02);
    printf("PIB: %.2f bilhoes de reais\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_02);

  // Calculo da Densidade Populacional e PIB Percapta Carta 02

    densidade_pop_02 = populacao_02 / area_02; // Nível Aventureiro
    pib_percapta_02 = pib_02 / populacao_02; // Nível Aventureiro
    printf("Densidade Populacional: %.2f reais\n", densidade_pop_02);
    printf("PIB per capita: %.2f reais\n", pib_percapta_02);

  // Calculo do Super Poder Carta 02

    super_poder_02 = (float) populacao_02 + area_02 + pib_02 + (float) pontos_02 + densidade_pop_02 + pib_percapta_02;
    printf("Super poder: %.2f\n", super_poder_02);

  printf("\n\n");

  // As informações numericas utilizadas são do material do Profº Sergio Cardoso

  // Estutura de decisão das Cartas

    //Populacao  
    if (populacao_01 > populacao_02)
    {
      printf("Populacao: Carta 1 Venceu\n");
    }
    else
    {
      printf("Carta 2 Venceu\n");
    }
    
    // Área
    if (area_01 > area_02)
    {
      printf("Area: Carta 1 Venceu\n");
    }
    else 
    {
      printf("Area: Carta 2 Venceu\n");
    }

    // PIB
    if (pib_01 > pib_02)
    {
      printf("PiB: Carta 1 Venceu\n");
    }
    else 
    {
      printf("PIB:  Carta 2 Venceu\n");
    }
    
    // Pontos Turisticos
    if (pontos_01 > pontos_02)
    {
      printf("Pontos Turisticos: Carta 1 Venceu\n");
    }
    else
    {
      printf("Pontos Turisticos: Carta 2 Venceu\n");
    }

    // Densidade Populacional
    if (densidade_pop_01 < densidade_pop_02)
    {
      printf("Densidade Populacional: Carta 1 Venceu\n");
    }
    else
    {
      printf("Densidade Populacional: Carta 2 Venceu\n");
    }

    // PiB Per Capita
    if (pib_percapta_01 > pib_percapta_02) 
    {
      printf("PIB per Capita: Carta 1 Venceu\n");
    }
    else
    {
      printf("PIB per Capita: Carta 2 Venceu\n");
    }

    // Super Poder
    if (super_poder_01 > super_poder_02)
    {
      printf("Super Poder: Carta 1 Venceu\n");
    }
    else
    {
      printf("Super Poder: Carta 2 Venceu\n");
    }
    
    printf("\n\n");

    printf("A direção é mais importante que a velocidade.\n");
    printf("Obrigado Profº Sergio Cardoso");

    return 0;

} 
