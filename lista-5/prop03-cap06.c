
#include <stdio.h>

int main()
{
    int TAM = 10;

    int cod_produto[TAM], quant_prod[TAM];
    int cod_cliente = 1, quant_cliente, cod_prod_cliente;
    int i, ver_estoque = 0;

    printf("Informação do estoque \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tDigite o codigo do %dº produto: ", i + 1);
        scanf("%d", &cod_produto[i]);
        printf("\tDigite a quantidade no estoque: ");
        scanf("%d", &quant_prod[i]);
        printf("\n");
    }
    printf("--------------------------------------------------------\n");

    printf("DADOS DO ESTOQUE \n\n");
    printf("CODIGO DO PRODUTO \t\t QUANTIDADE \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\t%d \t\t\t %d \n", cod_produto[i], quant_prod[i]);
    }

    printf("\nInformação do cliente \n");
    while (cod_cliente != 0)
    {
        printf("Digite o seu codigo: ");
        scanf("%d", &cod_cliente);

        if (cod_cliente == 0)
        {
            printf("Programa encerrado \n");
            break;
        }

        printf("Digite o codigo do seu produto: ");
        scanf("%d", &cod_prod_cliente);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quant_cliente);

        for (i = 0; i < TAM; i++)
        {
            if (cod_produto[i] == cod_prod_cliente && quant_prod[i] >= quant_cliente)
            {
                printf("Pedido atendido. Volte sempre. \n");
                quant_prod[i] = quant_prod[i] - quant_cliente;
                ver_estoque++;
            }
        }

        if (ver_estoque == 0)
        {
            printf("\nNão temos estoque suficiente dessa mercadoria. \n\n");
        }

        printf("\nESTOQUE ATUALIZADO \n");
        printf("CODIGO DO PRODUTO \t\t QUANTIDADE \n");
        for (i = 0; i < TAM; i++)
        {
            printf("\t%d \t\t\t %d \n", cod_produto[i], quant_prod[i]);
        }
        printf("\n");
    }
}