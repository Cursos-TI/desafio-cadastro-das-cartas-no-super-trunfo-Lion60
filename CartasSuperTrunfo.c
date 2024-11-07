#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf ("***Desafio das cartas - Novato e Aventureiro*** \n");
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

    // Função Densidade Populacional e PIB per capita *** Aventureiro***

    densid = populacao / area;
    PIBcapita = (float) pib / populacao; // Casting 

     // Mostrando dados capturados: 

    printf ("O código da Cidade é: %s\n", codcidade);

    printf ("O nome da Cidade é: %s\n", nomecidade);

    printf ("A população da Cidade é: %d\n", populacao);

    printf ("A área da Cidade é: %f\n", area);

    printf ("O PIB da Cidade é: %d\n", pib);

    printf ("O número de pontos turísticos da Cidade é: %d\n", pontosturisticos);

    printf("A densidade populacional é: %.2f \n ", densid);

    printf("O PIB per capita é: %.4f \n ", PIBcapita );
       
    return 0;
}
