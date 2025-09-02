#include <stdio.h>
//#include <cppbuild>

//contas globais
#define MAX_CARTAS 100
#define TAM_STRING 50

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
 //Descrição do problema: O código não possui as variáveis necessárias para armazenar...
    // ...os dados das duas cartas (Estado, Código, Nome da Cidade, População, Área, PIB, Nº Pontos Turísticos).

//definição de esttutura
struct Cartas{
    char Cidade[TAM_STRING];
    char Estado[TAM_STRING];
    char Codigo[10]; 
    char Populacao[TAM_STRING];
    char Area[30];
    int PIB[30];
    int Numero_Pontos_Turísticos[10];
};

//limpar buffer
void limparBufferEntrada(){
    int c;
    while ((c = getchar())!='\n' && c!=EOF);
}
//printf("Desafio Super Trunfo - Paises!\n")...nao sei porque o Sergio Cardoso pediu para colocar esta linha...parece outro desafio???;

int main() {
    struct Cartas Cadastro[MAX_CARTAS];
    int totalCartas = 0;
    int opcao;    
};
   
 //laço menu em tela
 printf("=====================================");
 printf("  CADASTRO - PARTE 1\n");
 printf("1-Cadastrar nova cidade\n");
 printf("2-Listar todas cidades\n");
 printf("0-Sair");
 printf("Escolha a opção\n");

 //Lê o menu que foi digitado e, depois com comando limparBufferEntrada limpa o buffer de entrada (nova precaução)
 scanf('%d', &opcao);
 limparBufferEntrada();

 //verificando total de cadastros efetuados
 switch (opcao)
 {
 case 1: //cadastro da cidade
 printf('----Cadastro da Cidade\n\n');

 if (totalCartas < MAX_CARTAS){
    printf('Digite nome da Cidade:   ');
    fgets(Cadastro[totalCartas].Cidade, TAM_STRING, stdin);

    printf('Digite nome da Estado:   ');
    fgets(Cadastro[totalCartas].Estado, TAM_STRING, stdin);

    printf('Digite nome da Codigo:   '); //acredito que não precisa deste item, entendo ser automatico? mas coloquei assim mesmo
    fgets(Cadastro[totalCartas].Codigo, TAM_STRING, stdin);

    printf('Digite nome da População:   ');
    fgets(Cadastro[totalCartas].Populacao, TAM_STRING, stdin);

    printf('Digite nome da Area:   ');
    fgets(Cadastro[totalCartas].Area, TAM_STRING, stdin);

    printf('Digite nome da PIB:   ');
    fgets(Cadastro[totalCartas].PIB, TAM_STRING, stdin);

    printf('Digite nome da Número de pontos turisticos:   ');
    fgets(Cadastro[totalCartas].Numero_Pontos_Turísticos, TAM_STRING, stdin);
   
 }
 
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
   

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



