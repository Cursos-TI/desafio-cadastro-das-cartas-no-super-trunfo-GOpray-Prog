#include <stdio.h>
#include <string.h> // Para usar funções como strcspn(), remover a quebra de linha ao usar fgets().

    


// ---------------------------Variaveis Globais------------------------------------------------

//Variaveis de entrada
float area = 0.0, pib = 0.0, area1 = 0.0, pib1 = 0.0;
unsigned long int populacao = 0, populacao1 = 0;
char pais[30], sigla, pais1[30], sigla1;
int turistico1 = 0, turistico = 0, num_carta = 1, num_carta1 = 2, escolha_carta =0, ataque = 0;

//Variaveis de calculos
float pib_percapita = 0.0, densidade = 0.0, pib_percapita1 = 0.0, densidade1 = 0.0, superPoder = 0.0, superPoder1 = 0.0;

// Variaveis de resultados de comparaçao
int resul_turistico = 0, resul_densidade = 0, resul_pibpercapita = 0, resul_pop = 0, resul_pib = 0, resul_area = 0, result_superPoder = 0;





// Funçao densidade
float calculo_densidade(){

    densidade = (float) (populacao / area);
    densidade1 = (float) (populacao1 / area1);

}
//Funçao PIB per Capita
float calculo_PIBperCapita(){

    pib_percapita = (float) (pib / populacao);
    pib_percapita1 = (float) (pib1 / populacao1);

}

// Funçao comparativa que determina a carta vencedora feita com estrutura de decisao
int comparativos(){
  
          printf("ESCOLHA QUAL DAS OPCOES DE ATAQUE GOSTARIA DE USAR.\n");
          printf("ATAQUE POPULACAO: DIGITE 1\n");
          printf("ATAQUE AREA: DIGITE 2\n");
          printf("ATAQUE PIB: DIGITE 3\n");
          printf("ATAQUE TURISTICO: DIGITE 4\n");
          printf("ATAQUE DENSIDADE: DIGITE 5\n");
          printf("ATAQUE SUPER PODER: DIGITE 6\n");
          scanf("%d", &ataque);

          switch (ataque)
          {
          case 1:
                 if (populacao > populacao1)
                 {

                  printf("Carta:  %c%02d\n Venceu !!!", sigla, num_carta);
                  printf("Pais Vitorioso: %s\n", pais);
                  printf("ATAQUE UTILIZADO: SEU PODEROSO Nº DE HABITANTES\n");
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu\n", sigla, num_carta, populacao);
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu VITORIA\n", sigla1, num_carta1, populacao1);
                  
                 }else if (populacao < populacao1)
                 {
                  printf("Carta:  %c%02d\n Venceu !!!", sigla1, num_carta1);
                  printf("Pais Vitorioso: %s\n", pais1);
                  printf("ATAQUE UTILIZADO: SEU PODEROSO Nº DE HABITANTES\n");
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu\n", sigla, num_carta, populacao);
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu  VITORIA!\n", sigla1, num_carta1, populacao1);
                 }
                 
            break;
          
          default:
                
                printf("HOUVE UM EMPATE ENTRE %s e %s", pais, pais1);
                printf("ATAQUE UTILIZADO: SEU PODEROSO Nº DE HABITANTES\n");
                printf("VALOR DO DANO DA CARTA: %c%02d: %lu\n", sigla, num_carta, populacao);
                printf("VALOR DO DANO DA CARTA: %c%02d: %lu  VITORIA!\n", sigla1, num_carta1, populacao1);
            break;
          }



   // /* 
    if (populacao > populacao1)
     {
        resul_pop = 1;
     }else
     {
        resul_pop = 2;
     }
     
     if (area > area1)
     {
        resul_area = 1;
     }else
     {
        resul_area = 2;
     }

     if (pib > pib1)
     {
        resul_pib = 1;
     }else
     {
        resul_pib = 2;
     }

     if (turistico > turistico1)
     {
        resul_turistico = 1;
     }else
     {
        resul_turistico = 2;
     }

     if (densidade > densidade1)
     {
        resul_densidade = 1;
     }else
     {
        resul_densidade = 2;
     }

     if (pib_percapita > pib_percapita1)
     {
        resul_pibpercapita = 1;
     }else
     {
        resul_pibpercapita = 2;
     }

     if (superPoder > superPoder1)
     {
        result_superPoder= 1;
     }else
     {
        result_superPoder = 2;
     }
//*/
}

float super_poder(){

superPoder = (float) populacao + area + pib + turistico + pib_percapita + (1.0 / densidade);
superPoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pib_percapita1 + (1.0 / densidade1);
}

int main()
 {
    
    
        // Cabeçalho do programa
    printf("------------BEM VINDO AO JOGO SUPER TRUNFO--------------\n\n");
    printf("----------Digite as Informações da 1º Carta-------------\n\n");
    
        
    
        // Entrada de dados do usuário
        printf("Digite o Pais da 1º Carta: ");
        fgets(pais, 50, stdin);
        pais[strcspn(pais, "\n")] = 0; // Evita a quebra de linha da função fgets
    
        // A primeira letra do estado é a sigla da carta
        sigla = pais[0];
        printf("Código da carta: %c%02d\n", sigla, num_carta);
    
    
        // Entrada de dados numéricos
        printf("Número de Habitantes: ");
        scanf("%lu", &populacao);
    
        printf("Digite a área do Pais em m²: ");
        scanf("%f", &area);
    
        printf("Digite o PIB do Pais: ");
        scanf("%f", &pib);
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico);
        getchar(); // Limpar a quebra de linha deixada pelo scanf
        printf("\n");
    
    printf("-----------DIGITE AS INFORMAÇÕES DA 2º CARTA------------\n\n");
    
    
        // Entrada de dados do usuário
        printf("Digite o Pais da 2º Carta: ");
        fgets(pais1, 50, stdin);
        pais1[strcspn(pais1, "\n")] = 0; // Evita a quebra de linha da função fgets
        
        
    
        // A primeira letra do estado é a sigla
        sigla1 = pais1[0];
        printf("Código da 2º carta: %c%02d\n", sigla1, num_carta1);
        
        
    
        // Entrada de dados numéricos
        printf("Número de Habitantes: ");
        scanf("%lu", &populacao1);
        
    
        printf("Digite a área do Pais em m²: ");
        scanf("%f", &area1);
        
    
        printf("Digite o PIB do Pais: ");
        scanf("%f", &pib1);
        
    
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico1);
        printf("\n");
         

         // Chamando as funcoes de calculo do PIB per Capita, Densidade populacional, Comparativos e Super Poder.
         calculo_PIBperCapita();
         calculo_densidade();
         super_poder();

         printf("SUAS CARTAS FORAM SALVAS COM SUCESSO !\n\n");
         printf("AGORA ESCOLHA UMA DAS OPCOES PARA COMECAR O JOGO \n");
         printf("ESCOLHA SUA CARTA!\n");
         printf("DIGITE 1 PARA CARTA: %c%02d\n", sigla, num_carta);
         printf("DIGITE 2 PARA CARTA: %c%02d\n", sigla1, num_carta1);
         scanf("%d", &escolha_carta);

        switch (escolha_carta)
        {
        case 1:
         printf("EXCELENTE ESCOLHA! SUA CARTA: %d%c\n", num_carta, sigla);

         // Exibição da carta Nº 1
         printf("Carta:  %d\n", num_carta);
         printf("Estado: %s\n", pais);
         printf("Código da carta: %c%02d\n", sigla, num_carta);
         printf("População: %lu\n", populacao);
         printf("Área: %.2f Km²\n", area);
         printf("PIB: %.2f\n", pib);
         printf("Pontos Turísticos: %d\n", turistico);
         printf("Densidade Populaconal: %.2f  hab/km²\n", densidade);
         printf("PIB Per Capita: R$ %.2f  Reais\n", pib_percapita);
         printf("Super Poder: %.2f\n", superPoder);

         break;
        
         case 2:
         printf("EXCELENTE ESCOLHA! CARTA: %d%c\n\n", num_carta1, sigla1);
         
         // Exibição da Carta Nº 2
         printf("Carta:  %d\n", num_carta1);
         printf("Estado: %s\n", pais1);
         printf("Código da carta: %c%02d\n", sigla1, num_carta1);
         printf("População: %lu\n", populacao1);
         printf("Área: %.2f Km²\n", area1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turísticos: %d\n", turistico1);
         printf("Densidade Populaconal: %.2f  hab/km²\n", densidade1);
         printf("PIB Per Capita: R$ %.2f  Reais\n", pib_percapita1);
         printf("Super Poder: %.2f\n\n", superPoder1);

         break;

        default:

                  printf("OPCAO INVALIDA!\n");
                  printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
         break;
        }
         
         

        comparativos();
    
    
        
    
      // Separador
      printf("RESULTADO FINAL DA BATALHA................................\n\n");

        
        // Saida dos resultados comparativos
        printf("POPULACAO: CARTA %d VENCEU!\n", resul_pop);
        printf("AREA: CARTA %d VENCEU!\n", resul_area);
        printf("PIB: CARTA %d VENCEU!\n", resul_pib);
        printf("PONTOS TURISTICOS: CARTA %d VENCEU!\n", resul_turistico);
        printf("DENSIDADE: CARTA %d VENCEU!\n", resul_densidade);
        printf("PIB PER CAPITA: CARTA %d VENCEU!\n", resul_pibpercapita);
        printf("SUPER PODER: CARTA %d VENCEU!\n\n", result_superPoder);

    



    return 0;
}
