#include <stdio.h>
#include <string.h>

#define MAX_DISCIPLINAS 6
#define MAX_ALUNOS 10
#define MAX_MATRICULAS (MAX_ALUNOS * 3)

struct Aluno
{
    int codigo;
    char nome[100];
    int serie;
};

struct Disciplina
{
    int codigo;
    char descricao[100];
    int cargaHoraria;
};

struct Matricula
{
    int codigoAluno;
    int codigoDisciplina;
    int totalFaltas;
    float notaFinal;
};

void cadastrarDisciplinas(struct Disciplina disciplinas[])
{
    printf("Cadastro de disciplinas:\n");
    for (int i = 0; i < MAX_DISCIPLINAS; i++)
    {
        int codigo;
        printf("Codigo da disciplina: ");
        scanf("%d", &codigo);

        // Verificar se o código já foi utilizado
        for (int j = 0; j < i; j++)
        {
            if (disciplinas[j].codigo == codigo)
            {
                printf("Ja existe uma disciplina com esse codigo.\n");
                i--; // Repetir o cadastro
                break;
            }
        }

        disciplinas[i].codigo = codigo;

        printf("Descricao: ");
        scanf(" %[^\n]", disciplinas[i].descricao);

        printf("Carga horaria: ");
        scanf("%d", &disciplinas[i].cargaHoraria);

        printf("\n");
    }
}

void cadastrarAlunos(struct Aluno alunos[])
{
    printf("Cadastro de alunos:\n");
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        int codigo;
        printf("Codigo do aluno: ");
        scanf("%d", &codigo);

        // Verificar se o código já foi utilizado
        for (int j = 0; j < i; j++)
        {
            if (alunos[j].codigo == codigo)
            {
                printf("Ja existe um aluno com esse codigo.\n");
                i--; // Repetir o cadastro
                break;
            }
        }

        alunos[i].codigo = codigo;

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Serie: ");
        scanf("%d", &alunos[i].serie);

        printf("\n");
    }
}

int encontrarDisciplina(struct Disciplina disciplinas[], int codigo)
{
    for (int i = 0; i < MAX_DISCIPLINAS; i++)
    {
        if (disciplinas[i].codigo == codigo)
        {
            return i;
        }
    }
    return -1;
}

int encontrarAluno(struct Aluno alunos[], int codigo)
{
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if (alunos[i].codigo == codigo)
        {
            return i;
        }
    }
    return -1;
}

void realizarMatricula(struct Matricula matriculas[], struct Disciplina disciplinas[], struct Aluno alunos[])
{
    int codigoAluno, codigoDisciplina;

    printf("Codigo do aluno: ");
    scanf("%d", &codigoAluno);

    int indiceAluno = encontrarAluno(alunos, codigoAluno);

    if (indiceAluno == -1)
    {
        printf("Aluno nao encontrado.\n");
        return;
    }

    printf("Codigo da disciplina: ");
    scanf("%d", &codigoDisciplina);

    int indice```c int indiceDisciplina = encontrarDisciplina(disciplinas, codigoDisciplina);

    if (indiceDisciplina == -1)
    {
        printf("Disciplina nao encontrada.\n");
        return;
    }

    // Realizar matricula
    matriculas[indiceAluno * MAX_DISCIPLINAS + indiceDisciplina].codigoAluno = codigoAluno;
    matriculas[indiceAluno * MAX_DISCIPLINAS + indiceDisciplina].codigoDisciplina = codigoDisciplina;

    printf("Matricula realizada com sucesso.\n");
}

void lancarResultadosFinais(struct Matricula matriculas[], struct Disciplina disciplinas[])
{
    int codigoAluno, codigoDisciplina;

    printf("Codigo do aluno: ");
    scanf("%d", &codigoAluno);

    printf("Codigo da disciplina: ");
    scanf("%d", &codigoDisciplina);

    int indiceAluno = encontrarAluno(alunos, codigoAluno);
    int indiceDisciplina = encontrarDisciplina(disciplinas, codigoDisciplina);

    if (indiceAluno == -1)
    {
        printf("Aluno nao encontrado.\n");
        return;
    }

    if (indiceDisciplina == -1)
    {
        printf("Disciplina nao encontrada.\n");
        return;
    }

    printf("Total de faltas: ");
    scanf("%d", &matriculas[indiceAluno * MAX_DISCIPLINAS + indiceDisciplina].totalFaltas);

    printf("Nota final: ");
    scanf("%f", &matriculas[indiceAluno * MAX_DISCIPLINAS + indiceDisciplina].notaFinal);

    printf("Resultados finais lancados com sucesso.\n");
}

void consultarReprovados(struct Matricula matriculas[], struct Disciplina disciplinas[], struct Aluno alunos[])
{
    printf("Alunos reprovados:\n");
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        int codigoAluno = alunos[i].codigo;
        printf("Aluno: %s\n", alunos[i].nome);

        for (int j = 0; j < MAX_DISCIPLINAS; j++)
        {
            int codigoDisciplina = disciplinas[j].codigo;
            int indiceMatricula = i * MAX_DISCIPLINAS + j;

            if (matriculas[indiceMatricula].codigoAluno == codigoAluno &&
                matriculas[indiceMatricula].codigoDisciplina == codigoDisciplina &&
                (matriculas[indiceMatricula].notaFinal < 7.0 || matriculas[indiceMatricula].totalFaltas > disciplinas[j].cargaHoraria * 0.25))
            {
                printf("Disciplina: %s\n", disciplinas[j].descricao);
                printf("Resultado: Reprovado\n");
            }
        }
    }
    printf("\n");
}

void consultarDisciplinasAluno(struct Matricula matriculas[], struct Disciplina disciplinas[], struct Aluno alunos[])
{
    int codigoAluno;

    printf("Codigo do aluno: ");
    scanf("%d", &codigoAluno);

    int indiceAluno = encontrarAluno(alunos, codigoAluno);

    if (indiceAluno == -1)
    {
        printf("Aluno nao encontrado.\n");
        return;
    }

    printf("Disciplinas cursadas pelo aluno %s:\n", alunos[indiceAluno].nome);
    for (int i = 0; i < MAX_DISCIPLINAS; i++)
    {
        int codigoDisciplina = disciplinas[i].codigo;
        ```c int indiceMatricula = indiceAluno * MAX_DISCIPLINAS + i;

        if (matriculas[indiceMatricula].codigoAluno == codigoAluno)
        {
            printf("Disciplina: %s\n", disciplinas[i].descricao);
            printf("Total de faltas: %d\n", matriculas[indiceMatricula].totalFaltas);
            printf("Nota final: %.2f\n", matriculas[indiceMatricula].notaFinal);
            if (matriculas[indiceMatricula].notaFinal >= 7.0 && matriculas[indiceMatricula].totalFaltas <= disciplinas[i].cargaHoraria * 0.25)
            {
                printf("Resultado: Aprovado\n");
            }
            else
            {
                printf("Resultado: Reprovado\n");
            }
            printf("\n");
        }
    }
}

int main()
{
    struct Disciplina disciplinas[MAX_DISCIPLINAS];
    struct Aluno alunos[MAX_ALUNOS];
    struct Matricula matriculas[MAX_MATRICULAS];

    cadastrarDisciplinas(disciplinas);
    cadastrarAlunos(alunos);

    int opcao;
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1. Realizar matricula\n");
        printf("2. Lancar resultados finais\n");
        printf("3. Consultar alunos reprovados\n");
        printf("4. Consultar disciplinas cursadas por aluno\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            realizarMatricula(matriculas, disciplinas, alunos);
            break;
        case 2:
            lancarResultadosFinais(matriculas, disciplinas);
            break;
        case 3:
            consultarReprovados(matriculas, disciplinas, alunos);
            break;
        case 4:
            consultarDisciplinasAluno(matriculas, disciplinas, alunos);
            break;
        case 5:
            printf("Programa finalizado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}
