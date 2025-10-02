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

    // Inicializar tabuleiro com valorv 0, representando água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Coordenadas dos navios
    int linhaH = 2, colunaH = 3; //Navio horizontal
    int linhaV = 5, colunaV = 7; //Navio vertical
    int linhaD1 = 0, colunaD1 = 0; // Navio diagonal 1
    int linhaD2 = 0, colunaD2 = 9; // Navio diagonal 2

    //Posição navio horizontal
    if (colunaH + tamanhoNavio <= 10) { //Verifica se cabe no tabuleiro
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaH][colunaH + i] == 0) { 
                tabuleiro[linhaH][colunaH + i] = navio;
            }
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

    //Posição navio diagonal 1
    if (linhaD1 + tamanhoNavio <= 10 && colunaD1 + tamanhoNavio <= 10) { 
        for (int i = 0; i < tamanhoNavio; i++) { 
            if (tabuleiro[linhaD1 + i][colunaD1 + i] == 0) { 
                tabuleiro[linhaD1 + i][colunaD1 + i] = navio; 
            } 
        } 
    }

    //Posição navio diagonal 2
    if (linhaD2 + tamanhoNavio <= 10 && colunaD2 - (tamanhoNavio - 1) >= 0) { 
        for (int i = 0; i < tamanhoNavio; i++) { 
            if (tabuleiro[linhaD2 + i][colunaD2 - i] == 0) { 
                tabuleiro[linhaD2 + i][colunaD2 - i] = navio;
            }
        }
    }

        printf("      Tabuleiro Batalha Naval\n");
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
