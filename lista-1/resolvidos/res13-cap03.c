#include <stdio.h>

// esse codigo recebe um valor de distancia em pes o converte para jardas e em milhas por fim ele apresenta os valores para o usuario

int main()
{

    // declaracao das variaveis
    float quantPes, medPolegadas, medJardas, medMilha;

    // captura da quantidade de pes
    printf("digite a distancia em pes: ");
    scanf("%f%*c", &quantPes);

    // conversoes e envio do resultado
    medPolegadas = quantPes * 12;
    medJardas = quantPes / 3;
    medMilha = medJardas / 1760;

    printf("%f pes e equivalente a %f polegadas, a %f jardas que e igual a %f milhas", quantPes, medPolegadas, medJardas, medMilha);
}