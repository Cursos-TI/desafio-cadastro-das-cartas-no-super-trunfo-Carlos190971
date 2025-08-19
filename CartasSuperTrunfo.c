#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    //Variáveis - Carta 01
    char codigo1[4];
    char estado1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Variáveis - carta 02
    char codigo2[4];
    char estado2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Inicialização 

    printf("Bem vindo ao: \n");
    printf("Jogo do Super Trunfo \n");
    printf("Insira os dados!\n");
    printf("\n");
   
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Dados da carta 1
    printf("Dados da 1° carta:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código(A01):  ");
    scanf("%s", codigo1);
    printf("Cidade:  ");
    scanf("%s", cidade1);
    printf("População:  ");
    scanf("%d", &populacao1);
    printf("Área:  ");
    scanf("%f", &area1);
    printf("PIB:  ");
    scanf("%f", &pib1);
    printf("Pontos: ");
    scanf("%d", &pontos1);
    printf("\n");
    
    //Dados da carta 02
    printf("Dados da 2° carta:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Carta 2(A0):  ");
    scanf("%s", codigo2);
    printf("Cidade:  ");
    scanf("%s", cidade2);
    printf("População:  ");
    scanf("%d", &populacao2);
    printf("Área:  ");
    scanf("%f", &area2);
    printf("PIB:  ");
    scanf("%f", &pib2);
    printf("Pontos: ");
    scanf("%d", &pontos2);
    printf("\n");


    //Exibição da carta 01
    printf("Carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);      
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("\n");
    
    //Exibição da carta 02
    printf("Carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);      
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

            

    return 0;
}
