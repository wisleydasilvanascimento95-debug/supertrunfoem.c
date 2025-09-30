 #include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[5];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Super Poder
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Comparações
    int pop_vencedor = populacao1 > populacao2;
    int area_vencedor = area1 > area2;
    int pib_vencedor = pib1 > pib2;
    int pontos_vencedor = pontos_turisticos1 > pontos_turisticos2;
    int densidade_vencedor = densidade1 < densidade2; // menor densidade vence
    int pibpc_vencedor = pib_per_capita1 > pib_per_capita2;
    int superpoder_vencedor = super_poder1 > super_poder2;

    // Exibição do resultado
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", pop_vencedor ? 1 : 2, pop_vencedor);
    printf("Area: Carta %d venceu (%d)\n", area_vencedor ? 1 : 2, area_vencedor);
    printf("PIB: Carta %d venceu (%d)\n", pib_vencedor ? 1 : 2, pib_vencedor);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontos_vencedor ? 1 : 2, pontos_vencedor);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_vencedor ? 1 : 2, densidade_vencedor);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpc_vencedor ? 1 : 2, pibpc_vencedor);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder_vencedor ? 1 : 2, superpoder_vencedor);

    return 0;
}
