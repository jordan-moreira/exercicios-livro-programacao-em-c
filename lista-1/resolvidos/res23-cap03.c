#include <stdio.h>
#include <math.h>

// o codigo recebe um numero real qualquer e retorna a sua parte interira, a parte fracionaria e o numero arredondado

int main(int argc, char **argv)
{
    // decalaracao das variaveis
    float numeroReal, parteFracionaria, numeroArredondado;
    int parteInteira;

    // captura do numero real
    printf("digite um numero real qualquer: ");
    scanf("%f%*c", &numeroReal);

    // calculos necessarios e envio
    parteInteira = trunc(numeroReal);
    parteFracionaria = numeroReal - parteInteira;
    numeroArredondado = round(numeroReal);

    printf("a parte inteira do numero %f e, %d a fracionaria e %f , e esse numero arredondado e %f", numeroReal, parteInteira, parteFracionaria, numeroArredondado);
}