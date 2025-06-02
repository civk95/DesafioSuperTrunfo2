#include <stdio.h>

int main()
{
    // FORAM ENVIADOS COMO TRABALHO SOMENTE ATÉ OS DESAFIOS NOVATO E AVENTUREIRO!

    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densi_populacional1;
    float pib_capita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densi_populacional2;
    float pib_capita2;

    // Variável do menu
    int opcao;

    // Solicitar dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até encontrar uma quebra de linha

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Solicitar dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // CARTA 1 - calculo de densidade populacional e pib per capita

    densi_populacional1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;

    // CARTA 2 - calculo de densidade populacional e pib per capita

    densi_populacional2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

    // Exibir informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densi_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    // Exibir informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densi_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    // MENU DE ESCOLHA
    printf("\n== MENU DE COMPARAÇÃO ENTRE CARTAS ==\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turírtiscos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha uma dos atributos para comparar: ");
    scanf("%d", &opcao);

    switch (opcao) // Seleciona a opção digitada e exibi a comparação de atributo
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População)\n");
        printf("CARTA 1 - %s: %d\n", cidade1, populacao1);
        printf("CARTA 2 - %s: %d\n", cidade2, populacao2);
        if (populacao1 == populacao2)
        {
            printf("Deu empate!");
        }
        else if (populacao1 > populacao2)
        {
            printf("CARTA 1 venceu!\n");
        }
        else
        {
            printf("CARTA 2 venceu!\n");
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área)\n");
        printf("CARTA 1 - %s: %.2f\n", cidade1, area1);
        printf("CARTA 2 - %s: %.2f\n", cidade2, area2);
        if (area1 == area2)
        {
            printf("Deu empate!");
        }
        else if (area1 > area2)
        {
            printf("CARTA 1 venceu!\n");
        }
        else
        {
            printf("CARTA 2 venceu!\n");
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB)\n");
        printf("CARTA 1 - %s: %.2f\n", cidade1, pib1);
        printf("CARTA 2 - %s: %.2f\n", cidade2, pib2);
        if (pib1 == pib2)
        {
            printf("Deu empate!");
        }
        else if (pib1 > pib2)
        {
            printf("CARTA 1 venceu!\n");
        }
        else
        {
            printf("CARTA 2 venceu!\n");
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos)\n");
        printf("CARTA 1 - %s: %d\n", cidade1, pontos_turisticos1);
        printf("CARTA 2 - %s: %d\n", cidade2, pontos_turisticos2);
        if (pontos_turisticos1 == pontos_turisticos2)
        {
            printf("Deu empate!");
        }
        else if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("CARTA 1 venceu!\n");
        }
        else
        {
            printf("CARTA 2 venceu!\n");
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade populacional)\n");
        printf("CARTA 1 - %s: %.2f\n", cidade1, densi_populacional1);
        printf("CARTA 2 - %s: %.2f\n", cidade2, densi_populacional2);
        if (densi_populacional1 == densi_populacional2)
        {
            printf("Deu empate!");
        }
        else if (densi_populacional1 < densi_populacional2)
        {
            printf("CARTA 1 venceu!\n");
        }
        else
        {
            printf("CARTA 2 venceu!\n");
        }
        break;
        default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}