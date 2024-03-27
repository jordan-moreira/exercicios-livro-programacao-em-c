#include <stdio.h>

#define LINHAS 2
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int contador_linha[LINHAS] = {0};
    int soma_pares = 0;
    float media_pares = 0;
    int qtd_pares = 0;
    int i, j;

    // Preenchimento da matriz
    printf("Preencha a matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20) {
                contador_linha[i]++;
            }
            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                qtd_pares++;
            }
        }
    }

    // Impressão da quantidade de elementos entre 12 e 20 em cada linha
    printf("Quantidade de elementos entre 12 e 20 em cada linha:\n");
    for (i = 0; i < LINHAS; i++) {
        printf("Linha %d: %d\n", i, contador_linha[i]);
    }

    // Cálculo da média dos elementos pares
    if (qtd_pares > 0) {
        media_pares = (float)soma_pares / qtd_pares;
    }

    // Impressão da média dos elementos pares
    printf("Media dos elementos pares: %.2f\n", media_pares);

    return 0;
}
