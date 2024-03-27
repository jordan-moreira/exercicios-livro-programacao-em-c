#include <stdio.h>

// esse codigo recebe 4 valores e devolve a soma deles

int main()
{

    //   declaracao das variaveis
    int primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, resultado;

    // captura dos numeros a serem somados
    printf("Digite o primeiro a ser somado. ");
    scanf("%d%*c", &primeiroNumero);

    printf("Digite o segundo a ser somado. ");
    scanf("%d%*c", &segundoNumero);

    printf("Digite o terceiro a ser somado. ");
    scanf("%d%*c", &terceiroNumero);

    printf("Digite o quarto a ser somado. ");
    scanf("%d%*c", &quartoNumero);

    // soma e envio do resultado
    printf("a soma dos numeros %d,%d,%d,%d e:", primeiroNumero, segundoNumero, terceiroNumero, quartoNumero);

    resultado = primeiroNumero + segundoNumero + terceiroNumero + quartoNumero;
    printf("%d", resultado);
}
