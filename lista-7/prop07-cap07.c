#include <stdio.h>

#define LINHAS_M 4
#define COLUNAS_M 6
#define LINHAS_N 6
#define COLUNAS_N 4

void somarLinhasColunas(int matrizM[LINHAS_M][COLUNAS_M], int matrizN[LINHAS_N][COLUNAS_N], int resultado[LINHAS_M][COLUNAS_N]) {
    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < COLUNAS_M; k++) {
                resultado[i][j] += matrizM[i][k] + matrizN[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[LINHAS_M][COLUNAS_N]) {
    printf("Resultado da soma das linhas de M com as colunas de N:\n");
    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizM[LINHAS_M][COLUNAS_M];
    int matrizN[LINHAS_N][COLUNAS_N];
    int resultado[LINHAS_M][COLUNAS_N];

    // Preenchimento da matriz M
    printf("Preencha a matriz M:\n");
    for (int i = 0; i < LINHAS_M; i++) {
        for (int j = 0; j < COLUNAS_M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizM[i][j]);
        }
    }

    // Preenchimento da matriz N
    printf("Preencha a matriz N:\n");
    for (int i = 0; i < LINHAS_N; i++) {
        for (int j = 0; j < COLUNAS_N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizN[i][j]);
        }
    }

    // Cálculo da soma das linhas de M com as colunas de N
    somarLinhasColunas(matrizM, matrizN, resultado);

    // Impressão do resultado
    imprimirMatriz(resultado);

    return 0;
}
