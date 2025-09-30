 #include <stdio.h>
#include <string.h>

int main() {
   
    // Cadastro da Carta 1
   
    char estado1[3];
    char codigo1[5];
    char nome_cidade1[30];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2[3];
    char codigo2[5];
    char nome_cidade2[30];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // ---- Entrada dos dados da carta 1 ----
    printf("Digite o estado da Carta 1 : ");
    scanf("%s", estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // ---- Entrada dos dados da carta 2 ----
    printf("\nDigite o estado da Carta 2 : ");
    scanf("%s", estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    
    // Cálculos 
    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

   
    // Comparação de atributo das cartas com if-else
  
   
    printf("\nComparacao de cartas (Atributo: Densidade Populacional):\n\n");

    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome_cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome_cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (densidade2 < densidade1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
