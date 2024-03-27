#include <stdio.h>

// esse codigo recebe o valor do salario depositado e os valores de dois cheques a serem descontados retornando o saldo restante

int main()
{
    // declaracao das variaveis
    int salario, cheque1, cheque2, saldo;
    float cpmf;

    // captura dos valores do salario depositado, do primeiro cheque e do segundo
    printf("digite o valor do salario depositado: ");
    scanf("%d%*c", &salario);

    printf("digite o valor do primeiro cheque a ser descontado:");
    scanf("%d%*c", &cheque1);

    printf("agora digite o valor do segundo cheque a ser descontado: ");
    scanf("%d%*c", &cheque2);

    // calculo do saldo na conta e envio do resultado
    cpmf = 1.0038;
    saldo = salario - cheque1 * cpmf - cheque2 * cpmf;

    printf("o seu saldo e de %d reais", saldo);
}