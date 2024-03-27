#include <stdio.h>

int main()
{
    float preco, desconto;

    printf("Valor do desconto \n \n");
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    if (preco < 30)
    {
        printf("Sem desconto");
    }
    else if (preco >= 30 && preco <= 100)
    {
        printf("10 porcento de desconto \n");
        printf("Valor do desconto: R$ %.2f \n", desconto = preco * 0.1);
        printf("Novo preco: R$ %.2f", preco = preco - desconto);
    }

    else if (preco > 100)
    {
        printf("15 porcento de desconto \n");
        printf("Valor do desconto: R$ %.2f \n", desconto = preco * 0.15);
        printf("Novo preco: R$ %.2f", preco = preco - desconto);
    }
}
