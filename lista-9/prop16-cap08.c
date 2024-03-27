#include <stdio.h>

float calcular_soma(float X[], int tamanho)
{
    float soma = 0;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        soma += X[i];
    }

    return soma;
}

// Exemplo de uso da sub-rotina
int main()
{
    float vetor_X[20] = {1.5, 2.7, 3.2, 4.9, 5.3, 6.1, 7.8, 8.4, 9.2, 10.6, 11.9, 12.3, 13.7, 14.5, 15.8, 16.2, 17.4, 18.9, 19.6, 20.2};
    float soma;

    soma = calcular_soma(vetor_X, 20);

    printf("Soma dos elementos: %.2f\n", soma);

    return 0;
}
