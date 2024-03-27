#include <stdio.h>

// esse codigo recebe o ano de nascimento e o ano atual calculando a idade atual do usuario e sua idade em 2050

int main()
{

    // declaracao das variaveis
    int anoNascimento, anoAtual, idadeAtual, idadeFutura;

    // captura do ano de nascimento
    printf("digite seu ano de nascimento: ");
    scanf("%d%*c", &anoNascimento);
    printf("digite o ano atual: ");
    scanf("%d%*c", &anoAtual);

    // calculo da idade atual e futura em 2050 e envio do resultado
    idadeAtual = anoAtual - anoNascimento;
    idadeFutura = 2050 - anoNascimento;

    printf("a sua idade e de %d anos , e em 2050 vc tera %d anos de idade", idadeAtual, idadeFutura);
}