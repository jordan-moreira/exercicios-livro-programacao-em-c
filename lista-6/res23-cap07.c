#include <stdio.h>

#define VENDEDORES 5
#define SEMANAS 4

void imprimirMatriz(int matriz[VENDEDORES][SEMANAS])
{
    int i, j;
    for (i = 0; i < VENDEDORES; i++)
    {
        for (j = 0; j < SEMANAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int vendas[VENDEDORES][SEMANAS];
    int i, j;
    int total_vendas_mes[VENDEDORES] = {0};
    int total_vendas_semana[SEMANAS] = {0};
    int total_vendas_mes = 0;

    // Leitura das vendas semanais de cada vendedor
    for (i = 0; i < VENDEDORES; i++)
    {
        printf("Vendedor %d:\n", i + 1);
        for (j = 0; j < SEMANAS; j++)
        {
            printf("Semana %d: ", j + 1);
            scanf("%d", &vendas[i][j]);
            total_vendas_mes[i] += vendas[i][j];    // Cálculo do total de vendas do mês de cada vendedor
            total_vendas_semana[j] += vendas[i][j]; // Cálculo do total de vendas de cada semana
            total_vendas_mes[i] += vendas[i][j];    // Cálculo do total de vendas do mês
        }
        printf("\n");
    }

    // Impressão da matriz de vendas
    printf("Matriz de vendas:\n");
    imprimirMatriz(vendas);

    // Impressão do total de vendas do mês de cada vendedor
    printf("Total de vendas do mes de cada vendedor:\n");
    for (i = 0; i < VENDEDORES; i++)
    {
        printf("Vendedor %d: %d\n", i + 1, total_vendas_mes[i]);
    }
    printf("\n");

    // Impressão do total de vendas de cada semana
    printf("Total de vendas de cada semana:\n");
    for (j = 0; j < SEMANAS; j++)
    {
        printf("Semana %d: %d\n", j + 1, total_vendas_semana[j]);
    }
    printf("\n");

    // Impressão do total de vendas do mês
    printf("Total de vendas do mes: %d\n\n", total_vendas_mes);

    return 0;
}
