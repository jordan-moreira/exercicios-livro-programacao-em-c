#include <stdio.h>
#define QUANT_LOJA 8
#define QUANT_PRODUTO 4

int main()
{
    char nomeLoja[QUANT_LOJA][40], nomeProduto[QUANT_PRODUTO][40];
    float preco[QUANT_LOJA][QUANT_PRODUTO];
    int i, j;

    for (i = 0; i < QUANT_LOJA; i++)
    {
        printf("%dº Loja \n", i + 1);
        printf("\tDigite o nome da loja: ");
        setbuf(stdin, NULL);
        gets(nomeLoja[i]);
        printf("\tDigite o nome do produto: ");
        setbuf(stdin, NULL);
        gets(nomeProduto[i]);

        for (j = 0; j < QUANT_PRODUTO; j++)
        {
            printf("\tDigite o preco do %dº produto: ", j + 1);
            scanf("%f", &preco[i][j]);
        }
        printf("\n");
    }

    printf("Lojas em que o produto não ultrapasse R$ 120.00: \n");
    for (i = 0; i < QUANT_LOJA; i++)
    {
        for (j = 0; j < QUANT_PRODUTO; j++)
        {
            if (preco[i][j] <= 120)
            {
                printf("\tNome da loja: %s \n", nomeLoja[i]);
                printf("\tNome do produto: %s \n", nomeProduto[i]);
                printf("\tPreço: R$ %.2f \n\n", preco[i][j]);
            }
        }
    }
}