#include <stdio.h>

int main() {
  
    // Carta 1 - Curitiba
    char codigo1[] = "CT01";
    int populacao1 = 1773718;
    float area1 = 435.277;
    float pib1 = 87151.95; // em milhões (R$ 87,151,950,000)
    int pontosTuristicos1 = 30;

    // Carta 2 - Recife
    char codigo2[] = "RC02";
    int populacao2 = 1488920;
    float area2 = 218.843;
    float pib2 = 54691.00; // em milhões (R$ 54,691,000,000)
    int pontosTuristicos2 = 35;

 
    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

  
    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

     // Exibição dos dados das cartas
    printf("\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nCarta 1 - Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
