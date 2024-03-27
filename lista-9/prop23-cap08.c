#include <stdio.h>

// Sub-rotina para verificar se os lados formam um triângulo
int verificaTriangulo(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 0; // Não é um triângulo
    }
    if (a >= b + c || b >= a + c || c >= a + b)
    {
        return 0; // Não é um triângulo
    }
    return 1; // É um triângulo
}

// Sub-rotina para determinar e mostrar o tipo de triângulo
void tipoTriangulo(float a, float b, float c)
{
    if (a == b && b == c)
    {
        printf("Triangulo equilatero.\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Triangulo isosceles.\n");
    }
    else
    {
        printf("Triangulo escaleno.\n");
    }
}

// Programa principal
int main()
{
    float a, b, c;

    printf("Digite as medidas dos tres lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (verificaTriangulo(a, b, c))
    {
        printf("Os lados formam um triangulo.\n");
        tipoTriangulo(a, b, c);
    }
    else
    {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
