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
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1; 

     // Variáveis da Carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;

          

  // Área para entrada e saída de dados da Carta 1

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%4s", codigo1);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos1);



  // Área para entrada e saída de dados da Carta 2

    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%4s", codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontos2);


    // ==========================
    //    CÁLCULO DA DENSIDADE
    // ==========================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;


  // Exibição da Carta 1


    printf("\n=== Dados da Carta 1 ===\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("PIB: %.2f trilhões de reais\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Ponto Turísticos: %d locais\n", pontos1);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade1);

   
  //Exibição da Carta 2


  printf("\n=== Dados da Carta 2 ===\n");

  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populaçao: %d habitantes\n", populacao2);
  printf("PIB: %.2f trilhões de reais\n", pib2);
  printf("Área: %.2f km²\n", area2);
  printf("Pontos Turísticos: %d locais\n", pontos2);
  printf("Densidade demográfica: %.2f habitantes/km²\n", densidade2);


  // =====================
  //    MENU INTERATIVO
  // =====================


  int opcao;

    printf("\n==============================\n");
    printf("     MENU DE COMPARAÇÃO\n");
    printf("==============================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("==============================\n");

    printf("Escolha um atributo: ");
    scanf("%d", &opcao);


    // =========================
    //          SWITCH
    // =========================


        switch (opcao) {

        case 1:

            printf("\n=== COMPARAÇÃO: POPULAÇÃO ===\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } 
            else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } 
            else {
                printf("Empate!\n");
            }

            break;


        case 2:

            printf("\n=== COMPARAÇÃO: ÁREA ===\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } 
            else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } 
            else {
                printf("Empate!\n");
            }

            break;


        case 3:

            printf("\n=== COMPARAÇÃO: PIB ===\n");
            printf("%s: %.2f trilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f trilhões de reais\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } 
            else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } 
            else {
                printf("Empate!\n");
            }

            break;


        case 4:

            printf("\n=== COMPARAÇÃO: PONTOS TURÍSTICOS ===\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } 
            else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", cidade2);
            } 
            else {
                printf("Empate!\n");
            }

            break;


        case 5:

            printf("\n=== COMPARAÇÃO: DENSIDADE DEMOGRÁFICA ===\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade2);

            // ATENÇÃO:
            // Aqui a regra é invertida.
            // A MENOR densidade vence.

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } 
            else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", cidade2);
            } 
            else {
                printf("Empate!\n");
            }

            break;


        default:

            printf("\nOpção inválida! Escolha uma opção de 1 a 5.\n");

            break;
    }








  

  return 0;

} 
