#include <stdio.h>

//

int main()
{
    int numeroDigitado;

    printf("digite um numero para calcular a tabuada dele: ");
    scanf("%d%*c", &numeroDigitado);

    for (int i = 0; i <= 10; i++)
    {
        int resultado = numeroDigitado * i;
        printf("%d x %d = %d\n", numeroDigitado, i, resultado);
    }
}