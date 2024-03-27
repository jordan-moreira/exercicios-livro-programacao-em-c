#include <stdio.h>

int main()
{

    int i, quant_parcela, per_juros, juros;
    float valor_divida, valor_parcela, total;

    per_juros = 10;
    quant_parcela = 3;

    printf("Digite o valor da divida: ");
    scanf("%f", &valor_divida);
    printf("VALOR DA DIVIDA: R$ %.2f \n\n", valor_divida);

    printf("QTDE de parcela: 1 \n");
    printf("Juros: 0%% \n");
    printf("Valor da parcela: R$ %.2f \n\n", valor_divida);

    for (i = 1; i <= 12; i = i = i + 3)
    {
        juros = valor_divida * per_juros / 100;
        total = valor_divida + juros;
        valor_parcela = total / quant_parcela;

        printf("QTDE de parcela: %d \n", quant_parcela);
        printf("Juros: %d%% \n", per_juros);
        printf("Valor da parcela: R$ %.2f \n", valor_parcela);
        printf("Valor dos juros: %d \n", juros);
        printf("Valor total: R$ %.2f \n\n", total);

        quant_parcela = quant_parcela + 3;
        per_juros = per_juros + 5;
    }
}