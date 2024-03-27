#include <stdio.h>

int SomaNumeros(int N)
{
    int i, soma = 0;

    for (i = 2; i < N; i++)
    {
        soma += i;
    }

    return soma;
}

int main()
{
    int num;

    printf("Digite um número qualquer positivo: ");
    scanf("%d", &num);

    printf("A soma dos numeros entre 1 e %d é de %d. \n", num, SomaNumeros(num));
}
