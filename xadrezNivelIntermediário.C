#include <stdio.h>

// Função para simular o movimento da Torre usando FOR
void moverTorre(int casas) {
    printf("Movimento da Torre:\n");
    char coluna = 'A';
    int linha = 1;

    for (int i = 1; i <= casas; i++) {
        coluna++;
        printf("Posição: %c%d - Direita\n", coluna, linha);
    }
}

// Função para simular o movimento do Bispo usando WHILE
void moverBispo(int casas) {
    printf("\nMovimento do Bispo:\n");
    char coluna = 'A';
    int linha = 1;

    int i = 1;
    while (i <= casas) {
        coluna++;
        linha++;
        printf("Posição: %c%d - Cima Direita\n", coluna, linha);
        i++;
    }
}

// Função para simular o movimento da Rainha usando DO-WHILE
void moverRainha(int casas) {
    printf("\nMovimento da Rainha:\n");
    char coluna = 'H';
    int linha = 4;

    int i = 1;
    do {
        coluna--;
        printf("Posição: %c%d - Esquerda\n", coluna, linha);
        i++;
    } while (i <= casas);
}

// Função para simular o movimento do Cavalo usando loops aninhados
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    // Posição inicial
    char coluna = 'D';
    int linha = 4;

    // Loop externo FOR para repetir o movimento completo em "L"
    for (int m = 1; m <= movimentos; m++) {
        int i = 1;

        // Loop interno WHILE para duas casas para baixo
        while (i <= 2) {
            linha++;
            printf("Posição: %c%d - Baixo\n", coluna, linha);
            i++;
        }

        // Movimento perpendicular: uma casa para a esquerda
        coluna--;
        printf("Posição: %c%d - Esquerda\n", coluna, linha);
    }
}

int main() {
    // Quantidade de casas/movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // Quantas vezes o Cavalo faz o movimento em "L"

    // Chamando as funções
    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);
    moverCavalo(movimentosCavalo);

    return 0;
}