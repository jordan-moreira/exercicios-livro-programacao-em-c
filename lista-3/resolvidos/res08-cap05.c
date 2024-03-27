#include <stdio.h>
int main()
{
    int num_termos;
    int i, j;

    int num1 = 2;
    int num2 = 7;
    int num3 = 3;

    printf("Calculo de serie \n\n");

    printf("Digite o numero de termos: ");
    scanf("%d", &num_termos);

    printf("%d - ", num1);
    printf("%d - ", num2);
    printf("%d - ", num3);

    for (i = 1; i <= num_termos; i++)
    {
        if (i != num_termos)
        {
            num1 = num1 * 2;
            printf(" %d -", num1);
        }
        if (i != num_termos)
        {
            num2 = num2 * 3;
            printf(" %d -", num2);
        }
        if (i != num_termos)
        {
            num3 = num3 * 4;
            printf(" %d -", num3);
        }
    }
}
