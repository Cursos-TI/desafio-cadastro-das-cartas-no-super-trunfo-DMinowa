#include <stdio.h>
int main() {
    printf("Desafio Super Trunfo\n");

    // Definição das variáveis
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