#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");

  // Carta 1
  char estado1;
  char codigo1[10];
  char cidade1[20];
  int populacao1, pontos_turisticos1;
  float area1, pib1;

  printf("OBS: use ',' ao invés de '.' nas casas decimais!\n");
  printf("Digite as informações da primeira carta:\n");
  printf("Digite o estado da carta (A - H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (Estado da carta + número de 01 - 04): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite os pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos1);

  // Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[20];
  int populacao2, pontos_turisticos2;
  float area2, pib2;

  printf("\nDigite as informações da segunda carta:\n");
  printf("Digite o estado da carta (A - H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (Estado da carta + número de 01 - 04): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite os pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos2);

  // Exibe as informações
  printf("\n\nCARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

  printf("\nCARTA 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}
