#include <stdio.h>

int main(){
    
    
    // Definindo as váriaveis da primeira carta
    int cidade_1;
    char codigo_1;
    char estado_1[11];
    float pib_1;
    float area_1;
    int pontos;
    unsigned long int populacao_1;
    
    // Definindo as váriaveis da segunda carta
    int cidade_2;
    char codigo_2;
    char estado_2[11];
    float pib_2;
    float area_2;
    int pontos_2;
    unsigned long int populacao_2;

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

    printf("Insira pontos turísticos: ");
    scanf("%d", &pontos);
    
    printf("Insira a população: ");
    scanf("%d", &populacao_1);

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

    printf("Insira pontos turísticos: ");
    scanf("%d", &pontos_2);
    
    printf("Insira a população: ");
    scanf("%d", &populacao_2);

    // Calcula a densidade populacional e o PIB per Capita
    float densidade_1 = populacao_1 / area_1;
    float pib_per_1 = pib_1 / populacao_1;
    float densidade_2 = populacao_2 / area_2;
    float pib_per_2 = pib_2 / populacao_2;

    // Imprime os dados da primeira carta
    printf("Carta: 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s%d \n", estado_1, cidade_1);
    printf("Cidade %d \n", cidade_1);
    printf("PIB: %f \n", pib_1);
    printf("Área: %f \n", area_1);
    printf("Pontos turísticos: %d \n", pontos);
    printf("População: %u \n", populacao_1);
    printf("Densidade populacional: %.2f \n", densidade_1);
    printf("PIB per capita: %.2f \n", pib_per_1);

    // Imprime os dados da segunda carta
    printf("Carta: 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código: %s%d \n", estado_2, cidade_2);
    printf("Cidade: %d \n", cidade_2);
    printf("PIB: %f \n", pib_2);
    printf("Área: %f \n", area_2);
    printf("Pontos turísticos: %d \n", pontos_2);
    printf("População: %u \n", populacao_2);
    printf("Densidade populacional: %.2f \n", densidade_2);
    printf("PIB per capita: %.2f \n", pib_per_2);

    // Calcula o superpoder das cartas
    float superpoder_1 = populacao_1 + area_1 + pontos + pib_1 + pib_per_1 + 1 / densidade_1;
    float superpoder_2 = populacao_2 + area_2 + pontos_2 + pib_2 + pib_per_2 + 1 / densidade_2;

    //Armazena os resultados de qual carta é maior
    int resultado_popu = populacao_1 > populacao_2;
    int resultado_area = area_1 > area_2;
    int resultado_pib = pib_1 > pib_2;
    int resultado_pontos = pontos > pontos_2;
    int resultado_densidade = 1 / densidade_1 > 1 / densidade_2;
    int resultado_pib_per = pib_per_1 > pib_per_2;
    int resultado_super = superpoder_1 > superpoder_2;

    //Imprime as cartas vencedoras
    printf("Cartas vencedoras: \n");
    printf("PIB: %d \n", resultado_pib);
    printf("Área: %d \n", resultado_area);
    printf("Pontos turísticos: %d \n", resultado_pontos);    
    printf("População: %d \n", resultado_popu);
    printf("Densidade populacional: %d \n", resultado_densidade);
    printf("PIB per capita: %d \n", resultado_pib_per);
    printf("Superpoder: %d \n", resultado_super);    


    
    return 0;

}
