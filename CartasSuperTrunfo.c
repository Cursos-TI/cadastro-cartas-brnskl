#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
        
    // Variáveis da Carta 1

    char estado1; 
    char codigo1[5];
    char cidade1[50];
    int populaçao1;
    float area1;
    float pib1;
    int pontos1;

     // Variáveis da Carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontos2;

          

  // Área para entrada e saída de dados da Carta 1

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o estado (A a H)");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populaçao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos1);



  // Área para entrada e saída de dados da Carta 2

    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o estado (A a H)");
    scanf("%c", &estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populaçao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontos2);


  // Exibição da Carta 1


    printf("\n=== Dados da Carta 1 ===\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populaçao1);
    printf("PIB: %.2f trilhões de reais\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Ponto Turísticos: %d locais\n", pontos1);


   
  //Exicição da Carta 2


  printf("\n=== Dados da Carta 2 ===\n");

  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populaçao: %d habitantes\n", populaçao2);
  printf("PIB: %.2f trilhões de reais", pib2);
  printf("Área: %.2f km²\n", area2);
  printf("Pontos Turísticos: %d locais\n", pontos2);



  return 0;









} 
