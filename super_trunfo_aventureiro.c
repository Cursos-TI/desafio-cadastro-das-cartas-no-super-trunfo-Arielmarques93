#include <stdio.h>

int main() {
    // Carta 1 - Curitiba
    char codigo1[] = "CT01";
    int populacao1 = 1773718;
    float area1 = 435.277;
    float pib1 = 87151.95; // em milhões
    int pontosTuristicos1 = 30;

    // Carta 2 - Recife
    char codigo2[] = "RC02";
    int populacao2 = 1488920;
    float area2 = 218.843;
    float pib2 = 54691.00; // em milhões
    int pontosTuristicos2 = 35;

    // Cálculos automáticos
    float densidade1 = populacao1 / area1;
    float ppc1 = (pib1 * 1000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float ppc2 = (pib2 * 1000000) / populacao2;

    // Saída dos dados
    printf("\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nCarta 1 - Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", ppc1);

    printf("\nCarta 2 - Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", ppc2);

    return 0;
}
