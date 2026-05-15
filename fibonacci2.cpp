#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int *cache, int *chamadas)
{
    (*chamadas)++;

    if(n == 0 || n == 1)
        return n;

    if(cache[n] != -1)
        return cache[n];

    cache[n] = fibonacci(n-1, cache, chamadas) +
               fibonacci(n-2, cache, chamadas);

    return cache[n];
}

int main()
{
    int n, chamadas = 0, resultado, i;
    int *cache;

    printf("Digite um numero: ");
    scanf("%d", &n);

    cache = (int *) malloc((n + 1) * sizeof(int));

    for(i = 0; i <= n; i++)
        cache[i] = -1;

    resultado = fibonacci(n, cache, &chamadas);

    printf("Fibonacci: %d\n", resultado);
    printf("Chamadas: %d\n", chamadas);

    free(cache);

    return 0;
}
/**************************
 * ATIVIDADE 2: Sequência de Fibonacci com Memorização
 * 
 * Descrição:
 * Implementação otimizada da sequência de Fibonacci utilizando recursividade
 * e a técnica de memoização para evitar o recalculo de subproblemas.
 * 
 * Funcionamento:
 * 1. O programa utiliza um vetor 'cache' (alocado dinamicamente via malloc/new)
 *    para armazenar resultados de chamadas anteriores.
 * 2. Antes de calcular, verifica-se se o valor já existe no cache.
 * 3. Se existir, o retorno é imediato; caso contrário, realiza-se o cálculo
 *    recursivo e armazena-se o resultado no cache.
 * 
 * Complexidade:
 * - Reduz drasticamente a quantidade de chamadas recursivas comparado à
 *   versão ingênua, tornando a execução linear em relação a 'n'.
 * 
 * Regras Matemáticas:
 * - Casos base: fib(0) = 0, fib(1) = 1
 * - Recursão: fib(n) = fib(n-1) + fib(n-2)
 ***************************/