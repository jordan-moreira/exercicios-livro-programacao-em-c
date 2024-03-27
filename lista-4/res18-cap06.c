#include <stdio.h>

int main()
{

    int dado[20],
        numerosDado[6] = {0, 0, 0, 0, 0, 0};

        for (int i = 0; i <= 19; i++)
    {
        printf("digite o %d numero sorteado: \n", i + 1);
        scanf("%d%*c", &dado[i]);

        if (dado[i] == 1)
        {
            numerosDado[0]++;
        }
        else if (dado[i] == 2)
        {
            numerosDado[1]++;
        }
        else if (dado[i] == 3)
        {
            numerosDado[2]++;
        }
        else if (dado[i] == 4)
        {
            numerosDado[3]++;
        }
        else if (dado[i] == 5)
        {
            numerosDado[4]++;
        }
        else if (dado[i] == 6)
        {
            numerosDado[5]++;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("o numero %d foi sorteado %d vezes\n", i + 1, numerosDado[i]);
    }
};