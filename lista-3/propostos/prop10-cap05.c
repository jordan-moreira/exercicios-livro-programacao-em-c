#include <stdio.h>

int main()
{

    int num, div, div_primo, i, j, ver_primo;
    int soma_Pares, soma_Primos;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        div = num % 2;
        ver_primo = 0;

        if (div == 0)
        {
            printf("    O número %d é par. \n", num);
            soma_Pares += num;
        }

        // Divisões para verificar se o número é primo.
        for (j = 1; j <= 9; j++)
        {
            div_primo = num % j;

            // Cada divisão com resto 0 será adcionado 0 a um contador
            if (div_primo == 0)
            {
                ver_primo++;
            }
            ver_primo = 0;
        }

        if (ver_primo > 2)
        {
            printf("    %d não é primo. \n \n", num);
        }
        else
        {
            printf("    %d é primo. \n \n", num);
            soma_Primos += num;
        }
    }

    printf("Soma dos números pares: %d. \n", soma_Pares);
    printf("Soma dos números primos: %d. \n", soma_Primos);
}
