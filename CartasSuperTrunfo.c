#include <stdio.h>
#include <string.h> // Para usar funções como strcspn(), remover a quebra de linha ao usar fgets().
#include <time.h> // Necessário para srand() e rand()
#include <stdlib.h> // Necessário para time()
 
    


// -------------------------------------------------------------------Variaveis Globais---------------------------------------------------------------------------------------

//Variaveis de entrada
float area = 0.0, pib = 0.0, area1 = 0.0, pib1 = 0.0, ataqueN2 = 0.0, ataqueN1 = 0.0, ataque2N1 = 0.0, ataque2N2 = 0.0, danoTotal = 0.0, danoTotal1 = 0.0;
unsigned long int populacao = 0, populacao1 = 0;
char pais[30], sigla, pais1[30], sigla1;
int turistico1 = 0, turistico = 0, num_carta = 1, num_carta1 = 2, escolha_carta = 0, ataque = 0, ataque1 = 0, opcao = 0, opcao_venc = 0;


//Variaveis de calculos
float pib_percapita = 0.0, densidade = 0.0, pib_percapita1 = 0.0, densidade1 = 0.0, superPoder = 0.0, superPoder1 = 0.0;

// Variaveis de resultados de comparaçao
int resul_turistico = 0, resul_densidade = 0, resul_pibpercapita = 0, resul_pop = 0, resul_pib = 0, resul_area = 0, result_superPoder = 0;


void populacional(){
   
   printf("ATAQUE ESCOLHIDO: ATAQUE POPULACIONAL\n");
   printf("VALOR DO DANO DA CARTA %c%02d: %lu\n", sigla, num_carta, populacao);
   printf("VALOR DO DANO DA CARTA %c%02d: %lu\n", sigla1, num_carta1, populacao1);
   printf("-------------------------------------------------------------\n");// separador
}

void em_area(){
    
      printf("ATAQUE ESCOLHIDO: ATAQUE EM AREA POR Km²\n");
      printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla, num_carta, area);
      printf("VALOR DESTRUTIVO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, area1);
      printf("-------------------------------------------------------------\n");// separador
}

void pib_fantastco(){
      
      printf("ATAQUE ESCOLHIDO: ATAQUE DO PIB FANTASTICO\n");
      printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla, num_carta, pib);
      printf("VALOR DO DANO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, pib1);
      printf("-------------------------------------------------------------\n");// separador
}

void pontos_turisticos(){
      
      printf("ATAQUE ESCOLHIDO: ATAQUE DE PONTOS TURISTICOS\n");
      printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla, num_carta, turistico);
      printf("VALOR DO DANO DA CARTA %c%02d: %d\n", sigla1, num_carta1, turistico1);
      printf("-------------------------------------------------------------\n");// separador
}

void inversa_densidade(){
         
      printf("ATAQUE ESCOLHIDO: SINGULARIDADE INVERSA DA DENSIDADE\n");
      printf("VALOR DO DANO ETÉRIO DA CARTA %c%02d: %.2f\n", sigla, num_carta, densidade);
      printf("VALOR DO DANO ÉTERIO DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, densidade1);
      printf("-------------------------------------------------------------\n");// separador
}

void ataque_combinado(){
      
      printf("ATAQUE ESCOLHIDO: SUPER PODER\n");
      printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla, num_carta, superPoder);
      printf("VALOR DO SUPER PODER DA CARTA %c%02d: %.2f\n", sigla1, num_carta1, superPoder1);
      printf("-------------------------------------------------------------\n");// separador
}

void vencedora(){
  danoTotal = ataqueN1 + ataqueN2;
  danoTotal1 = ataque2N1 + ataque2N2;
  
      if (opcao_venc == 7)
     {
      printf("VALOR TOTAL DO DANO DO PAIS %s : %.2f\n",pais, danoTotal);
      
     }else if (opcao_venc == 8)
     {
      printf("VALOR TOTAL DO DANO DO PAIS %s : %.2f\n",pais1, danoTotal1);
       
     }else if (opcao_venc == 10)
     {
      if (danoTotal > danoTotal1)
          {
            printf("A CARTA %c%02d VENCEU !!!\nPAIS VITORIOSO: %s\n", sigla, num_carta, pais);
            printf("-------------------------------------------------------------\n");// separador
    
          }else if (danoTotal < danoTotal1)
          {
            printf("A CARTA %c%02d VENCEU !!!\nPAIS VITORIOSO: %s\n", sigla1, num_carta1, pais1);
            printf("-------------------------------------------------------------\n");// separador
            
          }else
          {
            printf("HOUVE UM EMPATE ENTRE %s e %s\n", pais, pais1);
            printf("-------------------------------------------------------------\n");// separador
          }
          
     }else if (opcao_venc == 9)
     {
      //Estrutura Com Operador Ternário
       escolha_carta == num_carta && danoTotal > danoTotal1 ? printf("FIM DE JOGO!\nVOCÊ VENCEU!\n"): printf("FIM DE JOGO!\nVOCÊ PERDEU!\n");
     }else
     {
      //Estrutura Com Operador Ternário
      escolha_carta == num_carta1 && danoTotal < danoTotal1 ? printf("FIM DE JOGO!\nVOCÊ VENCEU!\n"): printf("FIM DE JOGO!\nVOCÊ PERDEU!\n");
     }    
}

// Funçao escolha de atributo para o ataque 1
void escolha_atributo1(){
  
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
          

          switch (ataque)
          {

           case 1:
                   ataqueN1 = populacao;
                   ataque2N1 = populacao1;
            break;
            case 2:  
                ataqueN1 = area;
                ataque2N1 = area;
            break;
            case 3:              
              ataqueN1 = pib;  
              ataque2N1 = pib;                              
           break;
           case 4:                  
                ataqueN1 = turistico;   
                ataque2N1 = turistico1;        
           break;
           case 5:                 
                ataqueN1 = 1/densidade;
                ataque2N1 = 1/densidade1;
           break;

           case 6:                 
                 ataqueN1 = superPoder; 
                 ataque2N1 = superPoder1;         
           break;
          
            default:
                
                printf("OPCAO INVALIDA!\n");
                printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
                
                exit(0);
         }  
   }


   // Funcao escolha do atributo para o Ataque 2
   void escolha_atributo2(){

    printf("LEGAL!\n");
    printf("AGORA ESCOLHA SEU SEGUNDO ATRIBUTO PARA ATACAR.\n");

    if (ataque == 1)
    {
      printf("2) ATAQUE EM AREA\n");
      printf("3) ATAQUE DO PIB FANTASTICO\n");
      printf("4) ATAQUE DE PONTOS TURISTICO\n");
      printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
      printf("6) ATAQUE DE SUPER PODER\n"); 
      printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
      scanf("%d", &ataque1);
      printf("\n\n");
      printf("-------------------RESULTADO DO COMBATE-------------------\n\n");

      switch (ataque1)
      {
       
        case 2:
             ataqueN2 = area;
             ataque2N2 = area1;            
        break;
  
        case 3:            
           ataqueN2 = pib;
           ataque2N2 = pib1;         
       break;
  
       case 4:              
             ataqueN2 = turistico;
             ataque2N2 = turistico1;       
       break;
  
       case 5:              
            ataqueN2 = 1/densidade;
            ataque2N2 = 1/densidade1;       
       break;
  
       case 6:
             ataqueN2 = superPoder;
             ataque2N2 = superPoder1;           
       break;
        
        default:           
            printf("OPCAO INVALIDA!\n");
            printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");            
            exit(0);
  
     }
  
    } else if (ataque == 2)
    {
    printf("1) ATAQUE POPULACIONAL\n");
    printf("3) ATAQUE DO PIB FANTASTICO\n");
    printf("4) ATAQUE DE PONTOS TURISTICO\n");
    printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
    printf("6) ATAQUE DE SUPER PODER\n"); 
    printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
    scanf("%d", &ataque1);
    printf("\n\n");
    printf("-------------------RESULTADO DO COMBATE-------------------\n\n");

    switch (ataque1)
    {

     case 1:
           
          ataqueN2 = populacao;
          ataque2N2 = populacao1;
           
           
      break;
    
      case 3:
           
          ataqueN2 = pib;
          ataque2N2 = pib1;
      
     break;

     case 4:
            
          ataqueN2 = turistico;
          ataque2N2 = turistico1;
      
     break;

     case 5:
            
          ataqueN2 = 1/densidade;
          ataque2N2 = 1/densidade1;
      
     break;

     case 6:
           
          ataqueN2 = superPoder; 
          ataque2N2 = superPoder1;
          
     break;


    
      default:
          
          printf("OPCAO INVALIDA!\n");
          printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
          
          exit(0);

   }
    } else if (ataque == 3)
    {

    printf("1) ATAQUE POPULACIONAL\n");
    printf("2) ATAQUE EM AREA\n");
    printf("4) ATAQUE DE PONTOS TURISTICO\n");
    printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
    printf("6) ATAQUE DE SUPER PODER\n"); 
    printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
    scanf("%d", &ataque1);
    printf("\n\n");
    printf("-------------------RESULTADO DO COMBATE-------------------\n\n");

    switch (ataque1)
    {

     case 1:
           
          ataqueN2 = populacao;
          ataque2N2 = populacao1;
      break;
    
   
      case 2:
           
          ataqueN2 = area;
          ataque2N2 = area1;
           
      break;

     case 4:
            
          ataqueN2 = turistico;
          ataque2N2 = turistico1;
      
     break;

     case 5:
            
          ataqueN2 = 1/densidade;
          ataque2N2 = 1/densidade1;
     break;

     case 6:
           
          ataqueN2 = superPoder;
          ataque2N2 = superPoder1;
      
     break;


    
      default:
          
          printf("OPCAO INVALIDA!\n");
          printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
          
          exit(0);

   }
    } else if (ataque == 4)
    {
      printf("1) ATAQUE POPULACIONAL\n");
      printf("2) ATAQUE EM AREA\n");
      printf("3) ATAQUE DO PIB FANTASTICO\n");
      printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
      printf("6) ATAQUE DE SUPER PODER\n"); 
      printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
      scanf("%d", &ataque1);
      printf("\n\n");
      printf("-------------------RESULTADO DO COMBATE-------------------\n\n");
  
      switch (ataque1)
      {
  
       case 1:
             
            ataqueN2 = populacao;
            ataque2N2 = populacao1;
        break;
      
     
        case 2:
          
        ataqueN2 = area;
        ataque2N2 = area1;
        break;
  
        case 3:
             
           
           ataqueN2 = pib;
           ataque2N2 = pib1;
       break;
  
       case 5:
              
            ataqueN2 = 1/densidade;
            ataque2N2 = 1/densidade1;
        
       break;
  
       case 6:
             
            ataqueN2 = superPoder;
            ataque2N2 = superPoder1;
        
       break;
  
  
      
        default:
            
            printf("OPCAO INVALIDA!\n");
            printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
            
            exit(0);
  
     }
    } else if (ataque == 5)
    {
    printf("1) ATAQUE POPULACIONAL\n");
    printf("2) ATAQUE EM AREA\n");
    printf("3) ATAQUE DO PIB FANTASTICO\n");
    printf("4) ATAQUE DE PONTOS TURISTICO\n");
    printf("6) ATAQUE DE SUPER PODER\n"); 
    printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
    scanf("%d", &ataque1);
    printf("\n\n");
    printf("-------------------RESULTADO DO COMBATE-------------------\n\n");

    switch (ataque1)
    {

     case 1:
           
          ataqueN2 = populacao;
          ataque2N2 = populacao1;
      break;
    
   
      case 2:
           
         ataqueN2 = area;
         ataque2N2 = area1;
      break;

      case 3:
          ataqueN2 = pib;
          ataque2N2 = pib1;
     break;

     case 4:
            
          ataqueN2 = turistico;
          ataque2N2 = turistico1;
     break;

     case 6:
           
          ataqueN2 = superPoder;
          ataque2N2 = superPoder1;
      
     break;


    
      default:
          
          printf("OPCAO INVALIDA!\n");
          printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
          
          exit(0);

   }
    } else if (ataque == 6)
    {
      
    printf("1) ATAQUE POPULACIONAL\n");
    printf("2) ATAQUE EM AREA\n");
    printf("3) ATAQUE DO PIB FANTASTICO\n");
    printf("4) ATAQUE DE PONTOS TURISTICO\n");
    printf("5) ATAQUE SINGULARIDADE INVERSA DA DENSIDADE\n");
    printf("ESCOLHA QUAL SERÁ SEU ATAQUE: ");
    scanf("%d", &ataque1);
    printf("\n\n");
    printf("-------------------RESULTADO DO COMBATE-------------------\n\n");

    switch (ataque1)
    {

     case 1:
           
           ataqueN2 = populacao;
           ataque2N2 = populacao1;
      break;
    
   
      case 2:
           
          
           ataqueN2 = area;
           ataque2N2 = area1;
           
      break;

      case 3:
           
          ataqueN2 = pib;
          ataque2N2 = pib1;
      
     break;

     case 4:
            
          ataqueN2 = turistico;
          ataque2N2 = turistico1;
      
     break;

     case 5:
            
          ataqueN2 = 1/densidade;
          ataque2N2 = 1/densidade1;
      
     break;
   
      default:
          
          printf("OPCAO INVALIDA!\n");
          printf("FAVOR INICIAR O JOGO NOVAMENTE.\n\n");
          
          exit(0);

   }
    }
}


   //Funçao para o Jogador escolher a sua carta dentre as duas cadastradas
void escolha(){

  sigla = pais[0];
  sigla1 = pais1[0];

       printf("AGORA ESCOLHA UMA DAS CARTAS PARA COMECAR O JOGO \n");
       printf("1) PARA CARTA: %c%02d %s\n", sigla, num_carta, pais);
       printf("2) PARA CARTA: %c%02d %s\n", sigla1, num_carta1, pais1);
       printf("DIGITE SUA ESCOLHA: ");
       scanf("%d", &escolha_carta);
       printf("\n\n");
      

  switch (escolha_carta)
  {
  case 1:

       printf("EXCELENTE ESCOLHA! SUA CARTA É: %c%02d\n\n", sigla, num_carta);
       printf("----------------Atributos da sua Carta----------------\n\n");

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
       printf("----------------Atributos da sua Carta----------------\n\n");

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
            
            exit(0);
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

void saida(){

  printf("PAISES ENVOLVIDOS: %s Vs %s\n", pais, pais1);
  
 if (ataque == 1)
 {
  populacional();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 2)
  {
    em_area();
  }else if (ataque1 == 3)
  {
    pib_fantastco();
  }else if (ataque1 == 4)
  {
    pontos_turisticos();
  }else if (ataque1 == 5)
  {
    inversa_densidade();
  }else if (ataque1 == 6)
  {
    ataque_combinado();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }

  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc); 
 }
 else if (ataque == 2)
 {
  em_area();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 1)
  {
    populacional();
  }else if (ataque1 == 3)
  {
    pib_fantastco();
  }else if (ataque1 == 4)
  {
    pontos_turisticos();
  }else if (ataque1 == 5)
  {
    inversa_densidade();
  }else if (ataque1 == 6)
  {
    ataque_combinado();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }
  
  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc);
 }
 else if (ataque == 3)
 {
  pib_fantastco();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 1)
  {
    populacional();
  }else if (ataque1 == 2)
  {
    em_area();
  }else if (ataque1 == 4)
  {
    pontos_turisticos();
  }else if (ataque1 == 5)
  {
    inversa_densidade();
  }else if (ataque1 == 6)
  {
    ataque_combinado();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }
  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc); 
 }
 else if (ataque == 4)
 {
  pontos_turisticos();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 1)
  {
    populacional();
  }else if (ataque1 == 2)
  {
    em_area();
  }else if (ataque1 == 3)
  {
    pib_fantastco();
  }else if (ataque1 == 5)
  {
    inversa_densidade();
  }else if (ataque1 == 6)
  {
    ataque_combinado();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }
  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc);
 }
 
 else if (ataque == 5)
 {
  inversa_densidade();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 1)
  {
    populacional();
  }else if (ataque1 == 2)
  {
    em_area();
  }else if (ataque1 == 3)
  {
    pib_fantastco();
  }else if (ataque1 == 4)
  {
    pontos_turisticos();
  }else if (ataque1 == 6)
  {
    ataque_combinado();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }
  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc);
 }
 
 else if (ataque == 6)
 {
  ataque_combinado();
  printf("\nSEGUNDO ATAQUE!\n");

  if (ataque1 == 1)
  {
    populacional();
  }else if (ataque1 == 2)
  {
    em_area();
  }else if (ataque1 == 3)
  {
    pib_fantastco();
  }else if (ataque1 == 4)
  {
    pontos_turisticos();
  }else if (ataque1 == 5)
  {
    inversa_densidade();
  }
  
  if (escolha_carta == 1)
  {
    printf("PAIS ESCOLHIDO: %s\n", pais);
  }else
  {
    printf("PAIS ESCOLHIDO: %s\n", pais1);
  }
  opcao_venc = 7;
  vencedora(opcao_venc);
  opcao_venc = 8;
  vencedora(opcao_venc);
  opcao_venc  = 10;
  vencedora(opcao_venc);
  opcao_venc  = 9;
  vencedora(opcao_venc);
 }
 
}


int main()
 {
 srand(time(0));

  area = rand() % 2000000000;
  area1 = rand() % 2000000000;
  pib = rand() % 2000000000;
  pib1 = rand() % 2000000000;
  populacao= rand() % 2000000000;
  populacao1 = rand() % 2000000000;
  turistico= rand() % 2000000000;
  turistico1 = rand() % 2000000000;
  
   
    
        // Cabeçalho do programa
    printf("------------BEM VINDO AO JOGO SUPER TRUNFO--------------\n\n");
    
    
   
        // Entrada de dados do usuário
        printf("Algumas Informaçoes serao preenchidas automaticamento.\n\n");
        printf("Digite o Pais da 1º Carta: ");
        fgets(pais, 50, stdin);
        pais[strcspn(pais, "\n")] = 0; // Evita a quebra de linha da função fgets
    
    
    printf("-------------DIGITE AS INFORMAÇÕES DA 2º CARTA---------------\n\n");
    
    
        // Entrada de dados do usuário
        printf("Algumas Informaçoes serao preenchidas automaticamento.\n\n");
        printf("Digite o Pais da 2º Carta: ");
        fgets(pais1, 50, stdin);
        pais1[strcspn(pais1, "\n")] = 0; // Evita a quebra de linha da função fgets
        

         // Chamando as funcoes de calculo do PIB per Capita, Densidade populacional, Super Poder, esolha e ataque.
         calculo_PIBperCapita();
         calculo_densidade();
         super_poder();
         
         printf("------------SUAS CARTAS FORAM SALVAS COM SUCESSO!------------\n");
         
         printf("-------------------------------------------------------------\n");// separador
         escolha();//funcao escolha
         printf("-------------------------------------------------------------\n");// separador
         escolha_atributo1();// funcao comparativa(ataque1 da carta)
         printf("-------------------------------------------------------------\n\n");// separador
         escolha_atributo2();// funcao comparativa(ataque2 da carta)
         saida();

    return 0;
}
