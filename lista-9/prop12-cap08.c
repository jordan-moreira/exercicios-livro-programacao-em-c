#include <stdio.h>

int Potencia(int x, int z)
{
    int i, pot = x;

    for (i = 1; i < z; i++)
    {
        pot = pot * x;
    }
    return pot;
}
int main()
{
    int x, z;

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    printf("Digite um valor para Z: ");
    scanf("%d", &z);

    printf("X^Z = %d \n", Potencia(x, z));
}
