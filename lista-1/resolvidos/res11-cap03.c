#include <stdio.h>
#include <math.h>

// esse codigo recebe um numero qualquer e devolve sua raiz quadrada, sua raiz cubica, ele elevado ao quadrado e elevado ao cubo

int main()
{

    // declaracao das variaveis
    int numeroBase;
    double raizQuadrada, raizCubica, aoQuadrado, aoCubo;

    // captura do valor do numero base
    printf("digite o numero a ser calculado: ");
    scanf("%d%*c", &numeroBase);

    // calculo quadrado, cubo, raiz quadrada e raiz cubica do numero base
    aoQuadrado = pow(numeroBase, 2);
    aoCubo = pow(numeroBase, 3);
    raizQuadrada = sqrt(numeroBase);
    raizCubica = cbrt(numeroBase);

    printf("a raiz quadrada do numero e %lf, a raiz cubica e %lf,o numero ao quadrado e %lf e o numero ao cubo e %lf", raizQuadrada, raizCubica, aoQuadrado, aoCubo);
}