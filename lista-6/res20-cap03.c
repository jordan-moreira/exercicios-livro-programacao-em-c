#include <stdio.h>

#define LINHAS 5
#define COLUNAS 4

int main()
{
    int matriz[LINHAS][COLUNAS] = {0};
    int i, j, num;
    int linha_par = 0, linha_impar = 1;
    int par_preenchido = 0, impar_preenchido = 0;

    while (1)
    {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        else if (num % 2 == 0 && linha_par < LINHAS)
        {
            matriz[linha_par][par_preenchido] = num;
            par_preenchido++;
            if (par_preenchido == COLUNAS)
            {
                linha_par += 2;
                par_preenchido = 0;
            }
        }
        else if (linha_impar < LINHAS)
        {
            matriz[linha_impar][impar_preenchido] = num;
            impar_preenchido++;
            if (impar_preenchido == COLUNAS)
            {
                linha_impar += 2;
                impar_preenchido = 0;
            }
        }
        else
        {
            printf("Nao ha mais espaco para armazenar numeros pares ou impares.\n");
            break;
        }
    }

    printf("\nElementos da matriz:\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
