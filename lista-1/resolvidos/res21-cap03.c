#include <stdio.h>

//  o codigo recebe o tamanho de uma escada qualquer e a altura de um quadro na parede, retornando a distancia em que a escada deve ser colocada da parede pra conseguir alcancar o quadro

int main()
{
    // declarando as variaveis
    float tamanhoEscada, alturaQuadro, distanciaEscada;

    // captura dos valores da altura do quadro e do tamanh da escada
    printf("digite a altura em que o quadro esta: ");
    scanf("%f%*c", &alturaQuadro);

    printf("digite o tamanho da escada: ");
    scanf("%f%*c", &tamanhoEscada);

    // calculo da distancia necessaria entre escada e parede e envio
    distanciaEscada = sqrt(pow(tamanhoEscada, 2) - pow(alturaQuadro, 2));

    printf("a escada deve estar a %f metros da parede", distanciaEscada);
}