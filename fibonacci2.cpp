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