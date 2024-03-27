#include <stdio.h>

// o codigo recebe o preco de um evento e o valor do ingresso retornando quantos ingressos sao necessario vender para cobrir o preco do evento

int main()
{
    float precoEspetaculo, valorIngresso, quantidadeIngressos;

    printf("digite o preco do espetaculo a ser feito: ");
    scanf("%f%*c", &precoEspetaculo);

    printf("digite o valor do ingresso: ");
    scanf("%f%*c", &valorIngresso);

    quantidadeIngressos = precoEspetaculo / valorIngresso;

    printf("sera necessario vender %.0f ingressos para cobrir o preco do espetaculo", quantidadeIngressos);
}