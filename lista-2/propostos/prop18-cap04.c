#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade < 18)
    {
        printf("Voce possui %d anos, portanto e menor de idade. \n", idade);
    }
    else if (idade >= 18)
    {
        printf("Voce possui %d anos, portanto e maior de idade. \n", idade);
    }
    else
    {
        printf("Idade inválida \n");
    }
}
