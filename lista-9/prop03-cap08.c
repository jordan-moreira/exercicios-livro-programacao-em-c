#include <stdio.h>

int FuncaoRetorno(int N1, int N2)
{
    int i;
    i = N1 + 1;

    if (N1 % N2 == 0)
    {
        return 0;
    }

    else
    {
        do
        {
            if (i % N1 == 0)
            {
                break;
            }
            else
            {
                i++;
            }
        } while (i % N1 != 0);
    }

    return i;
}
int main()
{
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("I: %d \n", FuncaoRetorno(n1, n2));
}
