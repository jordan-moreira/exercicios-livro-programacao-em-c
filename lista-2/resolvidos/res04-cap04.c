#include <stdio.h>

// esse codigo recebe 3 numeros diferentes e os retorna em ordem crescente

int main()
{
    int num1, num2, num3;

    printf("digite respectivamente 3 numeros para serem organizados em ordem crescente: ");
    scanf("%d %d %d%*c", &num1, &num2, &num3);

    if (num1 < num2 && num2 < num3)
    {
        printf("a ordem crescente e: %d,%d,%d", num1, num2, num3);
    }
    else if (num1 < num3 && num3 < num2)
    {
        printf("a ordem crescente e: %d,%d,%d", num1, num3, num2);
    }
    else if (num2 < num1 && num1 < num3)
    {
        printf("a ordem crescente e: %d,%d,%d", num2, num1, num3);
    }
    else if (num2 < num3 && num3 < num1)
    {
        printf("a ordem crescente e: %d,%d,%d", num2, num3, num1);
    }
    else if (num3 < num2 && num2 < num1)
    {
        printf("a ordem crescente e: %d,%d,%d", num3, num2, num1);
    }
    else if (num3 < num1 && num1 < num2)
    {
        printf("a ordem crescente e: %d,%d,%d", num3, num1, num2);
    }
}