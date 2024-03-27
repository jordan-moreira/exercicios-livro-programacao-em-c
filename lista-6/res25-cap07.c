#include <stdio.h>

#define PRODUTOS 5
#define LOJAS 3
#define MESES 2

void imprimirMatriz(int matriz[PRODUTOS][LOJAS])
{
    int i, j;
    for (i = 0; i < PRODUTOS; i++)
    {
        for (j = 0; j < LOJAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int vendas_mes1[PRODUTOS][LOJAS];
    int vendas_mes2[PRODUTOS][LOJAS];
    int bimestre[PRODUTOS][LOJAS];
    int i, j;
    int vendas_produto_loja[PRODUTOS][LOJAS] = {0};
    int maior_venda = -1;
    int total_vendido_loja[LOJAS] = {0};
    int total_vendido_produto[PRODUTOS] = {0};

    // Leitura das vendas de cada produto em cada loja no primeiro mês
    printf("Vendas do primeiro mes:\n");
    for (i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d:\n", i + 1);
        for (j = 0; j < LOJAS; j++)
        {
            printf("Loja %d: ", j + 1);
            scanf("%d", &vendas_mes1[i][j]);
            vendas_produto_loja[i][j] += vendas_mes1[i][j]; // Cálculo das vendas de cada produto em cada loja no bimestre
            total_vendido_loja[j] += vendas_mes1[i][j];     // Cálculo do total vendido por loja no bimestre
            total_vendido_produto[i] += vendas_mes1[i][j];  // Cálculo do total vendido de cada produto no bimestre
        }
        printf("\n");
    }

    // Leitura das vendas de cada produto em cada loja no segundo mês
    printf("Vendas do segundo mes:\n");
    for (i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d:\n", i + 1);
        for (j = 0; j < LOJAS; j++)
        {
            printf("Loja %d: ", j + 1);
            scanf("%d", &vendas_mes2[i][j]);
            vendas_produto_loja[i][j] += vendas_mes2[i][j]; // Cálculo das vendas de cada produto em cada loja no bimestre
            total_vendido_loja[j] += vendas_mes2[i][j];     // Cálculo do total vendido por loja no bimestre
            total_vendido_produto[i] += vendas_mes2[i][j];  // Cálculo do total vendido de cada produto no bimestre
            bimestre[i][j] = vendas_produto_loja[i][j];     // Cálculo do bimestre, soma das vendas dos dois meses anteriores
            if (vendas_produto_loja[i][j] > maior_venda)
            {
                maior_venda = vendas_produto_loja[i][j]; // Verificação da maior venda do bimestre
            }
        }
        printf("\n");
    }

    // Impressão das vendas de cada produto em cada loja no bimestre
    printf("Vendas de cada produto em cada loja no bimestre:\n");
    imprimirMatriz(vendas_produto_loja);

    // Impressão da maior venda do bimestre
    printf("Maior venda do bimestre: %d\n\n", maior_venda);

    // Impressão do total vendido por loja no bimestre
    printf("Total vendido por loja no bimestre:\n");
    for (j = 0; j < LOJAS; j++)
    {
        printf("Loja %d: %d\n", j + 1, total_vendido_loja[j]);
    }
    printf("\n");

    // Impressão do total vendido de cada produto no bimestre
    printf("Total vendido de cada produto no bimestre:\n");
    for (i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d: %d\n", i + 1, total_vendido_produto[i]);
    }
    printf("\n");

    return 0;
}
