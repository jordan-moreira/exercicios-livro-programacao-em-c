#include <stdio.h>
#define TAM 10

void Calcular_Fatorial(int vetA[], int vetB[])
{
    int j, k, fat = 1;

    for (j = 0; j < TAM; j++)
    {
        for (k = 1; k <= vetA[j]; k++)
        {
            fat *= k;
        }
        vetB[j] = fat;
        fat = 1;
    }
}
int main()
{
    int i, vetorA[TAM], vetorB[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um valor para V[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    Calcular_Fatorial(vetorA[TAM], vetorB[TAM]);

    printf("\nCalculo do fatorial dos números digitados: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tO fatorial de %d é %d. \n", vetorA[i], vetorB[i]);
    }
}
