#include <stdio.h>

#define PRODUTOS 10
#define ARMAZENS 5

void receberPrecos(float precos[])
{
    printf("Digite o preço de cada produto:\n");
    for (int i = 0; i < PRODUTOS; i++)
    {
        printf("Produto %d: R$", i + 1);
        scanf("%f", &precos[i]);
    }
}

void receberEstoques(int estoques[][PRODUTOS])
{
    printf("Digite a quantidade estocada de cada produto nos armazéns:\n");
    for (int i = 0; i < ARMAZENS; i++)
    {
        for (int j = 0; j < PRODUTOS; j++)
        {
            printf("Armazém %d, Produto %d: ", i + 1, j + 1);
            scanf("%d", &estoques[i][j]);
        }
    }
}

void calcularQuantidadeEstocadaPorArmazem(int estoques[][PRODUTOS])
{
    printf("Quantidade de produtos estocados em cada armazém:\n");
    for (int i = 0; i < ARMAZENS; i++)
    {
        int totalArmazem = 0;
        for (int j = 0; j < PRODUTOS; j++)
        {
            totalArmazem += estoques[i][j];
        }
        printf("Armazém %d: %d\n", i + 1, totalArmazem);
    }
}

void calcularQuantidadeEstocadaTotal(int estoques[][PRODUTOS])
{
    int totalEstocado = 0;
    for (int i = 0; i < ARMAZENS; i++)
    {
        for (int j = 0; j < PRODUTOS; j++)
        {
            totalEstocado += estoques[i][j];
        }
    }
    printf("Quantidade de produtos estocados em todos os armazéns: %d\n", totalEstocado);
}

void encontrarMaiorEstoquePorArmazem(int estoques[][PRODUTOS], float precos[])
{
    for (int i = 0; i < ARMAZENS; i++)
    {
        int maiorEstoque = 0;
        float precoMaiorEstoque = 0;
        int produtoMaiorEstoque = -1;
        for (int j = 0; j < PRODUTOS; j++)
        {
            if (estoques[i][j] > maiorEstoque)
            {
                maiorEstoque = estoques[i][j];
                precoMaiorEstoque = precos[j];
                produtoMaiorEstoque = j;
            }
        }
        if (produtoMaiorEstoque != -1)
        {
            printf("Armazém %d - Produto %d: R$ %.2f\n", i + 1, produtoMaiorEstoque + 1, precoMaiorEstoque);
        }
    }
}

void encontrarMenorEstoque(int estoques[][PRODUTOS])
{
    int menorEstoque = estoques[0][0];
    for (int i = 0; i < ARMAZENS; i++)
    {
        for (int j = 0; j < PRODUTOS; j++)
        {
            if (estoques[i][j] < menorEstoque)
            {
                menorEstoque = estoques[i][j];
            }
        }
    }
    printf("Menor estoque armazenado: %d\n", menorEstoque);
}

void calcularCustoPorArmazem(int estoques[][PRODUTOS], float precos[])
{
    printf("Custo de cada armazém:\n");
    for (int i = 0; i < ARMAZENS; i++)
    {
        float custoArmazem = 0;
        for (int j = 0; j < PRODUTOS; j++)
        {
            custoArmazem += estoques[i][j] * precos[j];
        }
        printf("Armazém %d: R$ %.2f\n", i + 1, custoArmazem);
    }
}

int main()
{
    float precos[PRODUTOS];
    int estoques[ARMAZENS][PRODUTOS];

    receberPrecos(precos);
    receberEstoques(estoques);

    calcularQuantidadeEstocadaPorArmazem(estoques);
    calcularQuantidadeEstocadaTotal(estoques);
    encontrarMaiorEstoquePorArmazem(estoques, precos);
    encontrarMenorEstoque(estoques);
    calcularCustoPorArmazem(estoques, precos);

    return 0;
}
