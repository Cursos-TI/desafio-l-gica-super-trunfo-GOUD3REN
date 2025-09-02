#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome_estado_A[50], nome_estado_B[50];
    int populacao_A, populacao_B;
    int pontos_turisticos_A, pontos_turisticos_B;
    float area_A, area_B;
    float pib_A, pib_B;
    int opcao1, opcao2;
    float valor1A, valor1B, valor2A, valor2B;
    char *nomeAtributo1, *nomeAtributo2;

    // Entrada de dados para a carta A
    printf("Digite o nome do estado da carta A: ");
    scanf("%49s", nome_estado_A);

    printf("Digite a populacao do estado da carta A: ");
    scanf("%d", &populacao_A);

    printf("Digite a area do estado da carta A: ");
    scanf("%f", &area_A);

    printf("Digite o PIB do estado da carta A: ");
    scanf("%f", &pib_A);

    printf("Digite o numero de pontos turistico do estado A: ");
    scanf("%d", &pontos_turisticos_A);

    // Entrada de dados para a carta B
    printf("\nDigite o nome do estado da carta B: ");
    scanf("%49s", nome_estado_B);

    printf("Digite a populacao do estado da carta B: ");
    scanf("%d", &populacao_B);

    printf("Digite a area do estado da carta B: ");
    scanf("%f", &area_B);

    printf("Digite o PIB do estado da carta B: ");
    scanf("%f", &pib_B);

    printf("Digite o numero de pontos turistico do estado B: ");
    scanf("%d", &pontos_turisticos_B);

    // Cálculos para ambas as cartas
    float densidade_A = populacao_A / area_A;
    float densidade_B = populacao_B / area_B;
    float pib_per_capita_A = pib_A / populacao_A;
    float pib_per_capita_B = pib_B / populacao_B;

    // Exibição dos dados
    printf("\n=== CARTA A ===\n");
    printf("Nome do estado: %s\n", nome_estado_A);
    printf("Populacao: %d\n", populacao_A);
    printf("Area: %.2f km²\n", area_A);
    printf("PIB: %.2f reais\n", pib_A);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_A);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_A);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_A);

    printf("\n=== CARTA B ===\n");
    printf("Nome do estado: %s\n", nome_estado_B);
    printf("Populacao: %d\n", populacao_B);
    printf("Area: %.2f km²\n", area_B);
    printf("PIB: %.2f reais\n", pib_B);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_B);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_B);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_B);

    // Menu para escolha do primeiro atributo
    printf("\n=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    printf("Digite o numero do primeiro atributo: ");
    scanf("%d", &opcao1);

    // Validação da primeira opção usando operador ternário
    opcao1 = (opcao1 < 1 || opcao1 > 6) ? 1 : opcao1;

    // Obter valores do primeiro atributo usando switch
    switch (opcao1) {
        case 1: valor1A = populacao_A; valor1B = populacao_B; nomeAtributo1 = "Populacao"; break;
        case 2: valor1A = area_A; valor1B = area_B; nomeAtributo1 = "Area"; break;
        case 3: valor1A = pib_A; valor1B = pib_B; nomeAtributo1 = "PIB"; break;
        case 4: valor1A = pontos_turisticos_A; valor1B = pontos_turisticos_B; nomeAtributo1 = "Pontos Turisticos"; break;
        case 5: valor1A = densidade_A; valor1B = densidade_B; nomeAtributo1 = "Densidade Demografica"; break;
        case 6: valor1A = pib_per_capita_A; valor1B = pib_per_capita_B; nomeAtributo1 = "PIB per capita"; break;
    }

    // Menu para escolha do segundo atributo
    printf("\n=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");
    // Exibir apenas opções não selecionadas
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    if (opcao1 != 6) printf("6 - PIB per capita\n");
    
    printf("Digite o numero do segundo atributo: ");
    scanf("%d", &opcao2);

    // Validação da segunda opção usando operador ternário
    opcao2 = (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) ? 
             (opcao1 == 1 ? 2 : 1) : opcao2;

    // Obter valores do segundo atributo usando switch
    switch (opcao2) {
        case 1: valor2A = populacao_A; valor2B = populacao_B; nomeAtributo2 = "Populacao"; break;
        case 2: valor2A = area_A; valor2B = area_B; nomeAtributo2 = "Area"; break;
        case 3: valor2A = pib_A; valor2B = pib_B; nomeAtributo2 = "PIB"; break;
        case 4: valor2A = pontos_turisticos_A; valor2B = pontos_turisticos_B; nomeAtributo2 = "Pontos Turisticos"; break;
        case 5: valor2A = densidade_A; valor2B = densidade_B; nomeAtributo2 = "Densidade Demografica"; break;
        case 6: valor2A = pib_per_capita_A; valor2B = pib_per_capita_B; nomeAtributo2 = "PIB per capita"; break;
    }

    // Comparação dos atributos usando operadores ternários
    printf("\n=== COMPARACAO DOS ATRIBUTOS ===\n");
    
    // Primeiro atributo
    printf("%s: %s %.2f x %s %.2f\n", nomeAtributo1, nome_estado_A, valor1A, nome_estado_B, valor1B);
    
    // Usando operador ternário para determinar o vencedor
    char *vencedor1 = (opcao1 == 5) ? 
                     ((valor1A < valor1B) ? nome_estado_A : 
                     (valor1B < valor1A) ? nome_estado_B : "Empate") :
                     ((valor1A > valor1B) ? nome_estado_A : 
                     (valor1B > valor1A) ? nome_estado_B : "Empate");
    
    printf("Vencedor: %s\n", vencedor1);

    // Segundo atributo
    printf("\n%s: %s %.2f x %s %.2f\n", nomeAtributo2, nome_estado_A, valor2A, nome_estado_B, valor2B);
    
    // Usando operador ternário para determinar o vencedor
    char *vencedor2 = (opcao2 == 5) ? 
                     ((valor2A < valor2B) ? nome_estado_A : 
                     (valor2B < valor2A) ? nome_estado_B : "Empate") :
                     ((valor2A > valor2B) ? nome_estado_A : 
                     (valor2B > valor2A) ? nome_estado_B : "Empate");
    
    printf("Vencedor: %s\n", vencedor2);

    // Soma dos atributos
    float somaA = valor1A + valor2A;
    float somaB = valor1B + valor2B;
    
    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", nome_estado_A, somaA);
    printf("%s: %.2f\n", nome_estado_B, somaB);
    
    // Usando operador ternário para determinar o vencedor final
    char *vencedorFinal = (somaA > somaB) ? nome_estado_A : 
                         (somaB > somaA) ? nome_estado_B : "Empate";
    
    printf("Vencedor final: %s\n", vencedorFinal);

    return 0;
}