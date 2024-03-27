#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 15
#define MAX_NOME 100

// Estrutura para armazenar os dados de uma conta bancária
typedef struct
{
    int numero;
    char nome[MAX_NOME];
    float saldo;
} Conta;

// Função para cadastrar contas
void cadastrarContas(Conta contas[], int *numContas)
{
    if (*numContas >= MAX_CONTAS)
    {
        printf("Limite máximo de contas atingido.\n");
        return;
    }

    Conta novaConta;

    printf("Digite o número da conta: ");
    scanf("%d", &novaConta.numero);

    for (int i = 0; i < *numContas; i++)
    {
        if (contas[i].numero == novaConta.numero)
        {
            printf("Já existe uma conta com esse número.\n");
            return;
        }
    }

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", novaConta.nome);

    printf("Digite o saldo: ");
    scanf("%f", &novaConta.saldo);

    contas[*numContas] = novaConta;
    (*numContas)++;

    printf("Conta cadastrada com sucesso.\n");
}

// Função para visualizar todas as contas de determinado cliente
void visualizarContasCliente(const Conta contas[], int numContas)
{
    char nomeCliente[MAX_NOME];

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", nomeCliente);

    int contador = 0;

    for (int i = 0; i < numContas; i++)
    {
        if (strcmp(contas[i].nome, nomeCliente) == 0)
        {
            printf("Conta %d:\n", contas[i].numero);
            printf("Nome do cliente: %s\n", contas[i].nome);
            printf("Saldo: %.2f\n", contas[i].saldo);
            contador++;
        }
    }

    if (contador == 0)
    {
        printf("Nenhuma conta encontrada para o cliente informado.\n");
    }
}

// Função para excluir a conta com menor saldo
void excluirContaMenorSaldo(Conta contas[], int *numContas)
{
    if (*numContas == 0)
    {
        printf("Não existem contas cadastradas.\n");
        return;
    }

    int indiceMenorSaldo = 0;

    for (int i = 1; i < *numContas; i++)
    {
        if (contas[i].saldo < contas[indiceMenorSaldo].saldo)
        {
            indiceMenorSaldo = i;
        }
    }

    printf("Conta %d excluída.\n", contas[indiceMenorSaldo].numero);

    for (int i = indiceMenorSaldo; i < *numContas - 1; i++)
    {
        contas[i] = contas[i + 1];
    }

    (*numContas)--;
}

// Função principal
int main()
{
    Conta contas[MAX_CONTAS];
    int numContas = 0;
    int opcao;

    do
    {
        printf("Menu de opções:\n");
        printf("1. Cadastrar contas\n");
        printf("2. Visualizar todas as contas de determinado cliente\n");
        printf("3. Excluir a conta com menor saldo\n");
        printf("Para sair\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarContas(contas, &numContas);
            break;
        case 2:
            visualizarContasCliente(contas, numContas);
            break;
        case 3:
            excluirContaMenorSaldo(contas, &numContas);
            break;
        case 4:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("\n");
    } while (opcao != 4);

    return 0;
}
