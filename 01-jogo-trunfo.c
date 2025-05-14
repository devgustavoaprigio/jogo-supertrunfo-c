
#include <stdio.h>

int main()
{
   
   //Franca
   // Cidade 1 - Franca
    char estado1[] = "SP";
    char codigo_carta1[] = "A01";
    char cidade1[] = "Franca";
    float populacao1 = 352.536;
    float area_km1 = 606.0;
    float pib1 = 11.3; // em bilhões
    int pontos_turisticos1 = 15;

    // Cidade 2 - Araraquara
    char estado2[] = "SP";
    char codigo_carta2[] = "A02";
    char cidade2[] = "Araraquara";
    float populacao2 = 242.228;
    float area_km2 = 1004.0;
    float pib2 = 11.95; // em bilhões
    int pontos_turisticos2 = 8;

    // Exemplo de impressão
    printf("Cidade: %s\nEstado: %s\nCodigo: %s\nPopulacao: %f\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n",
           cidade1, estado1, codigo_carta1, populacao1, area_km1, pib1, pontos_turisticos1);

    printf("Cidade: %s\nEstado: %s\nCodigo: %s\nPopulacao: %f\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           cidade2, estado2, codigo_carta2, populacao2, area_km2, pib2, pontos_turisticos2);

    return 0;
}