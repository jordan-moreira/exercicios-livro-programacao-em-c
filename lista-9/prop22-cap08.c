#include <stdio.h>

void soma_elementos_abaixo_sexta_linha(float matriz[][5])
{
    float soma = 0;

    for (int i = 5; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("Soma doselementos abaixo da sexta linha: %.2f\n", soma);
}

// Exemplo de uso da sub-rotina
int main()
{
    float matriz[10][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45},
        {46, 47, 48, 49, 50}};

    soma_elementos_abaixo_sexta_linha(matriz);

    return 0;
}
