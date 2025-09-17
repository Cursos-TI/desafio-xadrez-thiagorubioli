#include <stdio.h>

// Função recursiva para mover a torre para a direita
void mover_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mover_torre(casas - 1);
    }
}

// Função recursiva para mover o bispo
void mover_bispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {  // Movimento vertical para cima
            printf("Cima\n");
        }
            for (int j = 0; j < 1; j++) {  // Movimento horizontal para a direita
                printf("Direita\n");
            }
        mover_bispo(casas - 1);
    }
}

// Função recursiva para mover a rainha para a esquerda
void mover_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }
}

int main() {
    
    printf("\n>>>>>> Jogo de Xadrez - Movimentação das peças <<<<<\n\n"); // Imprime o título do jogo
    
    printf("Movimentação da torre:\n");
    mover_torre(5); // Mover a torre 5 casas para a direita (imprime "Direita" 5 vezes)
    printf(">>> TORRE moveu 5 casas para a direita <<<\n");

    printf("\nMovimentação do bispo:\n");
    mover_bispo(5); // Mover o bispo 5 casas para a diagonal (imprime "Cima/Direita" 5 vezes)
    printf(">>> BISPO moveu 5 casas na diagonal (5 casas para cima e 5 casas para a direita) <<<\n");

    printf("\nMovimentação da rainha:\n");
    mover_rainha(5); // Mover a rainha 8 casas para a esquerda (imprime "Esquerda" 8 vezes)
    printf(">>> RAINHA moveu 8 casas para a esquerda <<<\n");

    printf("\nMovimentação do cavalo:\n");
    for (int i = 0; i < 2; i++) {
        // Mover o cavalo 2 casas para cima (imprime "Cima" 2 vezes)
        printf("Cima\n");
        if (i == 0) continue; // Evita imprimir "Direita" após o último "Cima"

        for (int j = 0; j < 1; j++) {
            // Mover o cavalo 1 casa para a direita (imprime "Direita" 1 vez)
            printf("Direita\n");
        }
    }
        
    return 0;
}