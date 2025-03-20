# Jogo Super Trunfo

Este é um jogo de **Super Trunfo** onde o jogador pode escolher entre duas cartas, cada uma representando um país, e comparar atributos como **população**, **área**, **PIB**, **pontos turísticos**, entre outros, para determinar qual país é mais forte em cada categoria.

## Funcionalidades

- **Cartas**: O jogo permite que o jogador escolha duas cartas representando países. Cada carta possui diversos atributos (população, área, PIB, pontos turísticos, densidade populacional, etc.).
  
- **Atributos**: O jogador pode escolher até dois atributos de sua carta para comparar com a carta adversária.

- **Ataques**: Existem diferentes tipos de ataque, onde os atributos das cartas podem ser comparados, e o jogador pode ganhar ou perder pontos dependendo da escolha.

- **Escolha de Carta**: O jogador pode escolher qual carta deseja jogar entre as opções.

- **Cálculos**: O jogo realiza cálculos automáticos para determinar a densidade populacional, o PIB per capita e um "super poder" de cada carta, com base nos atributos fornecidos.

## Como jogar

1. O jogo começa com o preenchimento automático das informações das cartas (como população, área, PIB, etc.).
2. O jogador escolhe uma carta entre as duas disponíveis.
3. Em seguida, o jogador escolhe um atributo de sua carta para compará-lo com o atributo correspondente da carta adversária.
4. O jogo calcula os valores e determina o vencedor, que depende do atributo escolhido.

### Exemplo de Atributos:

- **População**
- **Área**
- **PIB**
- **Pontos Turísticos**
- **Densidade Populacional**
- **PIB Per Capita**

## Estrutura do Código

- **Funções**:
  - `calculo_densidade()`: Calcula a densidade populacional dos países.
  - `calculo_PIBperCapita()`: Calcula o PIB per capita.
  - `super_poder()`: Calcula um valor de "super poder" baseado nos atributos das cartas.
  - `escolha()`: Permite que o jogador escolha a carta que deseja jogar.
  - `escolha_atributo1()` e `escolha_atributo2()`: Permitem que o jogador escolha os atributos para comparação.
  - `saida()`: Exibe os resultados finais da comparação entre as cartas.

## Licença

Este projeto está licenciado sob a [Licença MIT](https://opensource.org/licenses/MIT).

## Como rodar o código

1. Clone este repositório para o seu computador:
   ```bash
   git clone https://github.com/seuusuario/jogo-super-trunfo.git
   
Compile o código:

```bash
Copiar
Editar
gcc -o supertrunfo supertrunfo.c

Execute o jogo:

```bash
Copiar
Editar
./supertrunfo

Divirta-se jogando o Super Trunfo de Países! 🌍🎮


