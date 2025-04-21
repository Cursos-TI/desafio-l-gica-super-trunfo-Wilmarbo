#include <stdio.h>

int main() {

    // Desafio Super Trunfo Iniciante
    char estado[50];
    char estado2[50];
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50]; 
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ponto;
    int ponto2;
    float densidade1;
    float densidade2;
    float percapita1;
    float percapita2;

    // 1ª Carta
    printf("Carta 1! \n");
    
    printf("Digite UF do estado: \n");
    scanf(" %s", &estado);  
    printf("Digite uma letra de um estado e um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto);

    // 2ª Carta
    printf("Preencha agora a segunda carta! \n");
    printf("CARTA 2! \n");

    printf("Digite a UF do estado: \n");
    scanf(" %s", &estado2); 
    printf("Digite uma letra de um estado e um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Resultados

    densidade1 = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    percapita1 = (float) pib / populacao;
    percapita2 = (float) pib2 / populacao2;

        printf("Carta 1 - %s (%s): %d \n", cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %d \n", cidade2, estado2, populacao2);    

    if (populacao > populacao2){
            printf("\nResultado: Carta 1 - %s (%s) venceu!\n", cidade, estado);
    } else {
        printf("\nResultado: Carta 2 - %s (%s) venceu!\n", cidade2, estado2);

    }
}