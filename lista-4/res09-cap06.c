#include <stdio.h>
#include <string.h>


int main() {
    int TAM = 12;
    int opc, opc_consultar;
    int quant_lugares[TAM], num_voo[TAM];
    int i, j;


    printf("\t\tCONTROLE DE PASSAGENS \n\n");

    printf("INFORMAÇÕES SOBRE OS VOOS \n");

    for (i = 0; i < TAM; i++) {
        printf("\tDigite a quantidade de lugares do avião %d: ", i + 1);
        scanf("%d", &quant_lugares[i]);

        printf("\tDigite os números dos voos: ");
        scanf("%d", &num_voo[i]);
        printf("\n");
    }

    do {
        printf("-------------------------------------------------------------\n");
        printf("MENU DE OPÇÕES \n");
        printf("1. Consultar \n");
        printf("2. Efetuar reserva \n");
        printf("3. Sair \n\n");

        do { //O usário não poderá digitar valores inválidos.
            printf("Digite a opção desejada: ");
            scanf("%d", &opc);
            if (opc <= 0 || opc > 3) {
                printf("Opção inválida. Por favor digite uma opção válida para prosseguir. \n\n");
            }
        } while (opc <= 0 || opc > 3);

        printf("-------------------------------------------------------------\n");

        switch (opc) {
            case 1:
                printf("VOCÊ DESEJA: \n");
                printf("1. Consultar por número de voo \n");
                printf("2. Consultar por origem \n");
                printf("3. Consultar por destino \n\n");
                printf("Digite a opção desejada: ");
                scanf("%d", &opc_consultar);
                switch (opc_consultar) {
                    case 1:
                        break;

                    case 2:
                        break;

                    case 3:
                        break;
                }

                break;

            case 2:

                break;

            case 3:
                printf("Programa encerrado. \n");
                break;
        }
    } while (opc != 3);

}
