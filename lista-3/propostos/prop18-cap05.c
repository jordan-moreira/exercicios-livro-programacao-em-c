#include <stdio.h>

int main() {
    int idadeMS, idade, maior_idade, menor_idade;
    int pos, i, contM;
    float salario, menor_salario, soma_salario, media;
    char sexo, sexoMS;

    i = 0; // Total de pessoas
    pos = 1; // Usada para mostrar qual pessoa esta digitando
    contM = 0; //Contador de mulheres com salário menor que R$ 200,00
    maior_idade = 0;
    menor_idade = 999;
    menor_salario = 99999;
    soma_salario = 0;

    do {
        printf("%dº Pessoa \n", pos);
        printf("    Digite sua idade: ");
        scanf("%d", &idade);

        if (idade < 0) { //Se a idade for negativa o loop não será mais exceutado.
            break;
        }
        printf("    Digite seu sexo(M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("    Digite seu salário: ");
        scanf("%f", &salario);
        printf("\n");

        if (sexo == 'F' && salario <= 200) {
            contM++;
        }
        //Maior idade
        if (idade > maior_idade) {
            maior_idade = idade;
        }
        //Menor idade
        if (idade < menor_idade) {
            menor_idade = idade;
        }
        //Menor salário
        if (salario < menor_salario) {
            menor_salario = salario;
            idadeMS = idade;
            sexoMS = sexo;
        }

        i++;
        pos++;
        soma_salario += salario; //Soma de todos os salários digitados
    } while (idade > 0);

    media = soma_salario / i;

    printf("\nDADOS FINAIS \n");
    if (i > 0) {
        printf("    A media de salária é: R$ %.2f \n", media);
        printf("    A menor idade é: %d. \n", menor_idade);
        printf("    A maior idade é: %d. \n", maior_idade);
        printf("    Quantidade de mulheres com salário inferior a R$ 200.00: %d \n", contM);
        printf("    Menor salário é de R$ %.2f, pertence a uma pessoa do sexo %c com %d anos. \n", menor_salario, sexoMS, idadeMS);
    } else {
        printf("Nenhuma entrada registrada. \n");
    }

}
