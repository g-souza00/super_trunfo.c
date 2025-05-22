#include <stdio.h>

int main() {
        
    // Definindo as váriaveis da primeira carta
    int cidade_1;
    char estado_1[11];
    float pib_1;
    float area_1;
    int pontos;
    
    // Definindo as váriaveis da segunda carta
    int cidade_2;
    char codigo_2;
    char estado_2[11];
    float pib_2;
    float area_2;
    int pontos_2;
    
    // Coletando dados da primeira carta
    printf("Insira os dados da Carta 1: \n");
    
    printf("Insira o estado de A a H: ");
    scanf("%s", &estado_1);

    printf("Insira o código da cidade de 1 a 4:");
    scanf("%d", &cidade_1);

    printf("Insira o pib: ");
    scanf("%f", &pib_1);

    printf("Insira a área: ");
    scanf("%f", &area_1);

    printf("Insira os pontos turísticos: ");
    scanf("%d", &pontos);

    // Coletando dados da segunda carta
    printf("Insira os dados da Carta 2: \n");

    printf("Insira o estado de A a H: ");
    scanf("%s", &estado_2);

    printf("Insira o código da cidade de 1 a 4:");
    scanf("%d", &cidade_2);

    printf("Insira o pib: ");
    scanf("%f", &pib_2);

    printf("Insira a área: ");
    scanf("%f", &area_2);

    printf("Insira os pontos turísticos: ");
    scanf("%d", &pontos_2);

    // Imprime os dados da primeira carta
    printf("Carta: 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s%d \n", estado_1, cidade_1);
    printf("Cidade %d \n", cidade_1);
    printf("PIB: %f \n", pib_1);
    printf("Área: %f \n", area_1);
    printf("Pontos turísticos: %d \n", pontos);

    // Imprime os dados da segunda carta
    printf("Carta: 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código: %s%d \n", estado_2, cidade_2);
    printf("Cidade: %d \n", cidade_2);
    printf("PIB: %f \n", pib_2);
    printf("Área: %f \n", area_2);
    printf("Pontos turísticos: %d \n", pontos_2);
    
    return 0;
}
