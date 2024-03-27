#include <stdio.h>
#define TAM 5

void Ordenar_Vetor(float vetor[])
{
    int i, j;
    float aux;

    for (i = 0; i < TAM; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
int main()
{
    int i;
    float vet[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("V[%d]: ", i);
        scanf("%f", &vet[i]);
    }

    Ordenar_Vetor(vet);

    printf("\nVetor ordenado em ordem crescente: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%.2f ", vet[i]);
    }
}
