#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

typedef struct {
    char codigo[4];       // Código da cidade (ex.: A01, B02)
    int populacao;        // População da cidade
    float area;           // Área da cidade em km²
    float pib;            // PIB da cidade em milhões
    int pontosTuristicos; // Número de pontos turísticos
} Cidade;

void cadastrarCidades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    char estados[] = "ABCDEFGH"; // Identificadores dos estados (A até H)
    
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\n=== Cadastro da cidade %c%02d ===\n", estados[i], j + 1);
            
            // Gerar código da cidade
            sprintf(cidades[i][j].codigo, "%c%02d", estados[i], j + 1);

            // Coletar os dados da cidade
            printf("População: ");
            scanf("%d", &cidades[i][j].populacao);
            
            printf("Área (em km²): ");
            scanf("%f", &cidades[i][j].area);
            
            printf("PIB (em milhões): ");
            scanf("%f", &cidades[i][j].pib);
            
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontosTuristicos);
        }
    }
}

void exibirCidades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    printf("\n\n=== Dados das cidades cadastradas ===\n");
    
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            Cidade cidade = cidades[i][j];
            
            printf("\nCidade: %s\n", cidade.codigo);
            printf("População: %d\n", cidade.populacao);
            printf("Área: %.2f km²\n", cidade.area);
            printf("PIB: %.2f milhões\n", cidade.pib);
            printf("Pontos turísticos: %d\n", cidade.pontosTuristicos);
        }
    }
}

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];

    printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Países!\n");

    // Cadastro das cidades
    cadastrarCidades(cidades);

    // Exibição dos dados cadastrados
    exibirCidades(cidades);
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
