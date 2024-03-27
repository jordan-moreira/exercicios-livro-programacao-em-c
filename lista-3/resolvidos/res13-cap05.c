#include <stdio.h>

int main()
{
    char sexo;

    int num_crianca, tempo_vida;
    int i, contM = 0, contF = 0, cont_tempo = 0;

    float perc_masculino, perc_feminino, perc_tempo;

    printf("TAXA DE MORTALIDADE DE CRIANCAS \n\n");
    printf("Digite o numero de criancas nascidas no periodo: ");
    scanf("%d", &num_crianca);
    printf("\n");

    for (i = 1; i <= num_crianca; i++)
    {
        printf("%dº Crianca \n", i);
        printf("Digite o sexo da crianca: ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'M')
        {
            contM++;
        }
        else if (sexo == 'f' || sexo == 'F')
        {
            contF++;
        }
        else
        {
            printf("Sexo invalido. \n");
        }

        printf("Digite o tempo de vida (em meses): ");
        scanf("%d", &tempo_vida);

        if (tempo_vida >= 24)
        {
            cont_tempo++;
        }
        printf("\n");
    }

    perc_masculino = (contM * 100) / num_crianca;
    perc_feminino = (contF * 100) / num_crianca;
    perc_tempo = (cont_tempo * 100) / num_crianca;

    printf("Percentual de criancas do sexo masculino que morreram nesse periodo: %.1f porcento. \n", perc_masculino);
    printf("Percentual de criancas do sexo feminino que morreram nesse periodo: %.1f porcento. \n", perc_feminino);
    printf("Percentual de criancas que viveram mais de 24 meses: %.2f porcento. \n", perc_tempo);
}
