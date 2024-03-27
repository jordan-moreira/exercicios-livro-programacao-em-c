#include <stdio.h>

int main()
{
    float sal_minimo, vlr_kw, acressimo, total, valor_gasto, faturamento_empresa;
    faturamento_empresa = 0;

    int quant_kw, tipo_consumidor;
    int cont, i = 1;

    printf("Calculo de cosnumo KW \n");

    do
    {
        quant_kw = 0;

        printf("CONSUMIDOR %d \n", i);
        printf("    Digite o valor do salário minimo: ");
        scanf("%f", &sal_minimo);
        vlr_kw = sal_minimo / 8;

        printf("    Digite a quantidade de KW gasto: ");
        scanf("%d", &quant_kw);
        printf("    Digite sua categoria (1. Residencial | 2. Comercial | 3. Industrial): ");
        scanf("%d", &tipo_consumidor);

        valor_gasto = quant_kw * vlr_kw;

        // Tipos de consumidores
        if (tipo_consumidor == 1)
        {
            acressimo = valor_gasto * 0.05;
            total = valor_gasto + acressimo;
        }
        else if (tipo_consumidor == 2)
        {
            acressimo = valor_gasto * 0.1;
            total = valor_gasto + acressimo;
        }
        else if (tipo_consumidor == 3)
        {
            acressimo = valor_gasto * 0.15;
            total = valor_gasto + acressimo;
        }
        else
        {
            printf("Valor inválido. \n");
        }

        if (total >= 500 && total <= 1000)
        {
            cont++;
        }

        printf("CONTA \n");
        printf("    Valor gasto: R$ %.2f. \n", valor_gasto);
        printf("    Acressimo: R$ %.2f; \n", acressimo);
        printf("    Total a ser pago: R$ %.2f. \n", total);

        faturamento_empresa = faturamento_empresa + total;

        printf("\n Digite qualquer número para continuar ou 0 para sair: ");
        scanf("%d", &quant_kw);
        printf("___________________________________________________________\n");

        i++;
    } while (quant_kw != 0);

    printf("Faturamento total da empresa será de R$ %.2f. \n", faturamento_empresa);
    printf("Quantidade de pessoas quem paga entre R$ 500,00 e R$ 1000,00: %d \n", cont);
}
