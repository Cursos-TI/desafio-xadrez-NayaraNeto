#include <stdio.h>

// Função recursiva para a Torre (move-se 5 casas para a direita)
void mover_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mover_torre(casas - 1);  // Chamada recursiva
    }
}

// Função recursiva para o Bispo (move-se na diagonal "Cima Direita")
void mover_bispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        mover_bispo(casas - 1);  // Chamada recursiva
    }
}

// Função recursiva para a Rainha (move-se 8 casas para a esquerda)
void mover_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha(casas - 1);  // Chamada recursiva
    }
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita em "L")
// Usando loops aninhados com múltiplas variáveis e condições.
void mover_cavalo() {
    for (int i = 0; i < 2; i++) {  // Primeiro loop para as duas casas para cima
        printf("Cima\n");  // Mover para cima

        // Loop aninhado para o movimento horizontal (1 casa para a direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");  // Mover para a direita
        }
    }
}

// Função recursiva para o Bispo com loops aninhados
// O loop externo controla o movimento vertical, e o loop interno controla o horizontal.
void mover_bispo_com_loops(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int i = 0; i < horizontal; i++) {
            printf("Cima Direita\n");
        }
        mover_bispo_com_loops(vertical - 1, horizontal);  // Chamada recursiva
    }
}

int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    mover_torre(5);  // Chama a função recursiva para mover a torre 5 casas
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    mover_bispo(5);  // Chama a função recursiva para mover o bispo
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    mover_rainha(8);  // Chama a função recursiva para mover a rainha
    printf("\n");

    // Movimentação do Cavalo (2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    mover_cavalo();  // Chama a função com loops aninhados para mover o cavalo
    printf("\n");

    // Movimentação do Bispo com Loops Aninhados
    printf("Movimento do Bispo com Loops Aninhados:\n");
    mover_bispo_com_loops(3, 2);  // Exemplo de 3 movimentos verticais e 2 horizontais para o bispo
    printf("\n");

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
