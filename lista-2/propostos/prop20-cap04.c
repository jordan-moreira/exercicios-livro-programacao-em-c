#include <stdio.h>

int main()
{
    int idade;

    printf("Categoria do nadador \n\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Sua categoria e infantil");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Sua categoria e juvenil");
    }
    else if (idade >= 11 && idade <= 15)
    {
        printf("Sua categoria e Adolecente");
        printf("\n");
    }
    else if (idade >= 16 && idade <= 30)
    {
        printf("Sua categoria e adulto");
        printf("\n");
    }
    else if (idade > 30)
    {
        printf("Sua categoria e senior");
        printf("\n");
    }
    else
    {
        printf("Idade ivalida");
    }
}
