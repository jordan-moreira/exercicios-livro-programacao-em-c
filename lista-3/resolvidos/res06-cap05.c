#include <stdio.h>

int main()
{
    int quant_horas, codigo;
    int i;
    char turno, categoria;

    float aux_alimentacao;
    float sal_minimo, vlr_hr, sal_inicial, sal_final;

    sal_minimo = 450;

    printf("CALCULO DE SALaRIO \n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("Funcionario %d \n", i);
        printf("Digite seu codigo: ");
        scanf("%d", &codigo);
        printf("Digite o numero de horas de trabalhadas: ");
        scanf("%d", &quant_horas);

        do
        {
            printf("Digite seu turno (M. Matutino | V. Vespertino | N.Noturno): ");
            scanf(" %c", &turno);
        } while (turno != 'M' && turno != 'V' && turno != 'N');

        do
        {
            printf("Digite sua categoria (G. Gerente | O. Operario): ");
            scanf(" %c", &categoria);
        } while (categoria != 'O' && categoria != 'G');

        if (categoria == 'O')
        {
            if (turno == 'M' || turno == 'V')
            {
                vlr_hr = sal_minimo * 0.1;
                sal_inicial = quant_horas * vlr_hr;
            }
            else if (turno == 'N')
            {
                vlr_hr = sal_minimo * 0.13;
                sal_inicial = quant_horas * vlr_hr;
            }
        }
        else if (categoria == 'G')
        {
            if (turno == 'M' || turno == 'V')
            {
                vlr_hr = sal_minimo * 0.15;
                sal_inicial = quant_horas * vlr_hr;
            }
            else if (turno == 'N')
            {
                vlr_hr = sal_minimo * 0.18;
                sal_inicial = quant_horas * vlr_hr;
            }
        }

        if (sal_inicial < 300)
        {
            aux_alimentacao = sal_inicial * 0.20;
            sal_final = sal_inicial + aux_alimentacao;
        }
        else if (sal_inicial >= 300 && sal_inicial <= 600)
        {
            aux_alimentacao = sal_inicial * 0.15;
            sal_final = sal_inicial + aux_alimentacao;
        }
        else if (sal_inicial > 600)
        {
            aux_alimentacao = sal_inicial * 0.05;
            sal_final = sal_inicial + aux_alimentacao;
        }

        printf("___________________________________________________________ \n");
        printf("Folha de pagamento do funcionario de codigo %d \n", codigo);
        printf("    Numero de horas trabalahdas: %d horas. \n", quant_horas);
        printf("    Salario inicial: R$ %.2f. \n", sal_inicial);
        printf("    Auxilio alimentacao: R$ %.2f. \n", aux_alimentacao);
        printf("    Salario final: R$ %.2f. \n", sal_final);

        aux_alimentacao = 0;
        sal_final = 0;
        sal_inicial = 0;

        printf("\n");
    }
}
