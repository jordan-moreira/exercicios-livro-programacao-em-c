#include <stdio.h>

int CalculoFatorial(int n)
{
    int i, fat = 1;

    for (i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}
int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial de %d = %d \n", num, CalculoFatorial(num));
}
