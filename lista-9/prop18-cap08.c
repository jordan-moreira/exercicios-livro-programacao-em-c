#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int numero)
{
    int i;

    if (numero <= 1)
    {
        return false;
    }

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

void mostrar_primos_acima_de_100()
{
    int count = 0;
    int numero = 101;

    printf("Os tres primeiros numeros primos acima de 100 sao:\n");

    while (count < 3)
    {
        if (eh_primo(numero))
        {
            printf("%d ", numero);
            count++;
        }
        numero++;
    }

    printf("\n");
}

// Exemplo de uso da sub-rotina
int main()
{
    mostrar_primos_acima_de_100();

    return 0;
}
