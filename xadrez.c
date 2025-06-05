#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita (usa FOR)
    int casasTorre = 5;
    printf("=== Movimento da TORRE (5 casas para a direita) ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (usa WHILE)
    int casasBispo = 5;
    int i = 1;
    printf("\n=== Movimento do BISPO (5 casas na diagonal Cima Direita) ===\n");
    while (i <= casasBispo) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda (usa DO-WHILE)
    int casasRainha = 8;
    int j = 1;
    printf("\n=== Movimento da RAINHA (8 casas para a esquerda) ===\n");
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}

