#include <stdio.h>

#define ALUNOS 8
#define DISCIPLINAS 5

void preencherIdades(int vetorIdades[])
{
    printf("Digite as idades dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &vetorIdades[i]);
    }
}

void preencherCodigosDisciplinas(int vetorCodigos[])
{
    printf("Digite os códigos das disciplinas:\n");
    for (int i = 0; i < DISCIPLINAS; i++)
    {
        printf("Disciplina %d: ", i + 1);
        scanf("%d", &vetorCodigos[i]);
    }
}

void preencherMatrizProvas(int matrizProvas[][DISCIPLINAS])
{
    printf("Digite a quantidade de provas feitas por cada aluno em cada disciplina:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; j < DISCIPLINAS; j++)
        {
            printf("Aluno %d, Disciplina %d: ", i + 1, j + 1);
            scanf("%d", &matrizProvas[i][j]);
        }
    }
}

void mostrarInformacoes(int vetorIdades[], int vetorCodigos[], int matrizProvas[][DISCIPLINAS])
{
    printf("\nInformações dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Idade: %d\n", vetorIdades[i]);
        for (int j = 0; j < DISCIPLINAS; j++)
        {
            printf("Disciplina %d - Provas: %d\n", vetorCodigos[j], matrizProvas[i][j]);
        }
        printf("\n");
    }
}

void calcularQuantidadeAlunos(int vetorIdades[], int matrizProvas[][DISCIPLINAS], int codigoDisciplina)
{
    int quantidadeAlunos = 0;

    for (int i = 0; i < ALUNOS; i++)
    {
        if (vetorIdades[i] >= 18 && vetorIdades[i] <= 25 && matrizProvas[i][codigoDisciplina - 1] > 2)
        {
            quantidadeAlunos++;
        }
    }

    printf("\nQuantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas na disciplina %d: %d\n", codigoDisciplina, quantidadeAlunos);
}

void listarAlunosMenosProvas(int matrizProvas[][DISCIPLINAS], int vetorCodigos[])
{
    printf("\nListagem de alunos com menos de três provas em cada disciplina:\n");
    for (int i = 0; i < DISCIPLINAS; i++)
    {
        printf("Disciplina %d:\n", vetorCodigos[i]);
        for (int j = 0; j < ALUNOS; j++)
        {
            if (matrizProvas[j][i] < 3)
            {
                printf("Aluno %d - Disciplina %d\n", j + 1, vetorCodigos[i]);
            }
        }
        printf("\n");
    }
}

void calcularMediaIdade(int vetorIdades[], int matrizProvas[][DISCIPLINAS])
{
    int totalAlunosSemProva = 0;
    int somaIdadesAlunosSemProva = 0;

    for (int i = 0; i < ALUNOS; i++)
    {
        int alunoSemProva = 1;
        for (int j = 0; j < DISCIPLINAS; j++)
        {
            if (matrizProvas[i][j] > 0)
            {
                alunoSemProva = 0;
                break;
            }
        }

        if (alunoSemProva)
        {
            totalAlunosSemProva++;
            somaIdadesAlunosSemProva += vetorIdades[i];
        }
    }

    float mediaIdade = 0;
    if (totalAlunosSemProva > 0)
    {
        mediaIdade = (float)somaIdadesAlunosSemProva / totalAlunosSemProva;
    }

    printf("\nMédia de idade dos alunos que não fizeram nenhuma prova: %.2f\n", mediaIdade);
}

int main()
{
    int vetorIdades[ALUNOS];
    int vetorCodigos[DISCIPLINAS];
    int matrizProvas[ALUNOS][DISCIPLINAS];

    preencherIdades(vetorIdades);
    preencherCodigosDisciplinas(vetorCodigos);
    preencherMatrizProvas(matrizProvas);
    mostrarInformacoes(vetorIdades, vetorCodigos, matrizProvas);

    int codigoDisciplina;
    printf("Digite o código da disciplina para verificar a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas: ");
    scanf("%d", &codigoDisciplina);
    calcularQuantidadeAlunos(vetorIdades, matrizProvas, codigoDisciplina);

    listarAlunosMenosProvas(matrizProvas, vetorCodigos);

    calcularMediaIdade(vetorIdades, matrizProvas);

    return 0;
}
