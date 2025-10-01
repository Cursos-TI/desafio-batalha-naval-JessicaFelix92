#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J',}; //Colunas do tabuleiro
    int tabuleiro [10][10]; //Declaração do tabuleiro 10x10
    int tamanhoNavio = 3, navio = 3;

    // Inicializar tabuleiro com 0 - água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 3; //Navio horizontal começa na linha 2, coluna 3
    int linhaV = 5, colunaV = 7; //Navio vertical começa na linha 5, coluna 7

    //Posição navio horizontal
    if (colunaH + tamanhoNavio <= 10) { //Verifica se cabe no tabuleiro
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaH][colunaH + i] = navio;
        }
    }

    //Posição navio vertical
    if (linhaV + tamanhoNavio <= 10) { //Verifica se cabe no tabuleiro
        for (int i = 0; i < tamanhoNavio; i++) {
            // só posiciona se não houver outro navio na célula
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navio;
            }
        }
    }

        printf("Tabuleiro Batalha Naval\n");
        printf("  ");
        for (int j = 0; j < 10; j++) {
            printf(" %c ", coluna[j]); //Imprime as colunas de A a J

    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i+1); // Imprime os números das linhas 1 a 10
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}
