#include <stdio.h>

// esse codigo recebe uma altura qualquer e a altura de degraus de escada retornando quantos degraus sao necessarios para alcancar a altura digitada

int main()
{
    // declarando as variaveis
    float alturaDesejada, alturaDegraus, degrausNecessarios;

    // capturando os valores da altura desejada e altura do degrau
    printf("digite a altura que vc deseja alcancar em metros: ");
    scanf("%f%*c", &alturaDesejada);

    printf("digite a altura dos degraus em metros: ");
    scanf("%f%*c", &alturaDegraus);

    // calculando a quatidade de degraus necessarios enviando para o usuario
    degrausNecessarios = alturaDesejada / alturaDegraus;

    printf("serao necessarios %f degraus para vc alcancar a altura de %fm", degrausNecessarios, alturaDesejada);
}