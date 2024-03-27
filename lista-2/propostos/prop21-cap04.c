#include <stdio.h>

int main()
{
    int codigo;
    printf("Procedencia de produtos \n\n");
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("Procedencia: Sul");
    }
    else if (codigo == 2)
    {
        printf("Procedencia: Norte");
    }
    else if (codigo == 3)
    {
        printf("Procedencia: Leste");
    }
    else if (codigo == 4)
    {
        printf("Procedencia: Oeste ");
    }
    else if (codigo == 5 || codigo == 6)
    {
        printf("Procedencia: Nordeste");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9)
    {
        printf("Procedencia: Sudeste");
    }
    else if (codigo >= 10 && codigo <= 20)
    {
        printf("Procedencia: Centro-Oeste");
    }
    else if (codigo > 20 && codigo <= 30)
    {
        printf("Procedencia: Nordeste");
    }
    else
    {
        printf("Codigo invalido.");
    }
}
