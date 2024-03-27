#include <stdio.h>

// esse codigo recebe 3 valores e 3 pesos para seus respectivos valores e calcula a media ponderada entre eles

int main()
{

    // declaracao das variaveis
    int pesoNota1, pesoNota2, pesoNota3;
    float Nota1, Nota2, Nota3, media;

    // captura das notas e pesos
    printf("digite a primeira nota: ");
    scanf("%f%*c", &Nota1);
    printf("e seu peso: ");
    scanf("%d%*c", &pesoNota1);

    printf("digite a segunda nota: ");
    scanf("%f%*c", &Nota2);
    printf("e seu peso: ");
    scanf("%d%*c", &pesoNota2);

    printf("digite a terceira nota: ");
    scanf("%f%*c", &Nota3);
    printf("e seu peso: ");
    scanf("%d%*c", &pesoNota3);

    // calculo da media e envio do resultado
    media = (pesoNota1 * Nota1 + pesoNota2 * Nota2 + pesoNota3 * Nota3) / (pesoNota1 + pesoNota2 + pesoNota3);

    printf("a media ponderada e: %f", media);
}