#include <stdio.h>

int main() {
    // Carta 1 - Curitiba
    char codigo1[] = "CT01";
    unsigned long int populacao1 = 1773718;
    float area1 = 435.277;
    float pib1 = 87151.95; // em milhões
    int pontosTuristicos1 = 30;
    
    // Carta 2 - Recife
    char codigo2[] = "RC02";
    unsigned long int populacao2 = 1488920;
    float area2 = 218.843;
    float pib2 = 54691.00; // em milhões
    int pontosTuristicos2 = 35;

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f milhões\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f milhões\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações (1 se Carta 1 vence, 0 se Carta 2 vence)
    printf("\n--- Comparações ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
