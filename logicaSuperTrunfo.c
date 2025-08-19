#include <stdio.h>

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
    char Estado[TAM_STRING];
    char Codigo[10];
    char Cidade[10]; 
    char População[TAM_STRING];
    char Area[30];
    int PIB[30];
    int Numero_Pontos_Turísticos[10];
};

//limpar buffer
void limparBufferEntrada(){
    int c;
    while ((c = getchar())!='\n' && c!=EOF);
}

int main() {
    printf("Desafio Super Trunfo - Paises!\n");};
   
 
    
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



