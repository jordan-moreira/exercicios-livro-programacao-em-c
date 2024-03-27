#include <stdio.h>
#include <math.h>

int main()
{
    float num, quadrado, cubo, raiz;

    do
    {
        printf("Digite um número: ");
        scanf("%f", &num);
        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raiz = sqrtf(num);

        printf("    Quadrado de %.2f: %.2f. \n", num, quadrado);
        printf("    Cubo de %.2f: %.2f. \n", num, cubo);
        printf("    Raiz quadrada de %.2f: %.2f. \n\n", num, raiz);

        printf("Para encerrar digite um número negativo ou 0. Para continuar digite um número qualquer.\n");
        printf("---------------------------------------------------------------------- 2\n");

    } while (num > 0);
}