#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // 3 caracteres + '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Mensagem de boas-vindas
    printf("Bem-vindo ao cadastro de cartas do Super Trunfo de Países!\n");
    printf("Por favor, insira os dados das duas cartas.\n\n");
    
    // Leitura dos dados da primeira carta
    printf("=== Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até encontrar uma nova linha
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Leitura dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    
    // Comparação das cartas
    // Escolha do atributo para comparação (definido no código)
    char atributo_comparacao[] = "Densidade Populacional"; // Pode ser alterado para:
    // "População", "Área", "PIB", "Densidade Populacional" ou "PIB per capita"
    
    printf("\n=== Comparação de Cartas ===\n");
    printf("Atributo escolhido: %s\n\n", atributo_comparacao);
    
    // Lógica de comparação
    if (strcmp(atributo_comparacao, "População") == 0) {
        printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "Área") == 0) {
        printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
        
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "PIB") == 0) {
        printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
        
        // Para densidade, o menor valor vence
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "PIB per capita") == 0) {
        printf("Carta 1 - %s (%c): R$ %.2f\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%c): R$ %.2f\n", cidade2, estado2, pib_per_capita2);
        
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else {
        printf("Atributo de comparação inválido!\n");
    }
    
    return 0;
}