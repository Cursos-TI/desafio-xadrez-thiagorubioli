#include <stdio.h>

int main () {
        
    printf("\n>>>>>> Jogo de Xadrez - Movimentação das peças <<<<<\n\n");
    
    printf("Movimentação da torre:\n");

    for (int t = 0; t < 5; t++) {
        
        // Mover a torre 5 casas para a direita
        printf("Direita\n");
        
    }

    printf("\nMovimentação do bispo:\n");

    int b = 0;
    
    while (b < 5) {

        // Mover o bispo 5 casas para a diagonal (cima/direita)
        printf("Cima\n");
        printf("Direita\n");
        
        b++;
        
    }

    printf("\nMovimentação da rainha:\n");
    
    int r = 0;

    do {

        // Mover a rainha 8 casas para a esquerda
        printf("Esquerda\n");

        r++;

    } while (r < 8);

    return 0;

}