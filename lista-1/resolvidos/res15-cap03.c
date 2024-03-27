#include <stdio.h>

// esse codigo recebe um preco de fabrica de um veiculo, o percentual de lucro da distribuidora e o percentual de impostos cobrados e calcula o lucro da distribuidora o valor dos imposto e oo preco final do veiculo

int main()
{

    // declaracao das variaveis
    float precoFabrica, percentualLucro, percentualImposto, precoFinal, valorImposto, valorLucro;

    // captura dos valores de preco de fabrica percentual de lucro e percentual de imposto
    printf("digite o preco de fabrica do veiculo: ");
    scanf("%f%*c", &precoFabrica);

    printf("digite o percentual de lucro da distribuidora: ");
    scanf("%f%*c", &percentualLucro);

    printf("digite o percentual de impostos sobre o veiculo: ");
    scanf("%f%*c", &percentualImposto);

    // calcula o preco final do veiculo e o valor cobrado de impostos e lucro da distribuidora e envia o resultado
    valorImposto = precoFabrica * percentualImposto / 100;
    valorLucro = precoFabrica * percentualLucro / 100;
    precoFinal = precoFabrica + valorImposto + valorLucro;

    printf("o lucro da distribuidora sobre o veiculo com preco de fabrica de  %f e de %f ,\no valor de impostos cobrados e de %f ,\nsendo assim o preco final do veiculo e de %f", precoFabrica, valorLucro, valorImposto, precoFinal);
}