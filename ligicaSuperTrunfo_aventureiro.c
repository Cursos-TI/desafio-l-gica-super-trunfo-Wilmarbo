#include <stdio.h>

int main() {

    // Desafio Super Trunfo Lógica Aventureiro
    char pais [50], pais2 [50];
    unsigned long int populacao, populacao2;
    float area, area2;    
    float pib, pib2;    
    int ponto, ponto2, opcao;
    float densidade1, densidade2;
    float percapita1, percapita2;
   
    // 1ª Carta
    printf("Carta 1! \n");    
    printf("Digite o nome de um país: \n");
    scanf("%s", &pais);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área km² do país: \n");
    scanf("%f", &area);
    printf("Digite o PIB do país: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto);

    // 2ª Carta
    printf("Preencha agora a segunda carta! \n");

    printf("CARTA 2! \n");
    
    printf("Digite o nome de um país: \n");
    scanf("%s", &pais2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área Km² do país: \n");
    scanf("%f", &area2);
    printf("Digite o PIB do país: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);    
    
    //Desidades
    densidade1 = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    percapita1 = (float) pib / populacao;
    percapita2 = (float) pib2 / populacao2;

     //Carta 1
     printf("Carta 1: \n");  
     printf("Nome do país: %s \n", pais);
     printf("População: %lu \n", populacao);
     printf("Área: %.2f Km² \n", area);
     printf("PIB: %.2f Bilhões de reais \n", pib);
     printf("Número de pontos turísticos: %d \n", ponto);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
     printf("PIB per Capita: %.2f reais \n", percapita1);
     printf("\n");

     //Carta 2
     printf("Carta 2: \n");  
     printf("Nome da Cidade: %s \n", pais2);
     printf("População: %lu \n", populacao2);
     printf("Área: %.2f Km² \n", area2);
     printf("PIB: %.2f Bilhões de reais \n", pib2);
     printf("Número de pontos turísticos: %d \n", ponto2);
     printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
     printf("PIB per Capita: %.2f reais \n", percapita2);
     printf("\n");

     //Menu de interação
     printf("Escolha um atributo para jogar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de pontos turísticos\n");
     printf("5 - Densidade demográfica\n");
     printf("Digite o número de uma opção acima:");
     scanf("%d",&opcao);

     printf("COMPARAÇÃO ENTRE CARTAS\n");
     printf("Carta 1:%s\n", pais);
     printf("Carta 2:%s\n", pais2);
     printf("\n");

    switch (opcao){
        case 1:
            printf("-Quesito: População-\n");
            printf("%s: %lu habitantes\n", pais, populacao);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            if(populacao > populacao2){
             printf("Vencedor é: %s\n", pais);
            }else if(populacao < populacao2){
             printf("Venceror é: %s\n", pais2);
            } else {
             printf("Empate\n");
            }
        break;
        case 2:
             printf("-Quesito: Área-\n");
             printf("%s: %.2f Km²\n", pais, area);
             printf("%s: %.2f Km²\n", pais2, area2);
            if(area > area2){
             printf("Vencedor é: %s\n", pais);
            } else if(area < area2){
             printf("Vencedor é: %s\n", pais2);
            } else {
             printf("Empate\n");
            }
        break;
        case 3:
             printf("-Quesito: Produto Interno Bruto-\n");
             printf("%s: R$ %.2f Bi\n", pais, pib);
             printf("%s: R$ %.2f Bi\n", pais2, pib2);
            if(pib > pib2){
             printf("Vencedor é: %s\n", pais);
            } else if(pib < pib2){
             printf("Vencedora é: %s\n", pais2);
            } else {
             printf("Empate\n");
            }
        break;
        case 4:
             printf("-Quesito: Pontos turísticos-\n");
             printf("%s: %d\n", pais, ponto);
             printf("%s: %d\n", pais2, ponto2);
            if (ponto > ponto2){
             printf("Vencedor é: %s\n", pais); 
            } else if (ponto > ponto2){
             printf("Vencedor é: %s\n", pais2);   
            } else {
             printf("Empate!\n");
            }
        break;   
        case 5:
             printf("-Quesito: Densidade-\n");
             printf("%s: %.2f hab/km²\n", pais, densidade1);
             printf("%s: %.2f hab/km²\n", pais2, densidade2);
            if (densidade2> densidade1){
             printf("Vencedor é: %s\n", pais); 
            } else if (densidade1> densidade2){
             printf("Vencedor é: %s\n", pais2);   
            } else {
             printf("Empate!\n");
            }
        break;
    default:
        printf("Opção inválida\n");
        }

    return 0;  
            
    
}