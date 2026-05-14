#include <stdio.h>

int fibonacci(int n, int *chamadas)
{
    (*chamadas)++;

    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1, chamadas) + fibonacci(n - 2, chamadas);
}

int main()
{
    int n;
    int chamadas = 0;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = fibonacci(n, &chamadas);

    printf("Fibonacci de %d = %d\n", n, resultado);
    printf("Quantidade de chamadas recursivas: %d\n", chamadas);

    return 0;
}

# Explica��o da Atividade 1 � Fibonacci Recursivo sem Otimiza��o

Nesta atividade foi implementada a sequ�ncia de Fibonacci utilizando recursividade simples, sem qualquer tipo de otimiza��o.

A sequ�ncia de Fibonacci segue a regra:

