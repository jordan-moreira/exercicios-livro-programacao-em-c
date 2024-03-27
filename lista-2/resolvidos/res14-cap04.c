#include <stdio.h>

// esse codigo recebe o valor do salario do usuario e o retorna com um acresssimo de bonificacao e auxilio escola

int main()
{
    float salarioAtual, novoSalario;

    printf("digite seu salario atual: ");

    if (salarioAtual > 1200)
    {
        novoSalario = salarioAtual + 100;
    }
    else if (salarioAtual >= 500 && salarioAtual <= 1200)
    {
        novoSalario = salarioAtual * 0.12;

        if (salarioAtual > 600)
        {
            novoSalario += 100;
        }
        else
        {
            novoSalario += 150;
        }
    }
    else
    {
        novoSalario = salarioAtual * 0.05;
        novoSalario += 150;
    }

    printf("o seu novo salario com bonificacao e auxilio escolar e de R$%.2f", novoSalario);
}
