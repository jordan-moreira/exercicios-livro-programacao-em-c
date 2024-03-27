#include <stdio.h>

void vetor_interseccao(int vetor1[], int vetor2[], int tamanho)
{
    int interseccao[tamanho];
    int count = 0;
    int i, j;

    printf("Vetor interseccao: ");

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                interseccao[count] = vetor1[i];
                count++;
                break;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d ", interseccao[i]);
    }

    printf("\n");
}

// Exemplo de uso da sub-rotina
int main()
{
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    vetor_interseccao(vetor1, vetor2, 10);

    return 0;
}
