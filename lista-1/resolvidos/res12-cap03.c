#include <stdio.h>
#include <math.h>

// esse codigo recebe dois numero quaisquer e devolve o resultado do primeiro elevado pelo segundo

int main()
{

    // declaracao das variaveis
    int numeroBase, expoente, resultado;

    // captura do valor do numero base e do expoente
    printf("digite o valor da base da potencia: ");
    scanf("%d%*c", &numeroBase);
    printf("agora digite o valor do expoente: ");
    scanf("%d%*c", &expoente);

    // calculo da potencia e envio do resultado
    resultado = pow(numeroBase, expoente);

    printf("a potencia de %d elevado a %d e %d", numeroBase, expoente, resultado);
}