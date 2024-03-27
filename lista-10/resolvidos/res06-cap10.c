#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 15
#define MESES 3
#define PONTOS_POR_100_REAIS 1

struct Funcionario
{
    char nome[100];
    float vendas[MESES];
    int pontuacaoTotal;
};

void cadastrarFuncionarios(struct Funcionario funcionarios[])
{
    printf("Cadastro de funcionarios:\n");
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);
        for (int j = 0; j < MESES; j++)
        {
            printf("Vendas no mes %d: R$ ", j + 1);
            scanf("%f", &funcionarios[i].vendas[j]);
        }
        printf("\n");
    }
}

void calcularPontuacaoIndividual(struct Funcionario *funcionario)
{
    int pontuacaoTotal = 0;
    for (int i = 0; i < MESES; i++)
    {
        pontuacaoTotal += funcionario->vendas[i] / 100.0 * PONTOS_POR_100_REAIS;
    }
    funcionario->pontuacaoTotal = pontuacaoTotal;
}

void calcularPontuacaoGeral(struct Funcionario funcionarios[], int pontuacaoGeral[])
{
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        for (int j = 0; j < MESES; j++)
        {
            pontuacaoGeral[j] += funcionarios[i].vendas[j] / 100.0 * PONTOS_POR_100_REAIS;
        }
    }
}

void mostrarPontuacaoGeral(int pontuacaoGeral[])
{
    printf("Pontuacao geral de todos os funcionarios a cada mes:\n");
    for (int i = 0; i < MESES; i++)
    {
        printf("Mes %d: %d pontos\n", i + 1, pontuacaoGeral[i]);
    }
    printf("\n");
}

void encontrarMaiorPontuacao(struct Funcionario funcionarios[])
{
    int maiorPontuacao = -1;
    char funcionarioComMaiorPontuacao[100];
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        if (funcionarios[i].pontuacaoTotal > maiorPontuacao)
        {
            maiorPontuacao = funcionarios[i].pontuacaoTotal;
            strcpy(funcionarioComMaiorPontuacao, funcionarios[i].nome);
        }
    }
    printf("Maior pontuacao atingida nos tres meses: %d pontos\n", maiorPontuacao);
    printf("Funcionario com a maior pontuacao: %s\n", funcionarioComMaiorPontuacao);
}

float calcularValorTotalVendido(struct Funcionario funcionarios[])
{
    float valorTotal = 0.0;
    for (int i = 0; i < MAX_FUNCIONARIOS; i++)
    {
        for (int j = 0; j < MESES; j++)
        {
            valorTotal += funcionarios[i].vendas[j];
        }
    }
    return valorTotal;
}
