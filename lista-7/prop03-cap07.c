#include <stdio.h>

#define LINHAS 6
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int maior_elemento = 0;
    int menor_elemento = 0;
    int linha_maior, coluna_maior;
    int linha_menor, coluna_menor;
    int i, j;

    // Preenchimento damatriz
    printf("Preencha a matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior_elemento = matriz[i][j];
                menor_elemento = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
                linha_menor = i;
                coluna_menor = j;
            } else {
                if (matriz[i][j] > maior_elemento) {
                    maior_elemento = matriz[i][j];
                    linha_maior = i;
                    coluna_maior = j;
                }
                if (matriz[i][j] < menor_elemento) {
                    menor_elemento = matriz[i][j];
                    linha_menor = i;
                    coluna_menor = j;
                }
            }
        }
    }

    // Impressão do maior elemento e sua posição
    printf("Maior elemento: %d\n", maior_elemento);
    printf("Posicao: [%d][%d]\n", linha_maior, coluna_maior);

    // Impressão do menor elemento e sua posição
    printf("Menor elemento: %d\n", menor_elemento);
    printf("Posicao: [%d][%d]\n", linha_menor, coluna_menor);

    return 0;
}
