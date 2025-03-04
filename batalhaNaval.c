#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Adicionando colunas de A-J
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//Adicionando linhas de 1-10
    int i = 0; //variavel i para loops aninhados

    int tabuleiro [10][10]; //Adicionando um tabuleiro de 10x10
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                tabuleiro[i][j] = 0;
            }
            
        }
        
        int linha_Navio1 = 9;   // Linha de início do navio
        int coluna_Navio1 = 5;  // Coluna de início do navio
        int tamanho_Navio1 = 3; // Tamanho do navio
        // Preencher o navio horizontalmente
        for (int i = 0; i < tamanho_Navio1; i++) {
            tabuleiro[linha_Navio1][coluna_Navio1 + i] = 3; // numero que será impresso
        }
        
        int linha_Navio2 = 3;   // Linha de início do navio
        int coluna_Navio2 = 1;  // Coluna de início do navio
        int tamanho_Navio2 = 3; // Tamanho do navio
        // Preencher o navio horizontalmente
        for (int i = 0; i < tamanho_Navio2; i++) {
            tabuleiro[linha_Navio2 + i][coluna_Navio2] = 3; // numero que será impresso
        }

        int linha_Navio3 = 2;   // Linha de início do navio
        int coluna_Navio3 = 5;  // Coluna de início do navio
        int tamanho_Navio3 = 3; // Tamanho do navio
        // Preencher o navio horizontalmente
        for (int i = 0; i < tamanho_Navio3; i++) {
            for (int j = 0; j < tamanho_Navio3; j++)
            {
                tabuleiro[linha_Navio3][coluna_Navio3],  tabuleiro[linha_Navio3 + j][coluna_Navio3 + j] = 3; // numero que será impresso
            }
        }

        int linha_Navio4 = 8;   // Linha de início do navio
        int coluna_Navio4 = 2;  // Coluna de início do navio
        int tamanho_Navio4 = 3; // Tamanho do navio
        // Preencher o navio horizontalmente
        for (int i = 0; i < tamanho_Navio4; i++) {
            for (int j = 0; j < tamanho_Navio4; j++)
            {
                tabuleiro[linha_Navio4 ][coluna_Navio4],  tabuleiro[linha_Navio4 - j][coluna_Navio4 + j] = 3; // numero que será impresso
            }
        }

    printf(" *TABULEIRO BATALHA NAVAL* \n");//titulo para aparecer no console
    printf("   "); //adicionando espaço para organização de exibição

    for (int i = 0; i < 10; i++) {//um for para exibir as colunas de A-J
        printf("%c ", colunas[i]);//texto para exibição do loop
    }
    printf("\n");//usado para saltar linha na exibição das colunas com a primeira linha

    while (i < 10) //while para loops aninhados e exibição das linhas
    {
        printf("%2d ", linhas[i]); //a instrução %2d para organiza o preenchimento do tabuleiro
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
