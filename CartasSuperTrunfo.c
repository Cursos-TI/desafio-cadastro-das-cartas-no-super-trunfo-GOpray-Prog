#include <stdio.h>
#include <string.h> // Para usar funções como strcspn(), remover a quebra de linha ao usar fgets().
#include <time.h>   // Biblioteca necessária para o funcionamento do rand().
#include <stdlib.h> // Biblioteca necessária para o funcionamento do rand().
    
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
float area = 0.0, pib = 0.0, area1 = 0.0, pib1 = 0.0, pib_percapita = 0.0, densidade = 0.0, pib_percapita1 = 0.0, densidade1 = 0.0;
unsigned long int populacao = 0, populacao1 = 0;;




float calculo_densidade(){

    densidade = (float) (populacao / area);
    densidade1 = (float) (populacao1 / area1);

}

float calculo_PIBperCapita(){

pib_percapita = (float) (pib / populacao);
pib_percapita1 = (float) (pib1 / populacao1);

}

int main()
 {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    
    
        srand(time(NULL));
    
        // Definir valores mínimo e máximo para números randômicos
        int min = 1, max = 4;
        int num_carta = (rand() % (max - min + 1)) + min;
        int num_carta1 = (rand() % (max - min + 1)) + min;
    
    
        // Inicializar variáveis
        int turistico = 0;
        char cidade[30], estado[30], sigla;
    
        int turistico1 = 0, resul_pop = 0;
        char cidade1[30], estado1[30], sigla1;
    
    
    
        // Cabeçalho do programa
    printf("------------BEM VINDO AO JOGO SUPER TRUNFO--------------\n\n");
    printf("----------Digite as Informações da 1º Carta-------------\n\n");
    
        
    
        // Entrada de dados do usuário
        printf("Digite o Estado: ");
        fgets(estado, 50, stdin);
        estado[strcspn(estado, "\n")] = 0; // Evita a quebra de linha da função fgets
    
        // A primeira letra do estado é a sigla
        sigla = estado[0];
        printf("Código da carta: %c%02d\n", sigla, num_carta);
    
        // Entrada do nome da cidade
        printf("Digite o nome da Cidade: ");
        fgets(cidade, 50, stdin);
        cidade[strcspn(cidade, "\n")] = 0; // Evita a quebra de linha da função fgets
    
        // Entrada de dados numéricos
        printf("Número de Habitantes: ");
        scanf("%lu", &populacao);
    
        printf("Digite a área da Cidade em m²: ");
        scanf("%f", &area);
    
        printf("Digite o PIB da Cidade: ");
        scanf("%f", &pib);
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico);
        getchar(); // Limpar a quebra de linha deixada pelo scanf
    
    
    printf("-----------Digite as Informações da 2º Carta------------\n\n");
    
    
        // Entrada de dados do usuário
        printf("Digite o Estado: ");
        fgets(estado1, 50, stdin);
        estado1[strcspn(estado1, "\n")] = 0; // Evita a quebra de linha da função fgets
        
        
    
        // A primeira letra do estado é a sigla
        sigla1 = estado1[0];
        printf("Código da 2º carta: %c%02d\n", sigla1, num_carta1);
        
    
        // Entrada do nome da cidade
        printf("Digite o nome da Cidade: ");
        fgets(cidade1, 50, stdin);
        cidade1[strcspn(cidade1, "\n")] = 0; // Evita a quebra de linha da função fgets
        
    
        // Entrada de dados numéricos
        printf("Número de Habitantes: ");
        scanf("%lu", &populacao1);
        
    
        printf("Digite a área da Cidade em m²: ");
        scanf("%f", &area1);
        
    
        printf("Digite o PIB da Cidade: ");
        scanf("%f", &pib1);
        
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico1);
    
       
        calculo_PIBperCapita();
        calculo_densidade();

        resul_pop = populacao > populacao1;

      
        // Separador
    printf("SUAS CARTAS FORAM SALVAS COM SUCESSO !------------------\n\n");
        
      
        // Saída de resultados da 1º Carta
        printf("Carta:  %d\n", num_carta);
        printf("Estado: %s\n", estado);
        printf("Código da carta: %c%02d\n", sigla, num_carta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f Km²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", turistico);
        printf("Densidade Populaconal: %.2f  hab/km²\n", densidade);
        printf("PIB Per Capita: R$ %.2f  Reais\n", pib_percapita);

         
    
     // Separador
    printf("____________________________________________________________\n\n");
    
    
        // Saída de resultados da 2º Carta
        printf("Carta:  %d\n", num_carta1);
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %c%02d\n", sigla1, num_carta1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", turistico1);
        printf("Densidade Populaconal: %.2f  hab/km²\n", densidade1);
        printf("PIB Per Capita: R$ %.2f  Reais\n", pib_percapita1);
    
    



    return 0;
}
