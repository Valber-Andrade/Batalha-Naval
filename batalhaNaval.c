#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Adicionando colunas de A-J
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//Adicionando linhas de 1-10
    int i = 0; //variavel i para loops aninhados

    int tabuleiro [10][10] = { //Adicionando um tabuleiro de 10x10
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,3,3,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}

    };
        
    printf(" *TABULEIRO BATALHA NAVAL* \n");//titulo para aparecer no console
    printf("   "); //adicionando espaço para organização de exibição

    for (int i = 0; i < 10; i++) {//um for para exibir as colunas de A-J
        printf("%c ", colunas[i]);//texto para exibição do loop
    }
    printf("\n");//usado para saltar linha na exibição das colunas com a primeira linha

    while (i < 10) //while para loops aninhados e exibição das linhas
    {
        printf("%2d ", linhas[i]);
        for (int j = 0; j < 10; j++)//for para exibir linhas e colunas do tabuleiro
        {
            printf("%d ", tabuleiro[i][j]);
        }
        i++;//incremento para a repetição
        printf("\n");
    }
        
        

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

    return 0;
}
