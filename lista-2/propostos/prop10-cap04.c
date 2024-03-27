#include <stdio.h>

int main()
{
    float custo, total;

    printf("Valor total de um veiculo \n\n");
    printf("Digite o preco de fabrica: ");
    scanf("%f", &custo);

    if (custo < 12000)
    {
        custo = custo * 1.05;
        printf("Preco total do veiculo: R$ %.2f ", custo);
    }
    else if (custo >= 12000 && custo <= 25000)
    {
        custo = custo * 1.25;
        printf("Preco total do veiculo: R$ %.2f ", custo);
    }
    else
    {
        custo = custo * 1.35;
        printf("Preco total do veiculo: R$ %.2f ", custo);
    }
}
