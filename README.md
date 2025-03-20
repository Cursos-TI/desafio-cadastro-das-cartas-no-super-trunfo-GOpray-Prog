#Super Trunfo - Jogo de Cartas
Descrição
O Super Trunfo é um jogo de cartas onde dois jogadores competem utilizando cartas que representam países. Cada carta contém atributos como população, área, PIB, pontos turísticos, densidade populacional, PIB per capita e um "super poder" calculado com base nesses atributos. O objetivo do jogo é escolher até dois atributos e comparar as cartas para determinar o vencedor.

Este repositório contém o código-fonte para a versão inicial do jogo, implementado em linguagem C.

Funcionalidades
1. Cadastro de Cartas
O jogador pode criar duas cartas, cada uma representando um país.
As cartas têm atributos como:
População
Área (em km²)
PIB
Pontos turísticos
Densidade populacional
PIB per capita
Super poder (uma fórmula que combina todos os atributos acima)
2. Escolha de Carta
O jogador pode escolher uma carta entre as duas cadastradas para começar o jogo.
3. Escolha de Atributos
O jogador pode escolher até dois atributos de sua carta para comparar com a carta adversária.
A lista de atributos para comparação inclui:
População
Área
PIB
Pontos turísticos
Densidade populacional
4. Cálculo dos Atributos
Densidade populacional: Calculada dividindo a população pela área do país.
PIB per capita: Calculado dividindo o PIB pela população.
Super poder: Um valor calculado combinando a população, área, PIB, pontos turísticos, PIB per capita e densidade populacional.
5. Ataques
O jogador pode atacar com um ou dois dos atributos escolhidos, e o jogo compara os valores das cartas para determinar qual carta tem o valor maior.
O ataque pode ser feito utilizando até dois dos seguintes atributos:
População
Área
PIB
Pontos turísticos
Densidade populacional
6. Tratamento de Erros
O jogo conta com tratamento de erros, como quando o jogador escolhe uma opção inválida. Se isso ocorrer, o jogo termina e uma mensagem de erro é exibida.
7. Exibição das Cartas
O jogo exibe os detalhes de cada carta escolhida, mostrando todos os atributos antes e depois de cada ataque.
8. Vitória
O vencedor do jogo é determinado com base nas comparações dos atributos das cartas. O programa exibe qual jogador venceu e os atributos envolvidos na vitória.
Como Rodar
Para rodar o jogo em sua máquina, siga os passos abaixo:

Baixar o Repositório Clone este repositório para sua máquina local:

bash
Copiar
Editar
git clone https://github.com/seu-usuario/super-trunfo.git
cd super-trunfo
Compilar o Código O código foi desenvolvido em C, então você pode usar o gcc (ou outro compilador C) para compilar o arquivo:

bash
Copiar
Editar
gcc super_trunfo.c -o super_trunfo
Executar o Jogo Após a compilação, você pode rodar o jogo executando o seguinte comando:

bash
Copiar
Editar
./super_trunfo
Jogando

O jogo irá pedir para você inserir o nome de dois países.
Você também escolherá um ou dois atributos para comparar e verá o vencedor a cada rodada.
Estrutura do Código
O código está organizado em funções para facilitar a legibilidade e manutenção. A principal estrutura do programa inclui:

Função main(): Controla a execução do jogo, chamando as funções para cadastro de cartas, cálculos e comparações de atributos.
Funções de Cálculo:
calculo_densidade(): Calcula a densidade populacional.
calculo_PIBperCapita(): Calcula o PIB per capita.
super_poder(): Calcula o "super poder" de cada carta.
Função escolha(): Permite ao jogador escolher uma carta para começar o jogo.
Função escolha_atributo1() e escolha_atributo2(): Gerenciam os ataques e as comparações entre os atributos das cartas.
Função vencedora(): Determina o vencedor após uma rodada de comparação.
Exemplo de Execução
bash
Copiar
Editar
------------BEM VINDO AO JOGO SUPER TRUNFO--------------

As Algumas Informações serão preenchidas automaticamente.

Digite o País da 1º Carta: Brasil
Digite o País da 2º Carta: Argentina

------------SUAS CARTAS FORAM SALVAS COM SUCESSO!------------

-------------------------------------------------------------
Agora escolha até dois dos atributos para atacar:
1) População
2) Área
3) PIB
4) Pontos turísticos
5) Densidade populacional
Digite sua escolha: 1 3

-------------------------------------------------------------
PAÍS ESCOLHIDO: Brasil

----------------Atributos da sua Carta----------------
Pais: Brasil
Código da carta: BR01
População: 213 milhões
Área: 8.5 milhões Km²
PIB: 2.1 trilhões
Pontos Turísticos: 20
Densidade Populacional: 25.06 hab/km²
PIB Per Capita: R$ 9,200
Super Poder: 500

-------------------------------------------------------------
PAÍS ESCOLHIDO: Argentina

----------------Atributos da sua Carta----------------
Pais: Argentina
Código da carta: AR01
População: 45 milhões
Área: 2.8 milhões Km²
PIB: 500 bilhões
Pontos Turísticos: 15
Densidade Populacional: 16.07 hab/km²
PIB Per Capita: R$ 11,000
Super Poder: 250

-------------------------------------------------------------
Vencedor: Brasil
Contribuindo
Sinta-se à vontade para contribuir para o projeto! Se você tiver sugestões ou melhorias, basta abrir uma issue ou enviar um pull request. Ficarei feliz em revisar suas contribuições.

Licença
Este projeto está licenciado sob a Licença MIT - veja o arquivo LICENSE para mais detalhes.

Divirta-se jogando o Super Trunfo de Países! 🌍🎮


