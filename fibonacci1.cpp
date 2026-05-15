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

/*
 * ATIVIDADE 1: FIBONACCI RECURSIVO (SEM OTIMIZAÇÃO)
 * * Descrição: Implementação da sequência de Fibonacci utilizando recursividade simples.
 * * Regras:
 * fib(0) = 0
 * fib(1) = 1
 * fib(n) = fib(n-1) + fib(n-2)
 * * Casos Base: Se n == 0 ou n == 1, retorna n.
 * * Complexidade e Desempenho:
 * - A função se divide em fib(n-1) e fib(n-2) a cada chamada.
 * - Não utiliza memoização, resultando em cálculos repetidos.
 * - Exemplo: No cálculo de fib(5), o termo fib(3) é recalculado múltiplas vezes.
 * * Observação: Inclui um contador global/ponteiro para rastrear o número total de chamadas.
 */