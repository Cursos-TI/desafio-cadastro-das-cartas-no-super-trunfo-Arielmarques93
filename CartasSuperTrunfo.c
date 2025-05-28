#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo!\n\n");

    // Dados da Carta 1
    char estado1[50] = "São Paulo";
    char codigocarta1[10] = "B01";
    char nomedacidade1[50] = "São Paulo-SP";
    int populacao1 = 12325000;
    int pontosturisticos1 = 50;
    float areaemkm21 = 1521.11;
    float PIB1 = 699.28;

    // Dados da Carta 2
    char estado2[50] = "Rio de Janeiro";
    char codigocarta2[10] = "B02";
    char nomedacidade2[50] = "Rio de Janeiro-RJ";
    int populacao2 = 6748000;
    int pontosturisticos2 = 30;
    float areaemkm22 = 1200.25;
    float PIB2 = 300.50;

    // Carta 1
    printf("Carta 1:\n");
    printf("Código: %s\n", codigocarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.3f km²\n", areaemkm21);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.3f km²\n", areaemkm22);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos2);

    return 0;
}
