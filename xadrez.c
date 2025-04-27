#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");

    // Usamos um laço 'for' para mover a torre 5 casas para a direita.
    // O laço começa de 0 e repete a instrução até que o índice seja igual a 5.
    for (int i = 0; i < 5; i++) {
        // Imprime a direção 'Direita' a cada iteração
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");

    // Usamos um laço 'while' para simular o movimento do bispo.
    // A variável i controla o número de casas movidas, começando de 0 até 4 (5 casas no total).
    int i = 0;
    while (i < 5) {
        // Imprime a direção 'Cima Direita' a cada iteração do laço.
        printf("Cima Direita\n");
        i++;  // Incrementa a variável 'i' a cada movimento
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");

    // Usamos um laço 'do-while' para simular o movimento da rainha.
    // O 'do-while' garante que a instrução seja executada pelo menos uma vez, independentemente da condição.
    int j = 0;
    do {
        // Imprime a direção 'Esquerda' a cada iteração do laço.
        printf("Esquerda\n");
        j++;  // Incrementa a variável 'j' a cada movimento
    } while (j < 8);  // O laço continua até que 'j' seja igual a 8 (8 casas para a esquerda)

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
