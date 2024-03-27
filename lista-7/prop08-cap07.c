#include <stdio.h>

#define LINHAS 3
#define COLUNAS 8

void somarMatrizes(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS], int matrizResultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void subtrairMatrizes(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS], int matrizResultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizSoma[LINHAS][COLUNAS];
    int matrizDiferenca[LINHAS][COLUNAS];

    // Preenchimento da matriz A
    printf("Preencha a matriz A:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Preenchimento da matriz B
    printf("Preencha a matriz B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Cálculo da soma das matrizes A e B
    somarMatrizes(matrizA, matrizB, matrizSoma);

    // Cálculo da diferença das matrizes A e B
    subtrairMatrizes(matrizA, matrizB, matrizDiferenca);

    // Impressão da matriz soma
    printf("\nSoma das matrizes A e B:\n");
    imprimirMatriz(matrizSoma);

    // Impressão da matriz diferença
    printf("\nDiferença das matrizes A e B:\n");
    imprimirMatriz(matrizDiferenca);

    return 0;
}
