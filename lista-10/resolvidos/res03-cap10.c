#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CLIENTES 15
#define MAX_DOCUMENTOS 30

// Registro para armazenar informações sobre clientes
typedef struct
{
    int cod_cli;
    char nome[50];
    char fone[20];
    char endereco[100];
} Cliente;

// Registro para armazenar informações sobre documentos
typedef struct
{
    int num_doc;
    int cod_cli;
    char data_venc[11];
    char data_pag[11];
    float valor;
    float juros;
} Documento;

// Função para cadastrar um novo cliente
void cadastrarCliente(Cliente clientes[], int *num_clientes)
{
    if (*num_clientes == MAX_CLIENTES)
    {
        printf("Limite máximo de clientes atingido.\n");
        return;
    }

    Cliente novo_cliente;

    printf("Digite o código do cliente: ");
    scanf("%d", &novo_cliente.cod_cli);

    for (int i = 0; i < *num_clientes; i++)
    {
        if (clientes[i].cod_cli == novo_cliente.cod_cli)
        {
            printf("Já existe um cliente com o mesmo código.\n");
            return;
        }
    }

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", novo_cliente.nome);

    printf("Digite o telefone do cliente: ");
    scanf(" %[^\n]", novo_cliente.fone);

    printf("Digite o endereço do cliente: ");
    scanf(" %[^\n]", novo_cliente.endereco);

    clientes[*num_clientes] = novo_cliente;
    (*num_clientes)++;

    printf("Cliente cadastrado com sucesso.\n");
}

// Função para cadastrar um novo documento
void cadastrarDocumento(Documento documentos[], Cliente clientes[], int *num_documentos, int num_clientes)
{
    if (*num_documentos == MAX_DOCUMENTOS)
    {
        printf("Limite máximo de documentos atingido.\n");
        return;
    }

    Documento novo_documento;

    printf("Digite o número do documento: ");
    scanf("%d", &novo_documento.num_doc);

    printf("Digite o código do cliente: ");
    scanf("%d", &novo_documento.cod_cli);

    bool cliente_existe = false;

    for (int i = 0; i < num_clientes; i++)
    {
        if (clientes[i].cod_cli == novo_documento.cod_cli)
        {
            cliente_existe = true;
            break;
        }
    }

    if (!cliente_existe)
    {
        printf("Cliente não encontrado.\n");
        return;
    }

    printf("Digite a data de vencimento (DD/MM/AAAA): ");
    scanf(" %[^\n]", novo_documento.data_venc);

    printf("Digite a data de pagamento (DD/MM/AAAA): ");
    scanf(" %[^\n]", novo_documento.data_pag);

    printf("Digite o valor do documento: ");
    scanf("%f", &novo_documento.valor);

    if (strcmp(novo_documento.data_pag, novo_documento.data_venc) > 0)
    {
        novo_documento.juros = 0.05 * novo_documento.valor;
    }
    else
    {
        novo_documento.juros = 0;
    }

    documentos[*num_documentos] = novo_documento;
    (*num_documentos)++;

    printf("Documento cadastrado com sucesso.\n");
}

// Função para excluir um cliente
void excluirCliente(Cliente clientes[], int *num_clientes, Documento documentos[], int *num_documentos)
{
    intcodigo_cliente;

    printf("Digite o código do cliente a ser excluído: ");
    scanf("%d", &codigo_cliente);

    int indice_cliente = -1;

    for (int i = 0; i < *num_clientes; i++)
    {
        if (clientes[i].cod_cli == codigo_cliente)
        {
            indice_cliente = i;
            break;
        }
    }

    if (indice_cliente == -1)
    {
        printf("Cliente não encontrado.\n");
        return;
    }

    // Verificar se o cliente possui documentos associados
    for (int i = 0; i < *num_documentos; i++)
    {
        if (documentos[i].cod_cli == codigo_cliente)
        {
            printf("O cliente possui documentos associados e não pode ser excluído.\n");
            return;
        }
    }

    // Excluir o cliente movendo as demais posições para a esquerda
    for (int i = indice_cliente; i < (*num_clientes) - 1; i++)
    {
        clientes[i] = clientes[i + 1];
    }

    (*num_clientes)--;

    printf("Cliente excluído com sucesso.\n");
}

// Função para excluir um documento individual
void excluirDocumento(Documento documentos[], int *num_documentos)
{
    int num_documento;

    printf("Digite o número do documento a ser excluído: ");
    scanf("%d", &num_documento);

    int indice_documento = -1;

    for (int i = 0; i < *num_documentos; i++)
    {
        if (documentos[i].num_doc == num_documento)
        {
            indice_documento = i;
            break;
        }
    }

    if (indice_documento == -1)
    {
        printf("Documento não encontrado.\n");
        return;
    }

    // Excluir o documento movendo as demais posições para a esquerda
    for (int i = indice_documento; i < (*num_documentos) - 1; i++)
    {
        documentos[i] = documentos[i + 1];
    }

    (*num_documentos)--;

    printf("Documento excluído com sucesso.\n");
}

// Função para excluir todos os documentos de um cliente
void excluirDocumentosCliente(Documento documentos[], int *num_documentos, int codigo_cliente)
{
    int num_documentos_excluidos = 0;

    for (int i = 0; i < *num_documentos; i++)
    {
        if (documentos[i].cod_cli == codigo_cliente)
        {
            // Excluir o documento movendo as demais posições para a esquerda
            for (int j = i; j < (*num_documentos) - 1; j++)
            {
                documentos[j] = documentos[j + 1];
            }

            (*num_documentos)--;
            num_documentos_excluidos++;
            i--; // Voltar para a posição anterior
        }
    }

    if (num_documentos_excluidos == 0)
    {
        printf("Cliente não encontrado.\n");
    }
    else
    {
        printf("%d documentos excluídos com sucesso.\n", num_documentos_excluidos);
    }
}

// Função para excluir documentos dentro de um período de datas
void excluirDocumentosPorPeriodo(Documento documentos[], int *num_documentos, char data_inicial[11], char data_final[11])
{
    int num_documentos_excluidos = 0;

    for (int i = 0; i < *num_documentos; i++)
    {
        if (strcmp(documentos[i].data_venc, data_inicial) >= 0 && strcmp(documentos[i].data_venc, data_final) <= 0)
        {
            // Excluir o documento movendo as demais posições para a esquerda
            for (int j = i; j < (*num_documentos) - 1; j++)
            {
                documentos[j] = documentos[j + 1];
            }

            (*num_documentos)--;
            num_documentos_excluidos++;
            i--; // Voltar para a posição anterior
        }
    }

    printf("%d documentos excluídos com sucesso.\n", num_documentos_excluidos);
}

// Função para alterar informações sobre os clientes
void alterarCliente(Cliente clientes[], int num_clientes)
{
    int codigo_cliente;

    printf("Digite o código do cliente a ser alterado: ");
    scanf("%d", &codigo_cliente);

    int indice_cliente = -1;

    for (int i = 0; i < num_clientes; i++)
    {
        if (clientes[i].cod_cli == codigo_cliente)
        {
            indice_cliente = i;
            break;
        }
    }

    if (indice_cliente == -1)
    {
        printf("Cliente não encontrado.\n");
        return;
    }

    printf("Digite o novo nome do cliente: ");
    scanf(" %[^\n]", clientes[indice_cliente].nome);

    printf("Digite o novo telefone do cliente: ");
    scanf(" %[^\n]", clientes[indice_cliente].fone);

    printf("Digite o novo endereço do cliente: ");
    scanf(" %[^\n]", clientes[indice_cliente].endereco);

    printf("Cliente alterado com sucesso.\n");
}

// Função para mostrar o total de documentos de um cliente
void mostrarTotalDocumentos(Cliente clientes[], Documento documentos[], int num_clientes, int num_documentos)
{
    int codigo_cliente;

    printf("Digite o código do cliente: ");
    scanf("%d", &codigo_cliente);

    int total_documentos = 0;

    for (int i = 0; i < num_documentos; i++)
    {
        if (documentos[i].cod_cli == codigo_cliente)
        {
            total_documentos++;
        }
    }

    printf("Total de documentos do cliente: %d\n", total_documentos);
}

// Função principal
int main()
{
    Cliente clientes[MAX_CLIENTES];
    Documento documentos[MAX_DOCUMENTOS];
    int num_clientes = 0;
    int num_documentos = 0;
    int opcao;

    do
    {
        printf("Menu de opções:\n");
        printf("a) Cadastrar clientes\n");
        printf("b) Cadastrar documentos\n");
        printf("c) Excluir clientes\n");
        printf("d) Excluir documentos individuais\n");
        printf("e) Excluir documentos por cliente\n");
        printf("f) Excluir documentos por período\n");
        printf("g) Alterar informações sobre os clientes\n");
        printf("h) Mostrar o total de documentos de determinado cliente\n");
        printf("i) Sair\n");

        printf("Digite a opção desejada: ");
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 'a':
            cadastrarCliente(clientes, &num_clientes);
            break;
        case 'b':
            cadastrarDocumento(documentos, clientes, &num_documentos, num_clientes);
            break;
        case 'c':
            excluirCliente(clientes, &num_clientes, documentos, &num_documentos);
            break;
        case 'd':
            excluirDocumento(documentos, &num_documentos);
            break;
        case 'e':
            printf("Digite o código do cliente: ");
            int codigo_cliente;
            scanf("%d", &codigo_cliente);
            excluirDocumentosCliente(documentos, &num_documentos, codigo_cliente);
            break;
        case 'f':
            printf("Digite a data inicial (DD/MM/AAAA): ");
            char data_inicial[11];
            scanf(" %[^\n]", data_inicial);
            printf("Digite a data final (DD/MM/AAAA): ");
            char data_final[11];
            scanf(" %[^\n]", data_final);
            excluirDocumentosPorPeriodo(documentos, &num_documentos, data_inicial, data_final);
            break;
        case 'g':
            alterarCliente(clientes, num_clientes);
            break;
        case 'h':
            mostrarTotalDocumentos(clientes, documentos, num_clientes, num_documentos);
            break;
        case 'i':
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("\n");
    } while (opcao != 'i');

    return 0;
}
