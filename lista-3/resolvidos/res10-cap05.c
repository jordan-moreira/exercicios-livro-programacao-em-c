#include <stdio.h>

int main()
{

    int idade, soma_idade = 0, soma_altura = 0;
    int total_altura;
    float peso, altura;
    float media_idade, total_media, total_peso80 = 0, total_mpeso = 0;
    int i, j, peso_maior80, idade_menor18 = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("TIME %d \n\n", i);

        for (j = 1; j <= 11; j++)
        {
            printf("JOGADOR %d \n", j);
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Digite sua altura: ");
            scanf("%f", &altura);
            printf("Digite seu peso: ");
            scanf("%f", &peso);
            printf("\n");

            soma_idade = soma_idade + idade;
            soma_altura = soma_altura + altura;

            if (idade < 18)
            {
                idade_menor18 = idade_menor18 + 1;
            }

            if (peso > 80)
            {
                peso_maior80++;
            }
        }

        total_mpeso = peso_maior80 * 0.55;
        media_idade = soma_idade / 11;

        printf("Media de idade do time e de %.2f anos. \n\n", media_idade);
        total_altura = total_altura + soma_altura;
    }
    total_media = total_altura / 5;

    printf("A media de altura do campeonato e de %.2f metros. \n", total_media);
    printf("Quantidade de jogadores com menos de 18 anos: %d \n", idade_menor18);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f %% \n", total_mpeso);
}
