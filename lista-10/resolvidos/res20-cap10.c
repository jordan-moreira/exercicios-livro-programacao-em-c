#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 18
#define SALARIO_MINIMO 550.0

struct Funcionario
{
    char nome[100];
    int horasTrabalhadas;
    char turno;
    char categoria;
    float valorHora;
    float salarioInicial;
    float auxilioAlimentacao;
    float salarioFinal;
};

void cadastrarFuncionarios(struct Funcionario funcionarios[])
{
    printf("Cadastro de funcionarios:\n");
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);
        printf("Numero de horas trabalhadas no mes: ");
        scanf("%d", &funcionarios[i].horasTrabalhadas);
        printf("Turno de trabalho (M - matutino; V - vespertino; N - noturno): ");
        scanf(" %c", &funcionarios[i].turno);
        printf("Categoria (O - operario; G - gerente): ");
        scanf(" %c", &funcionarios[i].categoria);
        printf("\n");
    }
}

void calcularSalarioInicial(struct Funcionario *funcionario)
{
    float valorHora = SALARIO_MINIMO / 220.0;
    funcionario->valorHora = valorHora;

    funcionario->salarioInicial = funcionario->horasTrabalhadas * valorHora;
}

void calcularAuxilioAlimentacao(struct Funcionario *funcionario)
{
    float salarioInicial = funcionario->salarioInicial;
    if (salarioInicial <= 1000.0)
    {
        funcionario->auxilioAlimentacao = salarioInicial * 0.1;
    }
    else if (salarioInicial <= 2000.0)
    {
        funcionario->auxilioAlimentacao = salarioInicial * 0.05;
    }
    else
    {
        funcionario->auxilioAlimentacao = 0.0;
    }
}

void calcularSalarioFinal(struct Funcionario *funcionario)
{
    funcionario->salarioFinal = funcionario->salarioInicial + funcionario->auxilioAlimentacao;
}

void mostrarFolhaPagamento(struct Funcionario funcionarios[])
{
    printf("Folha de Pagamento:\n");
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Numero de horas trabalhadas: %d\n", funcionarios[i].horasTrabalhadas);
        printf("Valor da hora trabalhada: R$ %.2f\n", funcionarios[i].valorHora);
        printf("Salario Inicial: R$ %.2f\n", funcionarios[i].salarioInicial);
        printf("Auxilio Alimentacao: R$ %.2f\n", funcionarios[i].auxilioAlimentacao);
        printf("Salario Final: R$ %.2f\n", funcionarios[i].salarioFinal);
        printf("\n");
    }
}

int main()
{
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];

    int opcao;
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1. Cadastrar```c
        printf("funcionarios\n");
        printf("2. Mostrar folha de pagamento\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            cadastrarFuncionarios(funcionarios);
            for (int i = 0; i < MAX_FUNCIONARIOS; i++)
            {
                calcularSalarioInicial(&funcionarios[i]);
                calcularAuxilioAlimentacao(&funcionarios[i]);
                calcularSalarioFinal(&funcionarios[i]);
            }
            break;
        case 2:
            mostrarFolhaPagamento(funcionarios);
            break;
        case 3:
            printf("Programa finalizado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}
