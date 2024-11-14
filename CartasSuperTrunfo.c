#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Sistema de cadastro de cartas de cidades.

int main() {
    printf("Desafio Super Trunfo\n");
    
    // Definição das variáveis
    int codigo = 1;
    char nome[50] = "Fortaleza";
    float populacao = 2.43;
    float area = 3.13;
    float pib = 194.88;
    int pontosturisticos = 50;
 
    // Captura de dados do usuário
    printf("Código: ");
    scanf("%d", &codigo);
    printf("Nome: ");
    scanf("%s", nome);
    printf("População (mi): ");
    scanf("%f", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB (bi): ");
    scanf("%f", &pib);
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);
    
    // Exibição dos dados cadastrados
    printf("\nDados da Carta Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %.2f mi\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bi\n", pib);
    printf("Nº de Pontos Turísticos: %d\n", pontosturisticos);

    return 0;
}