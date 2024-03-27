#include <stdio.h>
#include <math.h>

// o codigo recebe o valor de um angulo formado por uma escada apoiada na parede e a distancia entre a ponta da escada apoiada e o chao, retornandoo tamaho da escada

int main()
{
    // declaracao das variaveis
    float anguloEscada, alturaParede, tamanhoEscada;

    // capturando os valores do angulo formado e da altura da ponta da escada na parede
    printf("digite o angulo formado pela escada em graus: ");
    scanf("%f%*c", &anguloEscada);

    printf("digite a altura da ponta da escada na parede em metros: ");
    scanf("%f%*c", &alturaParede);

    // calculando o tamanho da escado e enviando para o usuario
    tamanhoEscada = alturaParede / sin(anguloEscada * 3.14 / 180);

    printf("o tamanho da escada e de %f metros", tamanhoEscada);
}
