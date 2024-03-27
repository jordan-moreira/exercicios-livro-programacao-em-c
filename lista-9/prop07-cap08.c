#include <stdio.h>

float MediaAritimetica()
{
    float num, soma = 0, media;
    int cont = 0;

    do
    {
        printf("Digite o %d número: ", cont + 1);
        scanf("%f", &num);
        soma += num;
        if (num != 0)
        {
            cont++;
        }
    } while (num != 0);

    media = soma / cont;
    return media;
}

int main()
{

    printf("\nMedia dos valores digitados: %.2f. \n", MediaAritimetica());
}