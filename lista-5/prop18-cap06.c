#include <stdio.h>

int main()
{
    int TAM = 15;
    int n[TAM], maior, menor, p_maior, p_menor;
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d número :", i + 1);
        scanf("%d", &n[i]);
    }

    maior = n[0];
    menor = n[0];

    for (i = 1; i < TAM; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
            p_maior = i;
        }

        if (n[i] < menor)
        {
            menor = n[i];
            p_menor = i;
        }
    }

    printf("\nO maior número digitado foi %d e está localizado na posição %d. \n", maior, p_maior);
    printf("O menor número digitado foi %d e está localizado na posição %d. \n", menor, p_menor);
}
