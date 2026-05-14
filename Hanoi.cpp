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


# Explica��o da Atividade 3 � Torres de Hanoi

A solu��o utiliza recursividade para resolver o problema das Torres de Hanoi.

O objetivo do programa � mover todos os discos da torre de origem para a torre de destino sem colocar discos maiores sobre discos menores.

O caso base ocorre quando existe apenas um disco, sendo poss�vel mov�-lo diretamente para a torre de destino.

A cada chamada recursiva, o problema � reduzido para mover n-1 discos entre as torres auxiliar e destino.

O programa tamb�m exibe todos os movimentos realizados e contabiliza o n�mero total de movimentos gerados pela solu��o recursiva.

