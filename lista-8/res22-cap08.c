#include <stdio.h>
#include <time.h>

#define TAM 8

void SepararValoresPositivos_e_Negativos(int vet[], int T)
{
    int positivos[TAM], negativos[TAM], P = 0, P2 = 0, i;

    for (i = 0; i < T; i++)
    {
        if (vet[i] > 0)
        {
            positivos[P] = vet[i];
            P++;
        }
        else
        {
            negativos[P2] = vet[i];
            P2++;
        }
    }

    printf("\n\nValores positvos: ");
    for (i = 0; i < P; i++)
    {
        printf("%d ", positivos[i]);
    }
    printf("\nValores negativos: ");
    for (i = 0; i < P2; i++)
    {
        printf("%d ", negativos[i]);
    }
    printf("\n");
}

int main()
{
    int i, vet[TAM];
    srand(time(NULL));

    void SepararValoresPositivos_e_Negativos(int vet[], int T);

    printf("Vetor 1: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d | ", vet[i] = (rand() % 16) - 8);
    }

    SepararValoresPositivos_e_Negativos(vet, TAM);
}
