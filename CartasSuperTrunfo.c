#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das Variáveis
    char estado1[30], estado2[30]; 
    char nome_da_cidade1[30], nome_da_cidade2[30];
    int populacao1, populacao2; 
    int n_pontos_turisticos1, n_pontos_turisticos2;
    int opcao1, opcao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, pib_per_capita1;
    float densidade_populacional2, pib_per_capita2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma_carta1, soma_carta2;

    // Início do Jogo
    printf("\nBEM VINDO AO SUPER TRUNFO PAÍSES!\n");
    printf("\n---------------------------------\n");

    printf("\nDigite um Estado para a CARTA 01: ");
    scanf("%s", estado1);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade1);
    printf("Digite a população total: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos1);

    // Cálculo de Densidade Populacional e PIB per Capita
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\nDigite um Estado para a CARTA 02: ");
    scanf("%s", estado2);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade2);
    printf("Digite a população total: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição das Cartas
    printf("\n---------------------------------\n");
    printf("CARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n---------------------------------\n");
    printf("CARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Escolha dos Atributos para Comparação
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &opcao1);

    do {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
        scanf("%d", &opcao2);
    } while (opcao2 == opcao1);

    // Atribuição de valores
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = n_pontos_turisticos1; valor1_carta2 = n_pontos_turisticos2; break;
        case 5: valor1_carta1 = 1.0f / densidade_populacional1; valor1_carta2 = 1.0f / densidade_populacional2; break;
    }
    
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = n_pontos_turisticos1; valor2_carta2 = n_pontos_turisticos2; break;
        case 5: valor2_carta1 = 1.0f / densidade_populacional1; valor2_carta2 = 1.0f / densidade_populacional2; break;
    }

    // Cálculo da Soma
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    // Exibição dos Resultados
    printf("\nResultados da Comparação:\n");
    printf("%s: %.2f e %.2f (Soma: %.2f)\n", estado1, valor1_carta1, valor2_carta1, soma_carta1);
    printf("%s: %.2f e %.2f (Soma: %.2f)\n", estado2, valor1_carta2, valor2_carta2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("\nA carta %s venceu!\n", estado1);
    } else if (soma_carta2 > soma_carta1) {
        printf("\nA carta %s venceu!\n", estado2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
