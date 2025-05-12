#include <stdio.h>

int main() {
    int Carta1 = 1;
    char Estado1[3] = "A";
    char Codigo1[4] = "A01";
    char Nome_da_Cidade1[11] = "Pernambuco";
    float Populacao1 = 9539029.0;
    float Area1 = 98312.0;
    float PIB1 = 288.67;
    int Pontos_Turisticos1 = 406;

    printf("Carta: %d\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("Populacao: %.0f\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", Pontos_Turisticos1);

    int Carta2 = 2;
    char Estado2[3] = "B";
    char Codigo2[4] = "B02";
    char Nome_da_Cidade2[15] = "Rio de Janeiro";
    float Populacao2 = 17219679.0;
    float Area2 = 43750.0;
    float PIB2 = 1.15;  
    int Pontos_Turisticos2 = 120;

    printf("Carta: %d\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("Populacao: %.0f\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f trilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);

    return 0;
}
