#include <stdio.h>

// esse codigo recebe quatro numeros sendo os tres primeiros em ordem crescente e o outro nao retornando os quatros numeros em ordem crescente

int main()
{
    int num1, num2, num3, num4;

    printf("digite respectivamente 3 numeros diferentes em ordem crescente: ");
    scanf("%d %d %d%*c", &num1, &num2, &num3);

    printf("digite um numero qualquer diferente dos informados acima: ");
    scanf("%d%*c", &num4);

    if (num4 > num3)
    {
        printf("os numeros em ordem decrescente sao %d,%d,%d,%d", num4, num3, num2, num1);
    }
    else if (num4 > num2)
    {
        printf("os numeros em ordem decrescente sao %d,%d,%d,%d", num3, num4, num2, num1);
    }
    else if (num4 > num1)
    {
        printf("os numeros em ordem decrescente sao %d,%d,%d,%d", num3, num2, num4, num1);
    }
    else
    {
        printf("os numeros em ordem decrescente sao %d,%d,%d,%d", num3, num2, num1, num4);
    }
}