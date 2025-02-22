#include <stdio.h>

int main() {
    //Esse espaço é reservado para declarar as váriaveis
    char estado1[30], estado2[30]; 
    char nome_da_cidade1[30], nome_da_cidade2[30];
    int populacao1, n_pontos_turisticos1; 
    int populacao2, n_pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;

    printf("\nBEM VINDO AO SUPER TRUNFO PAÍSES!\n");
    printf("\n---------------------------------");
//Aqui o programa irá começar a pedir os dados da primeira carta do jogo, ler e guardar.
    printf("\nDigite uma opção de A a H que irá representar um Estado da CARTA 01:"); //Digitar uma sigla de A a H que representa o Estado
    scanf("%s", &estado1); 

    printf("Digite o nome da Cidade: "); //O usuario deve digitar o nome da cidade
    scanf("%s", &nome_da_cidade1);
    
    printf("Digite a população total:"); // O usuario deve digitar a população total da cidade
    scanf("%d", &populacao1);

    printf("Digite a Área:"); // O ususario deve digitar a area em km²
    scanf("%f", &area1);

    printf("Digite o PIB: "); //O ususario deve digitar o PIB da cidade 
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turisticos: "); // O usuario deve digitar o numero de pontos turisticos
    scanf("%d", n_pontos_turisticos1);

//Aqui o programa irá começar a pedir os dados da segunda carta do jogo, ler e guardar.
    printf("\nDigite uma opção de A a H que irá representar um Estado da CARTA 02:");
    scanf("%s", &estado2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população total:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", n_pontos_turisticos2);

//Aqui o programa irá começar a pedir os dados da primeira carta do jogo, ler e guardar.
    printf("\n");
    printf("\n---------------------------------\n");
    printf("CARTA 01\n");
    printf("Estado: %s", estado1);
    printf("\nCódigo da carta: %s01", estado1);
    printf("\nNome da Cidade: %s", nome_da_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea(em km²): %f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos Turisticos: %d", n_pontos_turisticos1);

//Aqui o programa irá começar a pedir os dados da primeira carta do jogo, ler e guardar.
    printf("\n");
    printf("\n---------------------------------\n");
    printf("CARTA 02\n");
    printf("Estado: %s", estado2);
    printf("\nCódigo da carta: %s02", estado2);
    printf("\nNome da Cidade: %s", nome_da_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea(em km²): %f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos Turisticos: %d", n_pontos_turisticos2);


}
