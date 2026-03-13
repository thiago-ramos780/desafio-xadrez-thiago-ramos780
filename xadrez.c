#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int t){
    if(t > 0){
        printf("Direita\n");
        moverTorre(t - 1);
    }

}

void moverBispo(int b){
      if(b > 0){
        for (int vertical = 0; vertical < 1; vertical++)
        {
            printf("Cima ");
            for (int horizontal = 0; horizontal < 1; horizontal++)
            { 
                printf("Direita\n");
            }
            
        }
        moverBispo(b - 1);
      }
}

void moverRainha(int r){
    if (r > 0)
    {
        printf("Esquerda\n");
        moverRainha(r - 1);
    }
    
}

int main() {
    //Torre
    int t = 5;
    printf("Torre: \n");
    moverTorre(t);

    printf("\n");

    //Bispo
    int b = 5;
    printf("Bispo:\n");
    moverBispo(b);

    printf("\n");

    //Rainha
    int r = 8;
    printf("Rainha: \n");
    moverRainha(r);    

    printf("\n");

    //Cavalo
    printf("Cavalo: \n");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            printf("Direita\n");
            break;
        }  
        printf("Cima\n");
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
