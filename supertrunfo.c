 #include <stdio.h>

int main() {
    //  Carta 1
    char estado1;
    char codigo1[4];
    char nome1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    //  Carta 2
    char estado2;
    char codigo2[4];
    char nome2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("Digite o Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf(" %s", nome1);

    printf("Digite a Populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Area da Carta 1 (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);


    densidade1 = populacao1 / area1; //  Calculo da Densidade Populacional da carta 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calculo do PIB per Capita da carta 1

    // Entrada de dados da Carta 2
    printf("\nDigite o Estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf(" %s", nome2);

    printf("Digite a Populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da Carta 2 (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    
    densidade2 = populacao2 / area2; //Calculo da Densidade Populacional da carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; //Calculo do PIB per Capita da carta 2

    // Saída formatada - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Saída formatada - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
