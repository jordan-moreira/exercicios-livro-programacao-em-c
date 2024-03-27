#include <stdio.h>
#include <stdbool.h>

#define MAX_VENDEDORES 4
#define MESES 12

struct Vendedor
{
    int codigo;
    float vendas[MESES];
};

void cadastrarVendedor(struct Vendedor vendedores[])
{
    int codigo;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    // Verificar se o código já foi utilizado
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigo)
        {
            printf("Ja existe um vendedor com esse codigo.\n");
            return;
        }
    }

    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == 0)
        {
            vendedores[i].codigo = codigo;
            printf("Vendedor cadastrado com sucesso.\n");
            return;
        }
    }

    printf("Nao ha espaco para cadastrar mais vendedores.\n");
}

bool verificarVendaExistente(struct Vendedor vendedores[], int codigoVendedor, int mes)
{
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor && vendedores[i].vendas[mes] != 0.0)
        {
            return true;
        }
    }
    return false;
}

void cadastrarVenda(struct Vendedor vendedores[])
{
    int codigoVendedor, mes;
    float valor;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigoVendedor);

    // Verificar se o vendedor existe
    bool vendedorExiste = false;
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            vendedorExiste = true;
            break;
        }
    }

    if (!vendedorExiste)
    {
        printf("Vendedor nao encontrado.\n");
        return;
    }

    printf("Mes (1-12): ");
    scanf("%d", &mes);
    mes--; // Converter para índice do vetor (0-11)

    // Verificar se a venda já foi cadastrada
    if (verificarVendaExistente(vendedores, codigoVendedor, mes))
    {
        printf("Venda ja cadastrada para esse vendedor nesse mes.\n");
        return;
    }

    printf("Valor da venda: ");
    scanf("%f", &valor);

    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            vendedores[i].vendas[mes] = valor;
            printf("Venda cadastrada com sucesso.\n");
            return;
        }
    }
}

void consultarVendasMes(struct Vendedor vendedores[])
{
    int codigoVendedor, mes;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigoVendedor);

    // Verificar se o vendedor existe
    bool vendedorExiste = false;
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            vendedorExiste = true;
            break;
        }
    }

    if (!vendedorExiste)
    {
        ```c
            printf("Vendedor nao encontrado.\n");
        return;
    }

    printf("Mes (1-12): ");
    scanf("%d", &mes);
    mes--; // Converter para índice do vetor (0-11)

    float totalVendas = 0.0;
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            totalVendas = vendedores[i].vendas[mes];
            break;
        }
    }

    printf("Total de vendas do vendedor %d no mes %d: R$ %.2f\n", codigoVendedor, mes + 1, totalVendas);
}

void consultarTotalVendas(struct Vendedor vendedores[])
{
    int codigoVendedor;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigoVendedor);

    // Verificar se o vendedor existe
    bool vendedorExiste = false;
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            vendedorExiste = true;
            break;
        }
    }

    if (!vendedorExiste)
    {
        printf("Vendedor nao encontrado.\n");
        return;
    }

    float totalVendas = 0.0;
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].codigo == codigoVendedor)
        {
            for (int j = 0; j < MESES; j++)
            {
                totalVendas += vendedores[i].vendas[j];
            }
            break;
        }
    }

    printf("Total de vendas do vendedor %d: R$ %.2f\n", codigoVendedor, totalVendas);
}

void encontrarVendedorMaisVendeuMes(struct Vendedor vendedores[])
{
    int mes;

    printf("Mes (1-12): ");
    scanf("%d", &mes);
    mes--; // Converter para índice do vetor (0-11)

    float maiorVenda = -1.0;
    int vendedorMaisVendeu = -1;

    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        if (vendedores[i].vendas[mes] > maiorVenda)
        {
            maiorVenda = vendedores[i].vendas[mes];
            vendedorMaisVendeu = vendedores[i].codigo;
        }
    }

    printf("Numero do vendedor que mais vendeu no mes %d: %d\n", mes + 1, vendedorMaisVendeu);
}

void encontrarMesMaisVendas(struct Vendedor vendedores[])
{
    float totalVendasMes[MESES] = {0.0};
    int mesMaisVendas = -1;
    float maiorVendaMes = -1.0;

    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        for (int j = 0; j < MESES; j++)
        {
            totalVendasMes[j] += vendedores[i].vendas[j];
        }
    }

    for (int i = 0; i < MESES; i++)
    {
        if (totalVendasMes[i] > maiorVendaMes)
        {
            maiorVendaMes = totalVendasMes[i];
            mesMaisVendas = i;
        }
    }

    printf("Mes com mais vendas: %d\n", mesMaisVendas + 1);
}

int main()
{
    struct Vendedor vendedores[MAX_VENDEDORES];

    // Inicializar vendedores
    for (int i = 0; i < MAX_VENDEDORES; i++)
    {
        vendedores[i].codigo = 0;
        for (int j = 0; j < MESES; j++)
        {
            vendedores[i].vendas[j] = 0.0;
        }
    }

    int opcao;
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1. Cadastrar vendedor\n");
        printf("2. Cadastrar venda\n");
        printf("3. Consultar vendas de um vendedor em determinado mes\n");
        printf("4. Consultar o total das vendas de determinado vendedor\n");
        printf("5. Mostrar o numero do vendedor que mais vendeu em determinado mes\n");
        printf("6. Mostrar o numero do mes com mais vendas\n");
        printf("7. Finalizar o programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarVendedor(vendedores);
            break;
        case 2:
            cadastrarVenda(vendedores);
            break;
        case 3:
            consultarVendasMes(vendedores);
            break;
        case 4:
            consultarTotalVendas(vendedores);
            break;
        case 5:
            encontrarVendedorMaisVendeuMes(vendedores);
            break;
        case 6:
            encontrarMesMaisVendas(vendedores);
            break;
        case 7:
            printf("Programa finalizado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (opcao != 7);

    return 0;
}
