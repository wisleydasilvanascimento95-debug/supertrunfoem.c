#include <stdio.h>
#include <string.h> // necessário para strcspn

int main() {

   // carta:1

    char estado;
    char código[5]; // espaço para 4 caracteres + '\0'
    char nome_da_cidade[20]; // "_" usado para palavras com espaçamento
    int população;
    float área;
    float PIB;
    int pontos_turisticos;


    printf("digite um estado: \n");  // leitura do estado(uma letra)
    scanf(" %c", &estado); // lê um caractere  
    printf("estado: %c\n", estado);

    printf("digite o codigo da carta:");
    scanf("%s", código); 
    printf("codigo: %s\n", código); 

     // limpar buffer antes de usar fgets 
     // evita que o enter deixado pelo scanf seja lido pelo fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("digite o nome de cidade:");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin); // lê toda a frase incluindo espaços 
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0'; // remover \n
    printf("nome da cidade: %s\n", nome_da_cidade);

    printf("digite a população:");
    scanf(" %d", &população);
    printf("populaçao: %d\n", população); 

    printf("digite a area:");
    scanf("%f", &área); // %.2f mostra quantas casas decimais quero mostrar depois do ponto
    printf("área: %.2f\n", área); 

    printf("digite o PIB:");
    scanf("%f", &PIB); 
    printf("PIB: %.2f\n", PIB); // mostra duas casas decimais 

    printf("quantidade de pontos turisticos:");
    scanf("%d", &pontos_turisticos); 
    printf("pontos_turisticos: %d\n", pontos_turisticos);


   // carta:2

   char estado2;
   char codigo2[5];
   char nome_da_cidade2[25];
   int populaçao2;
   float area2;
   float PIB2;
   int pontos_turisticos2;

   printf("digite o estado:");
   scanf(" %c", &estado2);
   printf("estado: %c\n", estado2);


   printf("digite o codigo:");
   scanf(" %s", codigo2); 
   printf("codigo: %s\n", codigo2);

   // limpar buffer antes de usar o fgets

   int d;
   while ((d = getchar()) != '\n' && d != EOF);

   printf("digite a cidade:");
   fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin); // lê toda a frase incluindo espaços
   nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // remover \n 
   printf("nome da cidade: %s\n", nome_da_cidade); // mostra o nome da cidade digitada


   printf("digite a populaçao:");
   scanf(" %d", &populaçao2); // lê um número inteiro
   printf("populaçao: %d\n", populaçao2);


   printf("digite a area:");
   scanf("%f", &area2);
   printf("area: %.2f\n", area2);


   printf("digite o PIB:");
   scanf("%f", &PIB2); // ê um número decimal 
   printf("PIB: %.2f\n", PIB2);


   printf("digite os pontos turisticos:");
   scanf("%d", &pontos_turisticos2);
   printf("pontos_turisticos: %d\n", pontos_turisticos2);







return 0;

}
