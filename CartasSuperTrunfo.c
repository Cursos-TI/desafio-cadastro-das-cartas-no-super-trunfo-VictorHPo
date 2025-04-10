#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Variaveis para armazenar dados da carta 1

    char estado1;
    char  codigoCarta1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Variaveis para armazenar dados da carta 2

    char estado2;
    char codigoCarta2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados para carta

    printf("Preencha os dados da carta 1:\n");
    printf("Estado:");
    scanf(" %c", &estado1);

    printf("Codigo da carta:");
    scanf("%s", &codigoCarta1);

    printf("Nome da Cidade:");
    scanf("%s", nomecidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área em Km²:");
    scanf("%f", &area1);

    printf("Pib:");
    scanf("%f", &pib1);

    printf("Numero de Pontos turisticos:");
    scanf("%d", &pontosturisticos1);

//Entrada de dados para carta 2

    printf("Preencha os dados da carta 2:\n");
    printf("Estado:");
    scanf(" %c", &estado2);

    printf("Codigo da carta 2:");
    scanf("%s", &codigoCarta2);

    printf("Nome da Cidade:");
    scanf("%s", nomecidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área em Km²:");
    scanf("%f", &area2);

    printf("Pib:");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos turisticos:");
    scanf("%d", &pontosturisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição dados da carta 1

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos1);

    //Exibição dados carta 2

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
