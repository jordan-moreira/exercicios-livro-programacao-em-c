#include <stdio.h>

// esse codigo recebe o valor de um produto e retorno o valor com um decrecimo de 10%

int main()
{
    float precoBase, precoAtual;

    printf("digite o preco do produto: ");
    scanf("%f%*c", &precoBase);

    precoAtual = precoBase * 0.9;

    printf("com o desconto de 10%% o preco atual e de %.2f", precoAtual);
}