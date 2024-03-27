#include <stdio.h>

int main() {
    char acao;
    float preco_compra, preco_venda, lucro, lucro_total;
    int i, cont1, cont2;
    i = 1;
    cont1 = 0;
    cont2 = 0;

    printf("Digite qualquer letra para entrar com uma ação ou F para sair. \n");
    do {
        printf("\n %dº Ação \n", i);
        printf("    Digite o tipo de ação: ");
        scanf(" %c", &acao);

        if (acao == 'F') {
            break;
        }

        printf("    Digite o valor de compra: ");
        scanf("%f", &preco_compra);
        printf("    Digite o valor de venda: ");
        scanf("%f", &preco_venda);

        lucro = preco_venda - preco_compra;
        if (lucro > 0) {
            printf("    Seu lucro será de R$ %.2f \n", lucro);
        } else {
            printf("    Você terá um prejuizo de R5 %.2f \n", lucro * (-1));
        }

        if (lucro > 1000) {
            cont1++;
        } else if (lucro < 200) {
            cont2++;
        }
        if (acao != 'F') {
            lucro_total += lucro;
            i++;
        }
    } while (acao != 'F');

    printf("DADOS FINAIS \n");
    printf("    Quantidade de ações com lucro superior a R$ 1000,00: %d. \n", cont1);
    printf("    Quantidade de ações com lucro inferior a R$ 200,00: %d. \n", cont2);
    printf("    Lucro total da empresa será de R$ %.2f. \n", lucro_total);


}
