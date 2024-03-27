#include <stdio.h>

int main()
{

    float novoSalario, percentual, aumento;
    int anoAtual;
    int cont = 1;
    float salario = 1000;

    printf("Calculo de salario \n\n");
    printf(" Salario inicial de R$ 1000,00 \n");
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    salario = 1000;
    percentual = 0.015;
    novoSalario = salario * percentual + salario;

    for (cont = 2007; cont <= anoAtual; cont++)
    {

        percentual = percentual * 2;
        aumento = novoSalario * percentual;
        novoSalario = novoSalario + aumento;
    }
    printf("Seu novo salario sera de R$ %.2f \n", novoSalario);
}