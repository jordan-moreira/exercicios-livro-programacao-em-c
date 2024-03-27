#include <stdio.h>

int main()
{

    int codigo[5],
        num_veic[5],
        num_acidente[5],
        cidadeMaiorIndice = 0;

    float indice[5];

    float media_5cidades = 0,
          media_acidente[5],
          maiorIndice = 0;

    for (int i = 0; i <= 4; i++)
    {

        printf("CIDADE %d \n", i + 1);
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigo[i]);
        printf("Numero de veiculo de passeio: ");
        scanf("%d", &num_veic[i]);
        printf("Digite o numero de acidentes de transito: ");
        scanf("%d", &num_acidente[i]);
        printf("------------------------------- \n");

        indice[i] = num_veic[i] / num_acidente[i];
        media_5cidades += num_veic[i] / 5;

        if (indice[i] > maiorIndice)
        {
            maiorIndice = indice[i];
            cidadeMaiorIndice = i;
        }

        if (num_veic[i] < 2000)
        {
            printf("A media de acidentes da Cidade %d e %.2f \n \n", i + 1, media_acidente[i] = num_veic[i] / num_acidente[i]);
        }
    }

    printf("A cidade %d tem o maior indice de acidentes. \n", cidadeMaiorIndice + 1);

    printf("A media de veiculo das 5 cidades somadas e de %.2f. \n", media_5cidades);
}
