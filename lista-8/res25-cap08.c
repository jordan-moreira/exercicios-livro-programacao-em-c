#include <stdio.h>
#include <time.h>

#define TAM 25

void SubstituirValores(int vetor[], int T)
{
    int i;

    for (i = 0; i < T; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }
}
int main()
{
    int i, vet[TAM];
    srand(time(NULL));

    printf("Vetor: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d | ", vet[i] = (rand() % 50) - 25);
    }

    SubstituirValores(vet, TAM);

    printf("\n\nVetor alterado: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d |", vet[i]);
    }
    printf("\n");
}
