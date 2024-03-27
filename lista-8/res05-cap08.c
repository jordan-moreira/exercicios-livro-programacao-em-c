#include <stdio.h>

float CalculoPercentual(float VAntigo, float VAtual)
{
    float percentual = ((VAtual - VAntigo) / VAntigo) * 100;
    return percentual;
}

int main()
{
    float ValorAntigo, ValorAtual;

    printf("Valor antigo: ");
    scanf("%f", &ValorAntigo);

    printf("Valor atual: ");
    scanf("%f", &ValorAtual);

    printf("\nPercentual de aumento foi de %.2f%%. \n", CalculoPercentual(ValorAntigo, ValorAtual));
}
