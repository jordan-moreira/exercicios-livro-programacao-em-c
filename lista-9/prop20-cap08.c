#include <stdio.h>

void calcular_estatisticas(float salario[], int filhos[], int tamanho)
{
    float media_salario = 0;
    float media_filhos = 0;
    float maior_salario = salario[0];
    int count_inferior_380 = 0;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        media_salario += salario[i];
        media_filhos += filhos[i];

        if (salario[i] > maior_salario)
        {
            maior_salario = salario[i];
        }

        if (salario[i] < 380.0)
        {
            count_inferior_380++;
        }
    }

    media_salario /= tamanho;
    media_filhos /= tamanho;

    printf("Media de salario da populacao: %.2f\n", media_salario);
    printf("Media do numero de filhos: %.2f\n", media_filhos);
    printf("Maior salario: %.2f\n", maior_salario);
    printf("Percentual de pessoas com salario inferior a R$ 380,00: %.2f%%\n", (count_inferior_380 / (float)tamanho) * 100);
}

// Exemplo de uso da sub-rotina
int main()
{
    float salario[5] = {500.0, 600.0, 800.0, 400.0, 1000.0};
    int filhos[5] = {2, 1, 3, 0, 2};

    calcular_estatisticas(salario, filhos, 5);

    return 0;
}
