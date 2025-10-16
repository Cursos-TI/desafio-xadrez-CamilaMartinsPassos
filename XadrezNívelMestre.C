#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorreRecursiva(int casas, char coluna, int linha) {
    if (casas == 0) return;

    coluna++;
    printf("Posição: %c%d - Direita\n", coluna, linha);
    moverTorreRecursiva(casas - 1, coluna, linha);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainhaRecursiva(int casas, char coluna, int linha) {
    if (casas == 0) return;

    coluna--;
    printf("Posição: %c%d - Esquerda\n", coluna, linha);
    moverRainhaRecursiva(casas - 1, coluna, linha);
}

// Função recursiva para mover o Bispo na diagonal cima-direita
void moverBispoRecursiva(int casas, char coluna, int linha) {
    if (casas == 0) return;

    coluna++;
    linha++;
    printf("Posição: %c%d - Cima Direita\n", coluna, linha);
    moverBispoRecursiva(casas - 1, coluna, linha);
}

// Função com loops aninhados para o Bispo (vertical e horizontal)
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    char coluna = 'A';
    int linha = 1;

    for (int v = 0; v < casas; v++) {
        for (int h = 0; h < 1; h++) { // horizontal dentro do vertical
            coluna++;
            linha++;
            printf("Posição: %c%d - Cima Direita\n", coluna, linha);
        }
    }
}

// Função com loops complexos para o Cavalo (duas casas para cima, uma para a direita)
void moverCavaloComplexo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    char coluna = 'D';
    int linha = 4;

    for (int m = 1; m <= movimentos; m++) {
        for (int i = 2; i >= 0; i--) {
            if (i == 2) {
                linha--;
                printf("Posição: %c%d - Cima\n", coluna, linha);
                continue;
            }
            if (i == 1) {
                linha--;
                printf("Posição: %c%d - Cima\n", coluna, linha);
                continue;
            }
            if (i == 0) {
                coluna++;
                printf("Posição: %c%d - Direita\n", coluna, linha);
                break;
            }
        }
    }
}

int main() {
    // Quantidade de casas/movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 2;

    // Posições iniciais
    char colunaTorre = 'A';
    int linhaTorre = 1;

    char colunaBispo = 'A';
    int linhaBispo = 1;

    char colunaRainha = 'H';
    int linhaRainha = 4;

    // Execução dos movimentos
    printf("Movimento da Torre:\n");
    moverTorreRecursiva(casasTorre, colunaTorre, linhaTorre);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursiva(casasBispo, colunaBispo, linhaBispo);

    moverBispoComLoops(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursiva(casasRainha, colunaRainha, linhaRainha);

    moverCavaloComplexo(movimentosCavalo);

    return 0;
}