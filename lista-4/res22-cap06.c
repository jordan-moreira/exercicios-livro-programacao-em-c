#include <stdio.h>

#define TAM 3

int main() {
    int i, j ,opc, v;
    int cod[TAM], codigo, i_deposito, i_saque;
    float saldo[TAM], vlr_deposito, vlr_saque, soma_saldos = 0;



    for (i = 0; i < TAM; i++) {
        printf("\n%dº Cliente\n", i + 1);

        do {
            printf("\tCodigo da conta: ");
            scanf("%d", &cod[i]);
            v = 0;
            
            for (j = 0; j < TAM; j++) {
                if (cod[i] == cod[j]) {
                    v++;
                }
            }
            if (v > 1) {//Caso o codigo ja existe será solicitado que o usuario digite outro
                printf("\tERRO! Codigo já existente.Favor digite outro. \n");
            }
        } while (v != 1);

        printf("\tDigite seu saldo: ");
        scanf("%f", &saldo[i]);
    }
    printf("\n");
    
    do {
        printf("MENU DE OPÇÕES\n");
        printf("\t1. Efetuar depósito; \n");
        printf("\t2. Efetuar saque; \n");
        printf("\t3. Consultar o ativo bancário; \n");
        printf("\t4. Finalizar programa; \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opc);

        switch (opc) {

            case 1:
                printf("\nOPC 1: DEPÓSITO \n");
                printf("\tDigite o codigo de sua conta: ");
                scanf("%d", &codigo);

                v = 0;
                for (i = 0; i < TAM; i++) {
                    if (codigo == cod[i]) {
                        v++;
                        i_deposito = i;
                    }
                }
                if (v > 0) {
                    printf("\tDigite o valor a ser depositado: ");
                    scanf("%f", &vlr_deposito);
                    saldo[i_deposito] += vlr_deposito;
                    printf("\tNovo saldo: R$ %.2f \n", saldo[i_deposito]);
                } else {
                    printf("\tConta não encontrada. \n");
                }
                break;

            case 2:
                printf("\nOPC 2: SAQUE \n");
                printf("\tDigite o codigo de sua conta: ");
                scanf("%d", &codigo);

                v = 0;
                for (i = 0; i < TAM; i++) {
                    if (codigo == cod[i]) {
                        v++;
                        i_saque = i;
                    }
                }
                if (v > 0) {
                    printf("\tDigite o valor a ser sacado: ");
                    scanf("%f", &vlr_saque);

                    if (vlr_saque > saldo[i_saque]) {
                        printf("\tSaldo insuficiente. \n");
                    } else {
                        saldo[i_saque] = saldo[i_saque] - vlr_saque;
                        printf("\tNovo saldo: R$ %.2f \n", saldo[i_saque]);
                    }
                } else {
                    printf("\tConta não encontrada. \n");
                }
                break;

            case 3:
                printf("\nOPC 3: ATIVO BANCÁRIO \n");
                soma_saldos = 0;
                for (i = 0; i < TAM; i++) {
                    soma_saldos += saldo[i];
                }
                printf("\tA soma de todos os saldos bancários é de R$ %.2f. \n", soma_saldos);
                break;
                
            case 4:
                printf("Programa encerrado. \n");
                break;

            default:
                printf("\nOpção inválida. \n");
        }
        printf("-------------------------------------------------------\n");
    } while (opc != 4);

}