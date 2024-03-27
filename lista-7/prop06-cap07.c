#include <stdio.h>

#define LINHAS 20
#define COLUNAS 10

void somarColunas(int matriz[LINHAS][COLUNAS], int somaColunas[COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        int soma = 0;
        for (int i = 0; i < LINHAS; i++) {
            soma += matriz[i][j];
        }
        somaColunas[j] = soma;
    }
}

void multiplicarMatriz(int matriz[LINHAS][COLUNAS], int somaColunas[COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= somaColunas[j];
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int somaColunas[COLUNAS];

    // Preenchimento da matriz
    printf("Preencha a matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma das colunas
    somarColunas(matriz, somaColunas);

    // Multiplicação de cada elemento pela soma da coluna
    multiplicarMatriz(matriz, somaColunas);

    // Impressão da matriz resultante
    imprimirMatriz(matriz);

    return 0;
}
