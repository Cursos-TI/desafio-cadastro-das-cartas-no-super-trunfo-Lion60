#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas + Aventureiro + Mestre
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf ("***Desafio das cartas - Novato, Aventureiro e Mestre*** \n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração Variáveis: 

    char codcidade [3];
    char nomecidade [20];
    int populacao = 0;
    float area = 0.0;
    int pib = 0;
    int pontosturisticos = 0;

    //Declaração novas variáveis modo Aventureiro:

    float densid = 0.0;
    float PIBcapita = 0.0;

   //Declaração novas variáveis modo mestre:

    char codcidade2 [3];
    char nomecidade2 [20];
    int populacao2 = 0;
    float area2 = 0.0;
    int pib2 = 0;
    int pontosturisticos2 = 0;
    float densid2 = 0.0;
    float PIBcapita2 = 0.0;
    float super1 = 0.0;
    float super2 = 0.0;


    // Entrada dados

   
    printf ("Digite o código da Cidade: \n");
    scanf ("%s" , &codcidade);
               
    
    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", &nomecidade);


    printf ("Digite a População: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%d", &pib);

    printf ("O número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos);

    // Entrada dados 2

     printf ("Digite o código da Cidade2: \n");
    scanf ("%s" , &codcidade2);
               
    
    printf ("Digite o nome da Cidade2: \n");
    scanf ("%s", &nomecidade2);


    printf ("Digite a População2: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área2: \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB2: \n");
    scanf ("%d", &pib2);

    printf ("O número de pontos turísticos2: \n");
    scanf ("%d", &pontosturisticos2);

    // Função Densidade Populacional e PIB per capita *** Aventureiro e Mestre***

    densid = populacao / area;
    PIBcapita = (float) pib / populacao; // Casting 

    densid2 = populacao2 / area2;
    PIBcapita2 = (float) pib2 / populacao2; // Casting 

    // Função SuperPoder 1 e 2

    super1 = (float) populacao + area + pib + pontosturisticos;
    super2 = (float) populacao2 + area2 + pib2 + pontosturisticos2;

    // Operador Lógico

    printf (" Saída = 1 é o vencedor do Super Poder \n");

    printf (" Cidade 1 > Cidade 2: %d\n", super1 > super2);
    printf (" Cidade 2 > Cidade 1: %d\n", super2 > super1);

    printf (" Saída = 1 é o vencedor da Densidade Populacional \n");

    printf (" Cidade 1 x Cidade 2: %d\n", densid < densid2);
    printf (" Cidade 2 x Cidade 1: %d\n", densid2 < densid);

     // Mostrando dados capturados1: 

    printf ("O código da Cidade é: %s\n", codcidade);

    printf ("O nome da Cidade é: %s\n", nomecidade);

    printf ("A população da Cidade é: %d\n", populacao);

    printf ("A área da Cidade é: %f\n", area);

    printf ("O PIB da Cidade é: %d\n", pib);

    printf ("O número de pontos turísticos da Cidade é: %d\n", pontosturisticos);

    printf("A densidade populacional é: %.2f \n ", densid);

    printf("O PIB per capita é: %.4f \n ", PIBcapita );

    // Mostrando dados capturados2: 

    printf ("O código da Cidade2 é: %s\n", codcidade2);

    printf ("O nome da Cidade2 é: %s\n", nomecidade2);

    printf ("A população da Cidade2 é: %d\n", populacao2);

    printf ("A área da Cidade2 é: %f\n", area2);

    printf ("O PIB da Cidade2 é: %d\n", pib2);

    printf ("O número de pontos turísticos da Cidade2 é: %d\n", pontosturisticos2);

    printf("A densidade populacional2 é: %.2f \n ", densid2);

    printf("O PIB per capita2 é: %.4f \n ", PIBcapita2 );
       
    return 0;
}
