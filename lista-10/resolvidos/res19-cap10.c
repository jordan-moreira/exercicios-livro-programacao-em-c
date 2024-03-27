#include <stdio.h>
#include <string.h>

#define MAX_RESERVAS 60
#define MAX_AVIOES 4

struct Reserva
{
    int numeroAviao;
    char passageiro[100];
};

void cadastrarAvioes(int avioes[])
{
    printf("Digite o numero dos quatro avioes disponiveis:\n");
    for (int i = 0; i < MAX_AVIOES; i++)
    {
        scanf("%d", &avioes[i]);
    }
}

void cadastrarLugares(int lugares[])
{
    printf("Digite o numero de lugares disponiveis em cada aviao cadastrado:\n");
    for (int i = 0; i < MAX_AVIOES; i++)
    {
        scanf("%d", &lugares[i]);
    }
}

int encontrarAviao(int avioes[], int numeroAviao)
{
    for (int i = 0; i < MAX_AVIOES; i++)
    {
        if (avioes[i] == numeroAviao)
        {
            return i;
        }
    }
    return -1;
}

void realizarReserva(struct Reserva reservas[], int avioes[], int lugares[])
{
    int numeroAviao;
    char nomePassageiro[100];

    printf("Digite o numero do aviao: ");
    scanf("%d", &numeroAviao);

    int indiceAviao = encontrarAviao(avioes, numeroAviao);

    if (indiceAviao == -1)
    {
        printf("Aviao nao encontrado.\n");
        return;
    }

    printf("Digite o nome do passageiro: ");
    scanf("%s", nomePassageiro);

    if (lugares[indiceAviao] > 0 && MAX_RESERVAS > 0)
    {
        strcpy(reservas[MAX_RESERVAS - lugares[indiceAviao]].passageiro, nomePassageiro);
        reservas[MAX_RESERVAS - lugares[indiceAviao]].numeroAviao = numeroAviao;
        lugares[indiceAviao]--;
        MAX_RESERVAS--;
        printf("Reserva confirmada.\n");
    }
    else
    {
        printf("Voo lotado.\n");
    }
}

void consultarPorAviao(struct Reserva reservas[], int numeroAviao)
{
    printf("Reservas do aviao %d:\n", numeroAviao);
    for (int i = 0; i < MAX_RESERVAS; i++)
    {
        if (reservas[i].numeroAviao == numeroAviao)
        {
            printf("Passageiro: %s\n", reservas[i].passageiro);
        }
    }
}

void consultarPorPassageiro(struct Reserva reservas[], char nomePassageiro[])
{
    printf("Reservas do passageiro %s:\n", nomePassageiro);
    for (int i = 0; i < MAX_RESERVAS; i++)
    {
        if (strcmp(reservas[i].passageiro, nomePassageiro) == 0)
        {
            printf("Aviao: %d\n", reservas[i].numeroAviao);
        }
    }
}

int main()
{
    int avioes[MAX_AVIOES];
    int lugares[MAX_AVIOES];
    struct Reserva reservas[MAX_RESERVAS];

    int opcao;
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1. Cadastrar o numero dos avioes\n");
        printf("2. Cadastrar o numero de lugares disponiveis em cada aviao\n");
        printf("3. Reservar passagem\n");
        printf("4. Consultar por aviao\n");
        printf("5. Consultar por passageiro\n");
        printf("6. Finalizar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarAvioes(avioes);
            break;
        case 2:
            cadastrarLugares(lugares);
            break;
        case 3:
            realizarReserva(reservas, avioes, lugares);
            break;
        case 4:
            printf("Digite o numero do aviao: ");
            int numeroAviao;
            scanf("%d", &numeroAviao);
            consultarPorAviao(reservas, numeroAviao);
            break;
        case 5:
            printf("Digite o nome do passageiro: ");
            char nomePassageiro[100];
            scanf("%s", nomePassageiro);
            consultarPorPassageiro(reservas, nomePassageiro);
            break;
        case 6:
            printf("Programa finalizado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (opcao != 6);

    return 0;
}
