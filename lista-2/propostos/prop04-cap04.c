#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite um numeros: ");
    scanf("%d", &n1);
    printf("Digite um numeros: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("\n\n");
        printf("%d e maior que %d.", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("\n\n");
        printf("%d e maior que %d.", n2, n1);
    }
    else
    {
        printf("\n\n");
        printf("Numeros sao iguais.");
    }
}