#include <stdio.h>

int main()
{
    int parcela;

    float vlr_veiculo, preco_prazo, preco_avista, juros;
    juros = 3;

    printf("Digite o valor do veículo: ");
    scanf("%f", &vlr_veiculo);

    preco_avista = vlr_veiculo - (vlr_veiculo * 0.2);
    printf("Preco a vista do veiculo R$ %.2f. \n\n", preco_avista);

    // Calculo das parcelas
    for (parcela = 6; parcela <= 60; parcela += 6)
    {
        printf("%d Parcelas \n", parcela);
        preco_prazo = vlr_veiculo + (vlr_veiculo * juros / 100);
        printf("    Total: R$ %.2f. \n", preco_prazo);
        printf("------------------------------------------ \n");
        juros += 3;
    }
}
