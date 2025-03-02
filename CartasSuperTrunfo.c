#include <stdio.h>

int main() {
    //Declaração das Variaveis
    char estado1[30], estado2[30]; 
    char nome_da_cidade1[30], nome_da_cidade2[30];
    int populacao1, populacao2; 
    int n_pontos_turisticos1, n_pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, pib_per_capita1;
    float densidade_populacional2, pib_per_capita2;
    float resultado1, resultado2;

    //Inicio do jogo - aqui o programa irá pedir os valores
    printf("\nBEM VINDO AO SUPER TRUNFO PAÍSES!\n");
    printf("\n---------------------------------");

    printf("\nDigite uma opção de A a H que irá representar um Estado da CARTA 01:");
    scanf("%s", estado1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade1);
    
    printf("Digite a população total:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &n_pontos_turisticos1);
    //calculo da densidade populacional e dp PIB per Capita
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\nDigite uma opção de A a H que irá representar um Estado da CARTA 02:");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população total:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &n_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n");
    printf("\n---------------------------------\n");
    printf("CARTA 01\n");
    printf("Estado: %s", estado1);
    printf("\nCódigo da carta: %s01", estado1);
    printf("\nNome da Cidade: %s", nome_da_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea(em km²): %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos Turisticos: %d", n_pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);
    printf("\nPIB per Capita: %.2f reais", pib_per_capita1);

    printf("\n");
    printf("\n---------------------------------\n");
    printf("CARTA 02\n");
    printf("Estado: %s", estado2);
    printf("\nCódigo da carta: %s02", estado2);
    printf("\nNome da Cidade: %s", nome_da_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea(em km²): %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos Turisticos: %d", n_pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f reais\n", pib_per_capita2);

    //calculo do inverso da densidade populacional
    float inverso_densidade1 = (densidade_populacional1 == 0) ? 1.0f : 1.0f / densidade_populacional1;
    float inverso_densidade2 = (densidade_populacional2 == 0) ? 1.0f : 1.0f / densidade_populacional2;
    //soma de todos os atributos das cartas 1 e 2
    resultado1 = (populacao1 + area1 + pib1 + n_pontos_turisticos1 + pib_per_capita1 + inverso_densidade1);
    resultado2 = (populacao2 + area2 + pib2 + n_pontos_turisticos2 + pib_per_capita2 + inverso_densidade2);
    //vai imprimir o valor da soma de todos os astribuos das cartas 1 e 2
    printf("Soma dos atrubutos da Carta 01: %f: \n", resultado1);
    printf("\nSoma dos atributos da Carta 02: %f", resultado2);


      // Comparação dos atributos e exibição dos resultados
    
    // Comparação de População
    printf("\nComparação de Cartas:\n");
    printf("\nPopulação: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    
    // Comparação de Área
    printf("\nÁrea: Carta 1 venceu (%d)\n", area1 > area2);
    
    // Comparação de PIB
    printf("\nPIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    
    // Comparação de Pontos Turísticos
    printf("\nPontos Turísticos: Carta 1 venceu (%d)\n", n_pontos_turisticos1 > n_pontos_turisticos2);
    
    // Comparação de Densidade Populacional (menor densidade é melhor)
    printf("\nDensidade Populacional: Carta 1 venceu (%d)\n", inverso_densidade1 > inverso_densidade2);
     
    // Comparação de PIB per Capita
    printf("\nPIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    


    return 0;
}
