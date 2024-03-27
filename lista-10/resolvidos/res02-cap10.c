#include <stdio.h>
#include <string.h>

#define MAX_SERVICOS 4
#define MAX_DESCRICAO 50
#define MAX_SERVICOS_DIA 3
#define MAX_DIAS 30

// Estrutura para armazenar informações de um serviço prestado
typedef struct
{
    int numero;
    float valor;
    int codigoServico;
    int codigoCliente;
} Servico;

// Estrutura para armazenar informações de um tipo de serviço
typedef struct
{
    int codigo;
    char descricao[MAX_DESCRICAO];
} TipoServico;

// Função para cadastrar os tipos de serviços
void cadastrarTiposServicos(TipoServico tiposServicos[])
{
    for (int i = 0; i < MAX_SERVICOS; i++)
    {
        printf("Digite o código do tipo de serviço %d: ", i + 1);
        scanf("%d", &tiposServicos[i].codigo);
        printf("Digite a descrição do tipo de serviço %d: ", i + 1);
        scanf(" %[^\n]", tiposServicos[i].descricao);
    }

    printf("Tipos de serviços cadastrados com sucesso.\n");
}

// Função para encontrar a descrição de um tipo de serviço pelo código
char *encontrarDescricaoTipoServico(TipoServico tiposServicos[], int codigo)
{
    for (int i = 0; i < MAX_SERVICOS; i++)
    {
        if (tiposServicos[i].codigo == codigo)
        {
            return tiposServicos[i].descricao;
        }
    }

    return NULL;
}

// Função para cadastrar os serviços prestados
void cadastrarServicos(Servico servicos[][MAX_SERVICOS_DIA], TipoServico tiposServicos[], int dia)
{
    if (dia < 1 || dia > MAX_DIAS)
    {
        printf("Dia inválido.\n");
        return;
    }

    int numServicosDia = 0;

    while (numServicosDia < MAX_SERVICOS_DIA)
    {
        int codigoServico;

        printf("Digite o código do serviço prestado (1 a 4): ");
        scanf("%d", &codigoServico);

        if (codigoServico < 1 || codigoServico > MAX_SERVICOS)
        {
            printf("Código de serviço inválido.\n");
            return;
        }

        int codigoCliente;
        float valor;

        printf("Digite o código do cliente: ");
        scanf("%d", &codigoCliente);

        printf("Digite o valor do serviço: ");
        scanf("%f", &valor);

        servicos[dia - 1][numServicosDia].numero = numServicosDia + 1;
        servicos[dia - 1][numServicosDia].valor = valor;
        servicos[dia - 1][numServicosDia].codigoServico = codigoServico;
        servicos[dia - 1][numServicosDia].codigoCliente = codigoCliente;

        numServicosDia++;

        printf("Serviço cadastrado com sucesso.\n");

        if (numServicosDia == MAX_SERVICOS_DIA)
        {
            printf("Limite máximo de serviços cadastrados para o dia atingido.\n");
        }
        else
        {
            printf("Deseja cadastrar mais um serviço para o dia %d? (1 - Sim / 0 - Não): ", dia);
            scanf("%d", &numServicosDia);
        }

        // Função para mostrar os serviços prestados em determinado dia
        void mostrarServicosDia(Servico servicos[][MAX_SERVICOS_DIA], TipoServico tiposServicos[], int dia)
        {
            if (dia < 1 || dia > MAX_DIAS)
            {
                printf("Dia inválido.\n");
                return;
            }

            printf("Serviços prestados no dia %d:\n", dia);

            for (int i = 0; i < MAX_SERVICOS_DIA; i++)
            {
                if (servicos[dia - 1][i].numero > 0)
                {
                    printf("Número do serviço: %d\n", servicos[dia - 1][i].numero);
                    printf("Código do cliente: %d\n", servicos[dia - 1][i].codigoCliente);
                    printf("Valor do serviço: %.2f\n", servicos[dia - 1][i].valor);

                    int codigoServico = servicos[dia - 1][i].codigoServico;
                    char *descricaoServico = encontrarDescricaoTipoServico(tiposServicos, codigoServico);

                    if (descricaoServico != NULL)
                    {
                        printf("Tipo de serviço: %s\n", descricaoServico);
                    }
                }
            }
        }
