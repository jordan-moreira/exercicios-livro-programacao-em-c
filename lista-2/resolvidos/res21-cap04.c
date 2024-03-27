#include <stdio.h>

// esse codigo pode receber o codigo de estado, o peso e o codigo de uma carga qualquer e retornar seu peso em Kg seu preco em relacao ao peso o valor de imposto a ser cobrado em relacao ao codigo de estado e o valor total da carga

int main()
{
    int codigoEstado, pesoCargaT, pesoCargaKg, codigoCarga;
    float precoCarga, imposto, valorTotal;

    printf("digite respectivamente o codigo de estados, o peso da carga e o codigo da carga separados por espaco:\n");
    scanf("%d %d %d%*c", &codigoEstado, &pesoCargaT, &codigoCarga);

    pesoCargaKg = pesoCargaT * 1000;
    printf("o peso da carga e de %dKg\n", pesoCargaKg);

    if (codigoCarga >= 10 && codigoCarga <= 20)
    {
        precoCarga = 100 * pesoCargaKg;
    }
    else if (codigoCarga >= 21 && codigoCarga <= 30)
    {
        precoCarga = 250 * pesoCargaKg;
    }
    else
    {
        precoCarga = 340 * pesoCargaKg;
    }

    printf("o preco da carga e de R$%.2f\n", precoCarga);

    switch (codigoEstado)
    {
    case 1:
        imposto = precoCarga * 0.35;
        break;

    case 2:
        imposto = precoCarga * 0.25;
        break;

    case 3:
        imposto = precoCarga * 0.15;
        break;

    case 4:
        imposto = precoCarga * 0.05;
        break;

    case 5:
        imposto = 0;
        break;
    }
    printf("o imposto a ser cobrado e de R$%.2f\n", imposto);

    valorTotal = precoCarga + imposto;
    printf("o valor total transportado e de R$%.2f", valorTotal);
}
