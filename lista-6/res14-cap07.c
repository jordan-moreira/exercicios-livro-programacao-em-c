#include <stdio.h>

int main()
{
    char cidade_origem[5][40], cidade_destino[5][40];
    float distancia[5][5], consumo[5], percurso[5], gasto_combustivel[5];
    int i, j, c = 0, pos = 0, pos2 = 0, pos3 = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            if (i != j)
            {
                printf("\n%d º Viagem \n", c + 1);
                printf("Origem: ");
                setbuf(stdin, NULL);
                gets(cidade_origem[pos3]);

                printf("Destino: ");
                setbuf(stdin, NULL);
                gets(cidade_destino[pos3]);

                printf("Distância entre as cidades: ");
                scanf("%f", &distancia[pos][pos2]);

                printf("Consumo do veçulo(km/L): ");
                scanf("%f", &consumo[pos3]);

                gasto_combustivel[c] = distancia[pos][pos2] / consumo[pos];
                c++;

                if (c == 5 - 1)
                {
                    pos++;
                    pos2 = 0;
                    c = 0;
                }
                pos3++;
            }
            else
            {
                distancia[pos][pos2] = 0;
            }
            c++;
            pos2++;
        }
    }

    printf("\n---------------------------RELATÓRIO---------------------------\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i != j)
            {
                if (distancia[i][j] <= 250)
                {
                    printf("\nVIAGEM %d; \n", i + 1);
                    printf("\tOrigem: %s; \n", cidade_origem[i]);
                    printf("\tDestino: %s; \n", cidade_destino[i]);
                    printf("\tDistância: %.2f km; \n", distancia[i][j]);
                    printf("Gasto de combustivel: %.2f L. \n", consumo[i]);
                }
            }
        }
    }
}
