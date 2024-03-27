#include <stdio.h>

// esse codigo recebe um valor de um salario e o valor do percentual de aumento que ele recebera e devolve o salario com o acressimo fornecido pelo usuario

int main()
{

    // declaracao das variaveis
    int salarioBase;
    float novoSalario, percentualDeAumento, valorDoAumento;

    // captura do salario base e percentual de aumento
    printf("digite o salario do funcionario: ");
    scanf("%d%*c", &salarioBase);

    printf("digite o percentual de aumento: ");
    scanf("%f%*c", &percentualDeAumento);

    // calculo do valor aumento e do novo salario
    valorDoAumento = salarioBase * (percentualDeAumento / 100);
    novoSalario = salarioBase + valorDoAumento;

    printf("o valor aumentado no salario do funcionario e de %f, sendo assim o novo salario e de %f", valorDoAumento, novoSalario);
}