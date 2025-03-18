#include <stdio.h>
#include <string.h> // Para usar funções como strcspn(), remover a quebra de linha ao usar fgets().

    


// ---------------------------Variaveis Globais------------------------------------------------

//Variaveis de entrada
float area = 0.0, pib = 0.0, area1 = 0.0, pib1 = 0.0;
unsigned long int populacao = 0, populacao1 = 0;
char pais[30], sigla, pais1[30], sigla1;
int turistico1 = 0, turistico = 0, num_carta = 1, num_carta1 = 2, escolha_carta = 0, ataque = 0;

//Variaveis de calculos
float pib_percapita = 0.0, densidade = 0.0, pib_percapita1 = 0.0, densidade1 = 0.0, superPoder = 0.0, superPoder1 = 0.0;

// Variaveis de resultados de comparaçao
int resul_turistico = 0, resul_densidade = 0, resul_pibpercapita = 0, resul_pop = 0, resul_pib = 0, resul_area = 0, result_superPoder = 0;


// Funçao comparativa que determina a carta vencedora
void ataques(){
  
          printf("LEGAL!\n");
          printf("AGORA ESCOLHA QUAL DAS OPCOES DE ATAQUE GOSTARIA DE USAR.\n");
          printf("1) ATAQUE POPULACIONAL\n");
          printf("2) ATAQUE EM AREA\n");
          printf("3) ATAQUE DO PIB FANTASTICO\n");
          printf("4) ATAQUE DE PONTOS TURISTICO\n");
          printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
          printf("6) ATAQUE DE SUPER PODER\n");
          printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
          scanf("%d", &ataque);
          printf("\n\n");
          printf("-------------RESULTADO DO COMBATE-------------\n\n");

          switch (ataque)
          {

           case 1:
                 if (populacao > populacao1)
                 {
                  
                  printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                  printf("ATAQUE ESCOLHIDO: ATAQUE POPULACIONAL\n");
                  printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                  printf("PAIS VITORIOSO: %s\n", pais);
                  printf("VALOR DO DANO DA CARTA %c%02d: %lu\n", sigla, num_carta, populacao);
                  printf("VALOR DO DANO DA CARTA %c%02d: %lu DERROTADO!\n\n", sigla1, num_carta1, populacao1);

                  if (escolha_carta == num_carta)
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ VENCEU!\n");
                  }else
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ PERDEU!\n");
                  }
                  
                  
                 
                 }else if (populacao < populacao1)
                 {
                  printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                  printf("ATAQUE ESCOLHIDO: ATAQUE POPULACIONAL\n");
                  printf("PAIS VITORIOSO: %s\n", pais1);
                  printf("VALOR DO DANO DA CARTA %c%02d: %lu\n", sigla1, num_carta1, populacao1);
                  printf("VALOR DO DANO DA CARTA %c%02d: %lu DERROTADO!\n\n", sigla, num_carta, populacao);

                  
                  if (escolha_carta == num_carta1)
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ VENCEU!\n");
                  }else
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ PERDEU!\n");
                  }
                  
                 }else
                 {
                  
                  printf("ATAQUE ESCOLHIDO: ATAQUE POPULACIONAL\n");
                  printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu\n", sigla, num_carta, populacao);
                  printf("VALOR DO DANO DA CARTA: %c%02d: %lu\n", sigla1, num_carta1, populacao1);
                  
                 }
            break;
          
         
            case 2:
                 if (area > area1)
                 {
                  
                  printf("ATAQUE ESCOLHIDO: ATAQUE EM AREA POR Km²\n");
                  printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                  printf("PAIS VITORIOSO: %s\n", pais);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla, num_carta, area);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f DERROTADO!\n", sigla1, num_carta1, area1);

                  
                  if (escolha_carta == num_carta)
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ VENCEU!\n");
                  }else
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ PERDEU!\n");
                  }
                  
                 }else if (area < area1)
                 {
                  
                  printf("ATAQUE ESCOLHIDO: ATAQUE EM AREA POR Km²\n");
                  printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                  printf("PAIS VITORIOSO: %s\n", pais1);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, area1);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f DERROTADO\n", sigla, num_carta, area);

                  
                  if (escolha_carta == num_carta1)
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ VENCEU!\n");
                  }else
                  {
                     printf("FIM DE JOGO!\n");
                     printf("VOCÊ PERDEU!\n");
                  }
                  

                 }else
                 {
                 
                  printf("ATAQUE ESCOLHIDO: ATAQUE EM AREA POR Km²\n");
                  printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla, num_carta, area);
                  printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, area1);
                 
                 }
                 
            break;

            case 3:
                 if (pib > pib1)
                 {
                 
                 printf("ATAQUE ESCOLHIDO: ATAQUE DO PIB FANTASTICO\n");
                 printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                 printf("PAIS VITORIOSO: %s\n", pais);
                 printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla, num_carta, pib);
                 printf("VALOR DO DANO DA CARTA %c%02d: %.2f DERROTADO!\n", sigla1, num_carta1, pib1);

                 
                 if (escolha_carta == num_carta)
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ VENCEU!\n");
                 }else
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ PERDEU!\n");
                 }
                 
             
                }else if (pib < pib1)
                {
               
                printf("ATAQUE ESCOLHIDO: ATAQUE DO PIB FANTASTICO\n");
                printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                printf("PAIS VITORIOSO: %s\n", pais1);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, pib1);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f DERROTADO!\n", sigla, num_carta, pib);

                
                if (escolha_carta == num_carta1)
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ VENCEU!\n");
                }else
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ PERDEU!\n");
                }
              

               }else
               {
               
                printf("ATAQUE ESCOLHIDO: ATAQUE DO PIB FANTASTICO\n");
                printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla, num_carta, pib);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, pib1);
               
                

               }
            
           break;

           case 4:
                 if (turistico > turistico1)
                 {
                
                 printf("ATAQUE ESCOLHIDO: ATAQUE DE PONTOS TURISTICOS\n");
                 printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                 printf("PAIS VITORIOSO: %s\n", pais);
                 printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla, num_carta, turistico);
                 printf("VALOR DO DANO DA CARTA %c%02d: %d DERROTADO!\n", sigla1, num_carta1, turistico1);

                 
                 if (escolha_carta == num_carta)
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ VENCEU!\n");
                 }else
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ PERDEU!\n");
                 }
                 
             
                }else if (turistico < turistico1)
                {
                
                printf("ATAQUE ESCOLHIDO: ATAQUE DE PONTOS TURISTICOS\n");
                printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                printf("PAIS VITORIOSO: %s\n", pais1);             
                printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla1, num_carta1, turistico1);
                printf("VALOR DO DANO DA CARTA %c%02d: %d DERROTADO!\n", sigla, num_carta, turistico);

                
                if (escolha_carta == num_carta1)
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ VENCEU!\n");
                }else
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ PERDEU!\n");
                }
               
               }else
               {
               
                printf("ATAQUE ESCOLHIDO: ATAQUE DE PONTOS TURISTICOS\n");
                printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla, num_carta, turistico);
                printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla1, num_carta1, turistico1);
               
               }
            
           break;

           case 5:
                 if (densidade < densidade1)
                 {
                 
                 printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                 printf("PAIS VITORIOSO: %s\n", pais);
                 printf("ATAQUE UTILIZADO: SINGULARIDADE INVERSA DA DENSIDADE\n");
                 printf("VALOR DO DANO ETÉRIO DA CARTA %c%02d: %.2f\n", sigla, num_carta, densidade);
                 printf("VALOR DO DANO ÉTERIO DA CARTA %c%02d: %.2f DERROTADO!\n", sigla1, num_carta1, densidade1);

                 
                 if (escolha_carta == num_carta)
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ VENCEU!\n");
                 }else
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ PERDEU!\n");
                 }
                
             
                }else if (densidade > densidade1)
                {
                
                printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                printf("PAIS VITORIOSO: %s\n", pais1);
                printf("ATAQUE UTILIZADO: SINGULARIDADE INVERSA DA DENSIDADE\n");
                printf("VALOR DO DANO ETÉRIO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, densidade1);
                printf("VALOR DO DANO ETÉRIO DA CARTA %c%02d: %.2f DERROTADO!\n", sigla, num_carta, densidade);

                
                if (escolha_carta == num_carta1)
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ VENCEU!\n");
                }else
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ PERDEU!\n");
                }
               

               }else
               {
                printf("ATAQUES ESCOLHIDO: SINGULARIDADE INVERSA DA DENSIDADE\n");
                printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla, num_carta, densidade);
                printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, densidade1);
               
               }
            
           break;

           case 6:
                 if (superPoder > superPoder1)
                 {
                 
                 printf("A CARTA %c%02d VENCEU !!!\n", sigla, num_carta);
                 printf("PAIS VITORIOSO: %s\n", pais);
                 printf("ATAQUE UTILIZADO: SUPER PODER\n");
                 printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla, num_carta, superPoder);
                 printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f DERROTADO!\n", sigla1, num_carta1, superPoder1);

                 
                 if (escolha_carta == num_carta)
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ VENCEU!\n");
                 }else
                 {
                    printf("FIM DE JOGO!\n");
                    printf("VOCÊ PERDEU!\n");
                 }
                 
             
                }else if (superPoder < superPoder1)
                {
               
                printf("A CARTA %c%02d VENCEU !!!\n", sigla1, num_carta1);
                printf("PAIS VITORIOSO: %s\n", pais1);
                printf("ATAQUE UTILIZADO: SUPER PODER\n");
                printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, superPoder1);
                printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f DERROTADO!\n", sigla, num_carta, superPoder);

                
                if (escolha_carta == num_carta1)
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ VENCEU!\n");
                }else
                {
                   printf("FIM DE JOGO!\n");
                   printf("VOCÊ PERDEU!\n");
                }
               

               }else
               {
                printf("ATAQUES ESCOLHIDO: SUPER PODER\n");
                printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
                printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla, num_carta, superPoder);
                printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, superPoder1);
                
               }
            
           break;


          
            default:
                
                printf("OPCAO INVALIDA!\n");
                printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
                
            break;

         }
    
   }


   //Funçao para o Jogador escolher a sua carta dentre as duas cadastradas
void escolha(){

       printf("AGORA ESCOLHA UMA DAS OPCOES A SEGUIR PARA COMECAR O JOGO \n");
       printf("1) PARA CARTA: %c%02d %s\n", sigla, num_carta, pais);
       printf("2) PARA CARTA: %c%02d %s\n", sigla1, num_carta1, pais1);
       printf("DIGITE SUA ESCOLHA: ");
       scanf("%d", &escolha_carta);
       printf("\n\n");
      

  switch (escolha_carta)
  {
  case 1:

       printf("EXCELENTE ESCOLHA! SUA CARTA É: %c%02d\n\n", sigla, num_carta);
       printf("---------Atributos de sua Carta----------\n\n");

       // Exibição atributos da carta Nº 1
       printf("Pais: %s\n", pais);
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
      
       printf("EXCELENTE ESCOLHA! SUA CARTA É: %c%02d\n\n", sigla1, num_carta1);
       printf("---------Atributos de sua Carta----------\n\n");

       // Exibição atributos da Carta Nº 2
       printf("Pais: %s\n", pais1);
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

}     

// Funçao calculo densidade
float calculo_densidade(){

   densidade = (float) (populacao / area);
   densidade1 = (float) (populacao1 / area1);

}
//Funçao calculo PIB per Capita
float calculo_PIBperCapita(){

   pib_percapita = (float) (pib / populacao);
   pib_percapita1 = (float) (pib1 / populacao1);

}

// Funçao calculo do super poder
float super_poder()
{
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
         

         // Chamando as funcoes de calculo do PIB per Capita, Densidade populacional, Super Poder, esolha e ataque.
         calculo_PIBperCapita();
         calculo_densidade();
         super_poder();
         
         printf("------------SUAS CARTAS FORAM SALVAS COM SUCESSO!------------\n");
         
         printf("-------------------------------------------------------------\n");// separador
         escolha();//funcao escolha
         printf("-------------------------------------------------------------\n");// separador
         ataques();// funcao comparativa(ataque da carta)
         printf("-------------------------------------------------------------\n\n");// separador
    
        
    /*
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

    */



    return 0;
}
