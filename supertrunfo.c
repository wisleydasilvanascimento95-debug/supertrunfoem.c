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

   char estado;
   char código[5];
   char nome_da_cidade[20];
   int população;
   float área;
   float PIB;
   int pontos_turísticos;

   printf("digite o estado:");
   scanf(" %c", &estado);
   printf("estado: %c\n", estado");


   printf("digite o código:");
   scanf(" %s", código); 
   printf("código: %s\n", código);

   int c; 
   while((c = getchar()) != '\n' && c !=EOF);

   printf("digite a cidade:");
   fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin); // lê toda a frase incluindo espaços
  nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0'; // remover \n 


   printf("digite a populaçaão:");
   scanf(" %d", &população);
   printf("população: %d\n", população);


   printf("digite a área:");
   scanf("%f", &área);
   printf("população: %.2f\n", população);


   printf("digite o PIB:");
   scanf("%f", &PIB);
   printf("PIB: %.2f\n", PIB);


   printf(" pontos turisticos:");
   scanf("%d", &pontos_turisticos);
   printf("pontos_turisticos: %d\n", pontos_turisticos);











    



return 0;

}
