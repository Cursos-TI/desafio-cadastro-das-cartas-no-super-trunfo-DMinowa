#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado;
    int numero_cidade;
    float populacao, area, pib, densidade_populacional, pib_per_capita;
    int pontos_turisticos;

    printf("Desafio Super Trunfo - Países - Nível Aventureiro\n");

    // Loop para cadastrar cidades de todos os estados
    for (estado = 'A'; estado <= 'H'; estado++) {
        for (numero_cidade = 1; numero_cidade <= 4; numero_cidade++) {
            printf("\nCadastro da Cidade %c%d:\n", estado, numero_cidade);

            // Entrada de dados
            printf("População (em milhões): ");
            scanf("%f", &populacao);

            printf("Área (em km²): ");
            scanf("%f", &area);

            printf("PIB (em bilhões): ");
            scanf("%f", &pib);

            printf("Número de Pontos Turísticos: ");
            scanf("%d", &pontos_turisticos);

            // Cálculo das propriedades adicionais
            densidade_populacional = populacao * 1e6 / area; // Convertendo milhões para unidade padrão
            pib_per_capita = pib * 1e9 / (populacao * 1e6);  // Convertendo bilhões para unidade padrão

            // Exibição dos dados cadastrados e calculados
            printf("\nDados da Cidade %c%d:\n", estado, numero_cidade);
            printf("População: %.2f milhões\n", populacao);
            printf("Área: %.2f km²\n", area);
            printf("PIB: %.2f bilhões\n", pib);
            printf("Pontos Turísticos: %d\n", pontos_turisticos);
            printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
            printf("PIB per Capita: %.2f reais/habitante\n", pib_per_capita);
        }
    }

    return 0;
}
