#include <stdio.h>

int main()
{
    int num1, num2, sequencia;
    int i;
    num1 = 0;
    num2 = 1;

    for (i = 3; i <= 10; i++)
    {
        sequencia = num1 + num2;

        printf("%d \n", sequencia);

        num1 = num2;
        num2 = sequencia;
        sequencia = num1 + num2;
    }
}
