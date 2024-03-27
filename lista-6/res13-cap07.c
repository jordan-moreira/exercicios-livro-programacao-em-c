#include <stdio.h>

int main()
{
    char nome[4][40];
    float preco[5][4], imposto[5][4], transporte[4];
    int i, j, k, cont = 1;
    int pC = 0, pL = 0;

    for (i = 0; i < 4; i++)
    {
        printf("\n%dº Produto \n", i + 1);
        printf("\tDigite o nome do produto: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        for (j = 0; j < 4; j++)
        {
            printf("\tDigite o preço na loja %d: ", j + 1);
            scanf("%f", &preco[i][j]);
        }

        printf("\tDigite o valor do transporte do produto %d: ", cont);
        scanf("%f", &transporte[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (preco[i][j] < 50)
            {
                imposto[i][j] = preco[i][j] * 0.05;
            }
            else if (preco[i][j] >= 50 && preco[i][j] <= 100)
            {
                imposto[i][j] = preco[i][j] * 0.10;
            }
            else
            {
                imposto[i][j] = preco[i][j] * 0.20;
            }
        }
    }
    float acressimo = 0, NovoPreco = 0, total;

    printf("\n--------------------RELÁTORIO--------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Produto %d | %s \n", i + 1, nome[i]);

        for (j = 0; j < 4; j++)
        {
            printf("\t\nLoja %d | Preço: R$ %.2f \n", j + 1, preco[i][j]);
            printf("\tImpostos: R$ %.2f \n", imposto[i][j]);
            printf("\tPreço com acressimo dos impostos: R$ %.2f \n", NovoPreco = preco[i][j] + imposto[i][j]);
            printf("\tTransporte: R$ %.2f \n", transporte[i]);
            printf("\tTotal:(transporte + impostos): R$ %.2f \n", total = preco[i][j] + imposto[i][j] + transporte[i]);
        }
        total = 0;
        NovoPreco = 0;
        printf("------------------------------------------------------------\n\n");
    }
}