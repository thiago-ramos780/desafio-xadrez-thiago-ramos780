#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int t, b, r, c;

    //Torre
    t = 1;
    printf("Torre: \n");
    while(t <= 5){
        printf("Direita\n");
        t++;
    }

    printf("\n");

    //Bispo
    b = 1;
    printf("Bispo: \n");
    do {
        printf("Cima e Direita\n");
        b++;
    }while(b <= 5);

    printf("\n");

    //Rainha
    printf("Rainha: \n");
    for (r = 1; r <= 8; r++)
    {
        printf("Esquerda\n");
    }

    printf("\n");

    //Cavalo
    for (c = 1; c <= 1; c++)
    {
        for (int c2 = 1; c2 <= 2; c2++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    


    return 0;
}

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
