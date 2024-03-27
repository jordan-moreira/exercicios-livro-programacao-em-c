#include <stdio.h>

// esse codigo recebe um valor de deposito e um valor de taxa em porcentagem devolvendo esse valor com o acresimo da taxa

int main()
{

    // declaracao das variaveis
    int valorDeposito;
    float valorRendimento, taxa, valorTotal;

    // captura do valor do deposito e da taxa
    printf("digite o valor do deposito: ");
    scanf("%d%*c", &valorDeposito);

    printf("digite a taxa de juros: ");
    scanf("%f%*c", &taxa);

    // calcula o rendimento,o valor final e envia o resultado
    valorRendimento = taxa / 100 * valorDeposito;
    valorTotal = valorDeposito + valorRendimento;

    printf("o valor do rendimento e de %f e o valor total e de %f", valorRendimento, valorTotal);
}