#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado_1; // Estado
    char codigo_1[4]; // Código da Carta (Estado + Número de 1 a 4)
    char cidade_1[80]; // Nome da Cidade
    int populacao_1; // População da Cidade
    float area_1; // Área da Cidade em Km²
    float pib_1; // PIB da Cidade
    int qtpt_1; // Quantidade de Pontos Turísticos da Cidade
    float dens_1; // Densidade Populacional (População / Área)
    float pipc_1; // PIB per Capita (PIB / População)
    float poder_1; // Superpoder da Carta
    
    // Segunda carta
    char estado_2; // Estado
    char codigo_2[4]; // Código da Carta (Estado + Número de 1 a 4)
    char cidade_2[80]; // Nome da Cidade
    int populacao_2; // População da Cidade
    float area_2; // Área da Cidade em Km²
    float pib_2; // PIB da Cidade
    int qtpt_2; // Quantidade de Pontos Turísticos da Cidade
    float dens_2; // Densidade Populacional (População / Área)
    float pipc_2; // PIB per Capita (PIB / População)
    float poder_2; // Superpoder da Carta

    int ganhador_populacao;
    int ganhador_area;
    int ganhador_pib;
    int ganhador_qtpt;
    int ganhador_dens;
    int ganhador_pipc;
    int ganhador_poder;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Obtendo os dados da primeira carta
    printf("=== Carta 1 ===\n\n");
    printf("Digite o Nome da Cidade (ate 79 caracteres): ");
    scanf("%s", cidade_1); // Nome da cidade

    printf("Digite o Estado (caractere de A-Z): ");
    scanf("%s", &estado_1); // Estado (char)
    
    // Código da carta
    codigo_1[0] = estado_1;
    codigo_1[1] = '0';
    printf("\nDigite o Numero do Codigo (digito de 1-9): ");
    scanf("%s", &codigo_1[2]);

    printf("Digite a Populacao da Cidade: ");
    scanf("%i", &populacao_1); // População da cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_1); // PIB da cidade
    printf("Digite a Quantidade de Pontos Turisticos da Cidade: ");
    scanf("%i", &qtpt_1); // Quantidade de pontos turísticos da cidade
    printf("Digite a Area da Cidade: ");
    scanf("%f", &area_1); // Área da cidade

    // Calculando a Densidade Populacional e o PIB per Capita
    // Aqui, populacao_1 é convertido implícitamente para float
    dens_1 = populacao_1 / area_1; // Densidade Populacional
    pipc_1 = pib_1 / populacao_1; // PIB per Capita

    // Calculando o superpoder
    poder_1 = (float) populacao_1 + area_1 + pib_1 + qtpt_1 + pipc_1;
    poder_1 += (1 / dens_1);

    // Limpar entrada de dados
    // Se tirar essas linhas, ele pula o próximo fgets
    scanf("%*[^\n]");
    scanf("%*c");

    // Obtendo os dados da segunda carta
    printf("\n=== Carta 2 ===\n\n");
    printf("Digite o Nome da Cidade (ate 79 caracteres): ");
    scanf("%s", cidade_2); // Nome da cidade

    printf("Digite o Estado (caractere de A-Z): ");
    scanf("%s", &estado_2); // Estado (char)
    
    // Código da carta
    codigo_2[0] = estado_2;
    codigo_2[1] = '0';
    printf("Digite o Numero do Codigo (digito de 1-9): ");
    scanf("%s", &codigo_2[2]);

    printf("Digite a Populacao da Cidade: ");
    scanf("%i", &populacao_2); // População da cidade
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_2); // PIB da cidade
    printf("Digite a Quantidade de Pontos Turisticos da Cidade: ");
    scanf("%i", &qtpt_2); // Quantidade de pontos turísticos da cidade
    printf("Digite a Area da Cidade: ");
    scanf("%f", &area_2); // Área da cidade

    // Calculando a Densidade Populacional e o PIB per Capita
    // Aqui, populacao_2 é convertido implícitamente para float
    dens_2 = populacao_2 / area_2; // Densidade Populacional
    pipc_2 = pib_2 / populacao_2; // PIB per Capita

    // Calculando o superpoder
    poder_2 = (float) populacao_2 + area_2 + pib_2 + qtpt_2 + pipc_2;
    poder_2 += (1 / dens_2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao_1 > populacao_2) {
        ganhador_populacao = 1;
    } else {
        ganhador_populacao = 2;
    }

    if (area_1 > area_2) {
        ganhador_area = 1;
    } else {
        ganhador_area = 2;
    }

    if (pib_1 > pib_2) {
        ganhador_pib = 1;
    } else {
        ganhador_pib = 2;
    }

    if (qtpt_1 > qtpt_2) {
        ganhador_qtpt = 1;
    } else {
        ganhador_qtpt = 2;
    }

    if (pipc_1 > pipc_2) {
        ganhador_pipc = 1;
    } else {
        ganhador_pipc = 2;
    }

    if (poder_1 > poder_2) {
        ganhador_poder = 1;
    } else {
        ganhador_poder = 2;
    }

    if (dens_1 < dens_2) {
        ganhador_dens = 1;
    } else {
        ganhador_dens = 2;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("A carta %i ganhou em população;\n", ganhador_populacao);
    printf("A carta %i ganhou em área;\n", ganhador_area);
    printf("A carta %i ganhou em pib;\n", ganhador_pib);
    printf("A carta %i ganhou em quantidade de pontos turísticos;\n", ganhador_qtpt);
    printf("A carta %i ganhou em pib per capita;\n", ganhador_pipc);
    printf("A carta %i ganhou em densidade populacional;\n", ganhador_dens);
    printf("A carta %i ganhou em superpoder;\n", ganhador_poder);

    return 0;
}
