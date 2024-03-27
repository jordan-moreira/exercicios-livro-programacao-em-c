#include <stdio.h>

int main()
{
    float area, altura, base;

    printf("Calculo de aréa de um triângulo \n\n");

    do
    {
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite a base: ");
        scanf("%f", &base);

        if (base <= 0 || altura <= 0)
        {
            printf("ENTRADA INVALIDA \n\n");
        }

    } while (altura <= 0 || base <= 0);

    area = (altura * base) / 2;
    printf(" \n A area do tirangulo é de: %.2f. \n", area);
}
