#include <stdio.h>

int main()
{
    float preco;

    printf("Calculo de preco e classificacao de produtos \n\n");
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50)
    {
        printf("Percentual de aumento de 5 porcento. \n");
        printf("O novo valor do produto sera de R$ %.2f.", preco = preco * 1.05);
    }
    else if (preco > 50 && preco <= 100)
    {
        printf("Percentual de aumento de 10 porcento. \n");
        printf("O novo valor do produto sera de R$ %.2f.", preco = preco * 1.10);
    }
    else if (preco > 100)
    {
        printf("Percentual de aumento de 15 porcento. \n");
        printf("O novo valor do produto sera de R$ %.2f.", preco = preco * 1.15);
    }

    if (preco <= 80)
    {
        printf("Classificacao \n");
        printf("Este produto esta barato.");
    }
    else if (preco > 80 && preco <= 120)
    {
        printf("Classificacao \n");
        printf("Este produto esta com preco normal.");
    }
    else if (preco > 120 && preco <= 200)
    {
        printf("Classificacao \n");
        printf("Este produto esta caro.");
    }
    else if (preco > 200)
    {
        printf("Classificacao \n");
        printf("Este produto esta muito caro.");
    }
}
