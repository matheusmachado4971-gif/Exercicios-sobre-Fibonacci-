#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino, int *movimentos)
{
    if(n == 1)
    {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        (*movimentos)++;
        return;
    }

    hanoi(n-1, origem, destino, auxiliar, movimentos);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    (*movimentos)++;

    hanoi(n-1, auxiliar, origem, destino, movimentos);
}

int main()
{
    int n, movimentos = 0;

    printf("Quantidade de discos: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C', &movimentos);

    printf("Total de movimentos: %d\n", movimentos);

    return 0;
}


/**************************
 * ATIVIDADE 3: Torres de Hanoi (Recursividade)
 * 
 * Descrição:
 * Implementação da solução clássica para o problema das Torres de Hanoi,
 * utilizando o paradigma de divisão e conquista através da recursão.
 * 
 * Regras do Jogo:
 * 1. Mover todos os discos da Origem para o Destino.
 * 2. Apenas um disco pode ser movido por vez.
 * 3. Um disco maior nunca pode ser colocado sobre um disco menor.
 * 
 * Lógica da Solução:
 * - Caso Base: Se houver apenas 1 disco, move-se diretamente da origem para o destino.
 * - Passo Recursivo:
 *    1. Move-se (n-1) discos da origem para a torre auxiliar.
 *    2. Move-se o disco maior (o último) para a torre de destino.
 *    3. Move-se os (n-1) discos da auxiliar para o destino.
 * 
 * Complexidade:
 * - O número total de movimentos é dado por 2^n - 1.
 ***************************/