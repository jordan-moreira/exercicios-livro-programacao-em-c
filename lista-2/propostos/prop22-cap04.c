#include <stdio.h>

int main()
{
    int idade;
    float peso;

    printf("Classificacao de acordo com peso e idade \n\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (idade < 20)
    {
        if (peso < 60)
        {
            printf("categoria 9");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("categoria 8");
        }
        else if (peso > 90)
        {
            printf("categoria 7");
        }
    } // Encerramento idade < 20

    else if (idade >= 20 && idade <= 50)
    {
        if (peso < 60)
        {
            printf("categoria 6");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("categoria 5");
        }
        else if (peso > 90)
        {
            printf("categoria 4");
        }
    }

    else if (idade > 50)
    {
        if (peso < 60)
        {
            printf("categoria 3");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("categoria 2");
        }
        else if (peso > 90)
        {
            printf("categoria 1");
        }
    }
}
