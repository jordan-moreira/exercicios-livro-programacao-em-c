#include <stdio.h>

#define LINHAS 5
#define COLUNAS 3
#define PRODUTOS 3
#define ARMAZENS 4

void imprimirMatriz(int matriz[LINHAS][COLUNAS])
{
    int i, j;
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int estoque[LINHAS][COLUNAS];
    int i, j, produto, armazem;
    int estoque_quadrados[ARMAZENS] = {0};
    int maior_estoque_produto2 = -1;
    int menor_estoque = -1;
    int custo_total_produto[PRODUTOS] = {0};
    int custo_total_armazem[ARMAZENS] = {0};

    // Leitura do estoque atual de três produtos em quatro armazéns
    for (i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d:\n", i + 1);
        for (j = 0; j < ARMAZENS; j++)
        {
            printf("Armazém %d: ", j + 1);
            scanf("%d", &estoque[j][i]);
            estoque[LINHAS - 1][i] += estoque[j][i];                 // Cálculo do custo total do produto
            estoque_quadrados[j] += (estoque[j][i] * estoque[j][i]); // Cálculo da quantidade de itens quadrados em cada armazém
            custo_total_produto[i] += estoque[j][i];                 // Cálculo do custo total de cada produto
            custo_total_armazem[j] += estoque[j][i];                 // Cálculo do custo total de cada armazém
            if (i == 1 && estoque[j][i] > maior_estoque_produto2)
            {
                maior_estoque_produto2 = estoque[j][i]; // Verificação do maior estoque do produto 2
            }
            if (menor_estoque == -1 || estoque[j][i] < estoque[menor_estoque][i])
            {
                menor_estoque = j; // Verificação do armazém com menor estoque
            }
        }
        printf("\n");
    }

    // Impressão da matriz de estoque
    printf("Matriz de estoque:\n");
    imprimirMatriz(estoque);

    // Impressão da quantidade de itens quadrados em cada armazém
    printf("Quantidade de itens quadrados em cada armazém:\n");
    for (i = 0; i < ARMAZENS; i++)
    {
        printf("Armazém %d: %d\n", i + 1, estoque_quadrados[i]);
    }
    printf("\n");

    // Impressão do armazém com maior estoque do produto 2
    printf("Armazém com maior estoque do produto 2: Armazém %d\n\n", maior_estoque_produto2);

    // Impressão do armazém com menor estoque
    printf("Armazém com menor estoque: Armazém %d\n\n", menor_estoque + 1);

    // Impressão do custo total de cada produto
    printf("Custo total de cada produto:\n");
    for (i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d: %d\n", i + 1, custo_total_produto[i]);
    }
    printf("\n");

    // Impressão do custo total de cada armazém
    printf("Custo total de cada armazém:\n");
    for (i = 0; i < ARMAZENS; i++)
    {
        printf("Armazém %d: %d\n", i + 1, custo_total_armazem[i]);
    }
    printf("\n");

    return 0;
}
