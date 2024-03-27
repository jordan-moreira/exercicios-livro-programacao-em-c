#include <stdio.h>

// esse codigo recebe o valor o codigo de um produto (de 1 a 10), o peso do produto em Kg e o codigo de seu pais de origem(de 1 a 3), retornando o peso do produto em gramas o seu preco em relacao ao peso o imposto a ser cobrado e o valor final do produto

int main()
{

    int codigoProduto, pesoProduto, codigoPais, pesoGramas, precoProduto, imposto, precoFinal;

    printf("digite respectivamente o codigo do produto o peso do produto e o codigo do pais de origem separados por espaco:\n");
    scanf("%d %d %d%*c", &codigoProduto, &pesoProduto, &codigoPais);

    pesoGramas = pesoProduto * 1000;
    printf("o peso do produto em gramas e %d\n", pesoGramas);

    if (codigoProduto >= 1 && codigoProduto <= 4)
    {
        precoProduto = pesoGramas * 10;
    }
    else if (codigoProduto >= 5 && codigoProduto <= 7)
    {
        precoProduto = pesoGramas * 25;
    }
    else if (codigoProduto >= 8 && codigoProduto <= 10)
    {
        precoProduto = pesoGramas * 35;
    }
    else
    {
        printf("codigo do produto invalido");
    }
    printf("o preco do produto e de %d\n", precoProduto);

    switch (codigoPais)
    {
    case 1:
        imposto = 0;
        break;
    case 2:
        imposto = precoProduto * 0.15;
        break;
    case 3:
        imposto = precoProduto * 0.25;
        break;
    default:
        printf("codigo de pais invalido");
    }
    printf("o valor do imposto a ser cobrado e de %d\n", imposto);

    precoFinal = precoProduto + imposto;
    printf("o valor total e de %d", precoFinal);
}
