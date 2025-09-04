#include <stdio.h>
#include <string.h>

// Definições globais
#define MAX_CARTAS 100
#define TAM_STRING 50

// Definição da estrutura
struct Cartas {
    char Cidade[TAM_STRING];
    char Estado[TAM_STRING];
    int Codigo;
    long long Populacao;
    double Area;
    double PIB;
    int Numero_Pontos_Turisticos;
};

// Limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct Cartas Cadastro[MAX_CARTAS];
    int totalCartas = 0;
    int opcao;

    do {
        // Laço de menu
        printf("\n=====================================\n");
        printf("         CADASTRO - PARTE 1\n");
        printf("=====================================\n");
        printf("1-Cadastrar nova cidade\n");
        printf("2-Listar todas as cidades\n");
        printf("3-Comparar duas cidades\n");
        printf("0-Sair\n");
        printf("Escolha a opcao: ");

        // Lê a opção digitada
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida. Por favor, digite um numero.\n");
            limparBufferEntrada();
            continue;
        }
        limparBufferEntrada();

        switch (opcao) {
            case 1: {
                printf("---- Cadastro da Cidade ----\n\n");
                if (totalCartas < MAX_CARTAS) {
                    printf("Digite o nome da Cidade: ");
                    fgets(Cadastro[totalCartas].Cidade, TAM_STRING, stdin);
                    strtok(Cadastro[totalCartas].Cidade, "\n"); // Remove a quebra de linha

                    printf("Digite o nome do Estado: ");
                    fgets(Cadastro[totalCartas].Estado, TAM_STRING, stdin);
                    strtok(Cadastro[totalCartas].Estado, "\n");

                    printf("Digite o Codigo da cidade (numero): ");
                    scanf("%d", &Cadastro[totalCartas].Codigo);
                    limparBufferEntrada();

                    printf("Digite a Populacao (numero): ");
                    scanf("%lld", &Cadastro[totalCartas].Populacao);
                    limparBufferEntrada();

                    printf("Digite a Area em km^2 (numero): ");
                    scanf("%lf", &Cadastro[totalCartas].Area);
                    limparBufferEntrada();

                    printf("Digite o PIB em bilhoes (numero): ");
                    scanf("%lf", &Cadastro[totalCartas].PIB);
                    limparBufferEntrada();

                    printf("Digite o Numero de Pontos Turisticos (numero): ");
                    scanf("%d", &Cadastro[totalCartas].Numero_Pontos_Turisticos);
                    limparBufferEntrada();

                    totalCartas++;
                    printf("\nCidade cadastrada com sucesso!\n");
                } else {
                    printf("Limite maximo de cartas atingido.\n");
                }
                break;
            }
            case 2: {
                printf("---- Cidades Cadastradas ----\n\n");
                if (totalCartas == 0) {
                    printf("Nenhuma cidade cadastrada ainda.\n");
                } else {
                    for (int i = 0; i < totalCartas; i++) {
                        printf("Cidade: %s\n", Cadastro[i].Cidade);
                        printf("Estado: %s\n", Cadastro[i].Estado);
                        printf("Codigo: %d\n", Cadastro[i].Codigo);
                        printf("Populacao: %lld\n", Cadastro[i].Populacao);
                        printf("Area: %.2f km^2\n", Cadastro[i].Area);
                        printf("PIB: %.2f bilhoes\n", Cadastro[i].PIB);
                        printf("Pontos Turisticos: %d\n", Cadastro[i].Numero_Pontos_Turisticos);
                        printf("-----------------------------\n");
                    }
                }
                break;
            }
            case 3: {
                if (totalCartas < 2) {
                    printf("E necessario cadastrar pelo menos duas cidades para comparar.\n");
                } else {
                    int indice1, indice2;
                    printf("---- Comparacao de Cidades ----\n\n");
                    printf("Cidades disponiveis:\n");
                    for(int i = 0; i < totalCartas; i++) {
                        printf("%d: %s\n", i, Cadastro[i].Cidade);
                    }

                    printf("Escolha o indice da primeira cidade: ");
                    scanf("%d", &indice1);
                    limparBufferEntrada();
                    printf("Escolha o indice da segunda cidade: ");
                    scanf("%d", &indice2);
                    limparBufferEntrada();

                    if (indice1 >= 0 && indice1 < totalCartas && indice2 >= 0 && indice2 < totalCartas && indice1 != indice2) {
                        printf("\nComparando %s e %s...\n\n", Cadastro[indice1].Cidade, Cadastro[indice2].Cidade);

                        printf("Resultado da comparacao:\n");
                        printf("=====================================\n");
                        // Comparação de População
                        if (Cadastro[indice1].Populacao > Cadastro[indice2].Populacao) {
                            printf("-> Populacao: %s tem a maior populacao.\n", Cadastro[indice1].Cidade);
                        } else if (Cadastro[indice2].Populacao > Cadastro[indice1].Populacao) {
                            printf("-> Populacao: %s tem a maior populacao.\n", Cadastro[indice2].Cidade);
                        } else {
                            printf("-> Populacao: As cidades tem a mesma populacao.\n");
                        }

                        // Comparação de Área
                        if (Cadastro[indice1].Area > Cadastro[indice2].Area) {
                            printf("-> Area: %s tem a maior area.\n", Cadastro[indice1].Cidade);
                        } else if (Cadastro[indice2].Area > Cadastro[indice1].Area) {
                            printf("-> Area: %s tem a maior area.\n", Cadastro[indice2].Cidade);
                        } else {
                            printf("-> Area: As cidades tem a mesma area.\n");
                        }

                        // Comparação de PIB
                        if (Cadastro[indice1].PIB > Cadastro[indice2].PIB) {
                            printf("-> PIB: %s tem o maior PIB.\n", Cadastro[indice1].Cidade);
                        } else if (Cadastro[indice2].PIB > Cadastro[indice1].PIB) {
                            printf("-> PIB: %s tem o maior PIB.\n", Cadastro[indice2].Cidade);
                        } else {
                            printf("-> PIB: As cidades tem o mesmo PIB.\n");
                        }

                        // Comparação de Pontos Turísticos
                        if (Cadastro[indice1].Numero_Pontos_Turisticos > Cadastro[indice2].Numero_Pontos_Turisticos) {
                            printf("-> Pontos Turisticos: %s tem mais pontos turisticos.\n", Cadastro[indice1].Cidade);
                        } else if (Cadastro[indice2].Numero_Pontos_Turisticos > Cadastro[indice1].Numero_Pontos_Turisticos) {
                            printf("-> Pontos Turisticos: %s tem mais pontos turisticos.\n", Cadastro[indice2].Cidade);
                        } else {
                            printf("-> Pontos Turisticos: As cidades tem o mesmo numero de pontos turisticos.\n");
                        }
                        printf("=====================================\n");

                    } else {
                        printf("Indices invalidos. Por favor, escolha indices validos das cidades cadastradas.\n");
                    }
                }
                break;
            }
            case 0:
                printf("\nSaindo do programa. Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}