#include <stdio.h>

int main () {
        
    printf("\n>>>>>> Jogo de Xadrez - Movimentação das peças <<<<<\n\n");
    
    printf("Movimentação da torre:\n");

    for (int t = 0; t < 5; t++) {
        
        // Mover a torre 5 casas para a direita (imprime "Direita" 5 vezes)
        printf("Direita\n");
        
    }

    printf(">>> TORRE moveu 5 casas para a direita <<<\n");

    printf("\nMovimentação do bispo:\n");

    int b = 0;
    
    while (b < 5) {

        // Mover o bispo 5 casas para a diagonal (imprime "Cima/Direita" 5 vezes)
        printf("Cima\n");
        printf("Direita\n");
        
        b++;
        
    }

    printf(">>> BISPO moveu 5 casas para a cima e 5 casas para a direita <<<\n");
    
    printf("\nMovimentação da rainha:\n");
    
    int r = 0;

    do {

        // Mover a rainha 8 casas para a esquerda (imprime "Esquerda" 8 vezes)
        printf("Esquerda\n");

        r++;

    } while (r < 8);

    printf(">>> RAINHA moveu 8 casas para a esquerda <<<\n");
    
    printf("\nMovimentação do cavalo:\n");

    int movimento_cavalo = 1; //Flag para controlar o movimento em "L"

    while (movimento_cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            // Mover o cavalo 2 casas para baixo (imprime "Baixo" 2 vezes)
            printf("Baixo\n");
        }
        // Mover o cavalo 1 casa para a esquerda (imprime "Esquerda" 1 vez)
        printf("Esquerda\n"); // Imprime "Esquerda" 1 vez
    }

    printf(">>> CAVALO moveu 2 casas para baixo e 1 casa para a esquerda <<<\n\n");

    return 0;

}