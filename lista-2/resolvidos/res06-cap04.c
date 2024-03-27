#include <stdio.h>

// esse numero recebe um numero qualquer e retorna se ele e par ou impar

int main()
{
    int numero;

    printf("digite um numero qualquer: ");
    scanf("%d%*c", &numero);

    if (numero % 2 == 0)
    {
        printf("esse numero e par.");
    }
    else
    {
        printf("esse numero e impar.");
    }
}