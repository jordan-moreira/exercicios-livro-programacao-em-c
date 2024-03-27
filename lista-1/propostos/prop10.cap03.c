#include <stdio.h>
#include <math.h>

// esse codigo recebe o valor do lado de um quadrado e retorna a sua area

int main()
{
    int lado, resultado;

    printf("digite o tamanho do lado do quadrado: ");
    scanf("%d%*c", &lado);

    resultado = pow(lado, lado);

    printf("a area do quadrado de lado %d e de %d", lado, resultado);
}