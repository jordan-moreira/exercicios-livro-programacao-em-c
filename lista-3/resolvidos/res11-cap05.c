#include <stdio.h>

int main()
{
    int num, resto, verificacao = 0;
    int i = 1;

    printf("Verificar se um numero e primo ou nao. \n\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        resto = num % i;

        if (resto == 0)
        {
            verificacao++;
        }
    }

    if ((verificacao > 2) || (num == 4))
    {
        printf("Nao e primo. \n");
    }
    else
    {
        printf("e primo. \n");
    }
}