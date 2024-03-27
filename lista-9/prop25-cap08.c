#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_AVALIACOES 4

// Sub-rotina para calcular a média aritmética de um aluno
float calcularMedia(float notas[])
{
    float soma = 0;
    for (int i = 0; i < NUM_AVALIACOES; i++)
    {
        soma += notas[i];
    }
    return soma / NUM_AVALIACOES;
}

// Sub-rotina para mostrar os números dos alunos que precisam fazer recuperação
void mostrarAlunosRecuperacao(int numeros[], float medias[])
{
    printf("Alunos que precisam fazer recuperacao:\n");
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        if (medias[i] < 6.0)
        {
            printf("Aluno %d\n", numeros[i]);
        }
    }
}

// Programa principal
int main()
{
    int numeros[NUM_ALUNOS];
    float notas[NUM_ALUNOS][NUM_AVALIACOES];
    float medias[NUM_ALUNOS];

    // Leitura dos números dos alunos e das notas
    printf("Digite os numeros dos 10 alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        scanf("%d", &numeros[i]);
        printf("Digite as notas do aluno %d:\n", numeros[i]);
        for (int j = 0; j < NUM_AVALIACOES; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Cálculo das médias de cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        medias[i] = calcularMedia(notas[i]);
    }

    // Mostrar a média de todos os alunos
    printf("Media de todos os alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d: %.2f\n", numeros[i], medias[i]);
    }

    // Mostrar alunos que precisam fazer recuperação
    mostrarAlunosRecuperacao(numeros, medias);

    return 0;
}
