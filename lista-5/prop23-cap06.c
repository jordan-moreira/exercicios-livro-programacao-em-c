/*
23) Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 5;
    int x[TAM], y[TAM], z[TAM];
    int i, numA = 0, numB = TAM - 1;

    printf("1º Vetor \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tDigite o %dº valor:: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("2º Vetor \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &y[i]);
    }

    printf("3º Vetor \n");
    for (i = 0; i < TAM; i++)
    {
        z[i] = x[numA] - y[numB];
        printf("%d | ", z[i]);
        numA++;
        numB--;
    }

    printf("\n");
}
