#include <stdio.h>

// esse codigo recebe o ano de nascimento do usuario e o ano atual retornando a idade do usuario em anos, meses, semanas e dias

int main()
{
    int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;

    printf("digite o seu ano de nascimento: ");
    scanf("%d%*c", &anoNascimento);

    printf("digite o ano atual: ");
    scanf("%d%*c", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = idadeAnos * 12;
    idadeSemanas = idadeAnos * 52;
    idadeDias = idadeAnos * 365;

    printf("sua idade e de %d anos ou %d meses ou %d semanas ou %d dias", idadeAnos, idadeMeses, idadeSemanas, idadeDias);
}