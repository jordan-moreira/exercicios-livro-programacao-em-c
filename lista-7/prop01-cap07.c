#include <stdio.h>

#define LINHAS 3
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int contador = 0;
    int i, j;

    // Preenchimento da matriz
    printf("Preencha a matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
                contador++;
            }
        }
    }

    // Impressão da quantidade de elementos entre 15 e 20
    printf("Quantidade de elementos entre 15 e 20: %d\n", contador);

    return 0;
}
