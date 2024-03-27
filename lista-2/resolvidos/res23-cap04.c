#include <stdio.h>

//esse codigo e capaz de receber o valor do salario minimo de um funcionario, o turno em que ele trabalha, a sua categoria de trabalho e o numero de horas trabalhadas por mes e retorna o coeficiente salarial, o salario bruto, o valor do imposto sobre o salario bruto, o valor da gratificacao, o valor do auxilio alimentar e o salario liquido

int main()
{
    float salarioMinimo,coeficienteSalario,salarioBruto,imposto,auxilioAliment,salarioLiquido;
    int horasTrabalhadas,gratificacao;
    char turno,categoria;

    printf("digite respectivamente o valor do salario minimo, o turno trabalhado(M: matutino; V:vespertino; ou N: noturno), a categoria (O: operario; G: gerente) e o numero de horas trabalhadas por mes separadas por espaco :\n");
    scanf("%f %c %c %d%*c",&salarioMinimo,&turno,&categoria,&horasTrabalhadas);


    switch(turno){
        case 'M':
        coeficienteSalario=salarioMinimo*0.1;
        break;

        case 'V':
        coeficienteSalario=salarioMinimo*0.15;
        break;

        case 'N':
        coeficienteSalario=salarioMinimo*0.12;
        break;
    }
    printf("o coeficiente do salario e de R$%.2f\n\n",coeficienteSalario);


    salarioBruto=horasTrabalhadas*coeficienteSalario;
    printf("o valor do salario bruto e de R$%.2f\n\n",salarioBruto);


    switch(categoria){
        case 'O':
        if(salarioBruto<300){
            imposto=salarioBruto*0.03;
        
        }else{
            imposto=salarioBruto*0.05;
        }
        break;

        case 'G':
        if(salarioBruto<400){
            imposto=salarioBruto*0.04;
        
        }else{
            imposto=salarioBruto*0.06;
        }
    }
    printf("o imposto a ser cobrado e de R$%.2f\n\n",imposto);


    if(turno=='N' && horasTrabalhadas>80){
        gratificacao=50;

    }else{
        gratificacao=30;
    }
    printf("sua gratificacao e de R$%d.00\n\n",gratificacao);


    if(categoria=='O' || coeficienteSalario<=25){
        auxilioAliment=salarioBruto/3;

    }else{
        auxilioAliment=salarioBruto/2;

    }
    printf("o seu auxilio alimentacao sera de R$%.2f\n\n",auxilioAliment);


    salarioLiquido=salarioBruto-imposto+gratificacao+auxilioAliment;
    printf("o salario liquido sera de R$%.2f\n\n",salarioLiquido);


    if(salarioLiquido<350){
        printf("Mal remunerado");

    }else if(salarioLiquido>600){
        printf("Bem remunerado");
        
    }else {
        printf("Normal");
        
    }

}
