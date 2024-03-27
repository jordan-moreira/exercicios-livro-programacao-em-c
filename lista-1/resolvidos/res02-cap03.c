#include <stdio.h>

// esse codigo recebe 3 valores e calcula a media aritmetica entre eles

int main()
{

    // declaracao de variaveis
    float primeiraNota, segundaNota, terceiraNota, media;

    // captura das notas
    printf("Digite a primeira nota: ");
    scanf("%f%*c", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f%*c", &segundaNota);

    printf("Digite a terceira nota: ");
    scanf("%f%*c", &terceiraNota);

    // calculo da media e envio do resultado
    media = (primeiraNota + segundaNota + terceiraNota) / 3;
    printf("a media aritmetica das notas %f,%f,%f e:", primeiraNota, segundaNota, terceiraNota);
    printf("%f", media);
}