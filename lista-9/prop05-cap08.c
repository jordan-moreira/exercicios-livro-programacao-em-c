#include <stdio.h>

void VerificarNumero(int n)
{
    if (n > 0)
    {
        printf("Positivo. \n");
    }
    else
    {
        printf("Negativo. \n");
    }
}
int main()
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    VerificarNumero(num);
}
