#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NUM_PRODUTOS 50
#define TAM_DESCRICAO 100

struct Produto
{
    int codigo;
    char descricao[TAM_DESCRICAO];
    float valorUnitario;
    int quantidadeEstoque;
};

int buscarProdutoPorCodigo(struct Produto produtos[], int codigo)
{
    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        if (produtos[i].codigo == codigo)
        {
            return i;
        }
    }

    return -1;
}

void alterarProduto(struct Produto produtos[])
{
    int codigo;

    printf("Informe o codigo do produto a ser alterado: ");
    scanf("%d", &codigo);

    int indice = buscarProdutoPorCodigo(produtos, codigo);

    if (indice != -1)
    {
        printf("Produto encontrado.\n");

        printf("Nova descricao: ");
        scanf(" %[^\n]s", produtos[indice].descricao);

        printf("Novo valor unitario: ");
        scanf("%f", &produtos[indice].valorUnitario);

        printf("Nova quantidade em estoque: ");
        scanf("%d", &produtos[indice].quantidadeEstoque);

        printf("Produto alterado com sucesso.\n");
    }
    else
    {
        printf("Produto nao encontrado.\n");
    }
}

void mostrarProdutosPorLetra(struct Produto produtos[], char letra)
{
    printf("Produtos com descricao iniciada pela letra '%c':\n", letra);

    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        if (produtos[i].descricao[0] == letra)
        {
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor unitario: R$ %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade em estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("\n");
        }
    }
}

void mostrarProdutosEstoqueBaixo(struct Produto produtos[])
{
    printf("Produtos com quantidade em estoque inferior a cinco unidades:\n");

    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        if (produtos[i].quantidadeEstoque < 5)
        {
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor unitario: R$ %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade em estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("\n");
        }
    }
}

int main()
{
    struct Produto produtos[NUM_PRODUTOS];

    printf("Cadastro de produtos:\n");
    for (int i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("Dados do produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Descricao: ");
        scanf(" %[^\n]s", produtos[i].descricao);

        printf("Valor unitario: ");
        scanf("%f", &produtos[i].valorUnitario);

        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidadeEstoque);

        printf("\n");
    }

    int opcao;
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1. Alterar dados de um produto\n");
        printf("2. Mostrar produtos por letra inicial da descricao\n");
        printf("3. Mostrar produtos com quantidade em estoque inferior a cinco unidades\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            alterarProduto(produtos);
            break;
        case 2:
            char letra;
            printf("Digite a letra inicial da descricao: ");
            scanf(" %c", &letra);
            mostrarProdutosPorLetra(produtos, letra);
            break;
        case 3:
            mostrarProdutosEstoqueBaixo(produtos);
            break;
        case 4:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    } while (opcao != 4);

    return 0;
}
