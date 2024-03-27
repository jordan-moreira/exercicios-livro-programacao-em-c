#include <stdio.h>

int main()
{
    int matriz[5][5] = {0}; // Inicializa a matriz com zeros
    int i, j, num, linha, coluna;
    int diagonal_preenchida = 0, acima_diagonal = 0, abaixo_diagonal = 0;

    while (1)
    {
        printf("Digite um numero maior que zero (ou 0 para sair): ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        else if (num % 5 == 0 && diagonal_preenchida < 5)
        {
            linha = diagonal_preenchida;
            coluna = diagonal_preenchida;
            diagonal_preenchida++;
        }
        else if (num % 11 == 0 && acima_diagonal < 5 - 1)
        {
            linha = acima_diagonal;
            coluna = acima_diagonal + 1;
            acima_diagonal++;
        }
        else if (num % 13 == 0 && abaixo_diagonal < 5 - 1)
        {
            linha = abaixo_diagonal + 1;
            coluna = abaixo_diagonal;
            abaixo_diagonal++;
        }
        else
        {
            printf("Numero invalido!\n");
            continue;
        }

        matriz[linha][coluna] = num;
    }

    printf("\nElementos da matriz:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
