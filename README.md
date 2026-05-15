Exercícios de Recursividade - Fibonacci e Torres de Hanoi

Este projeto foi desenvolvido como parte das atividades da disciplina de Estrutura de Dados (Engenharia de Software - UniCesumar).
O objetivo é aplicar conceitos de recursividade, alocação dinâmica e otimização de algoritmos (memoização).

O projeto está dividido em três arquivos principais:

1.  `fibonacci1.cpp` (Recursividade Simples): Implementação clássica da sequência de Fibonacci.
     Exibe o resultado do termo e a quantidade total de chamadas recursivas.
     Objetivo: Demonstrar o custo computacional de uma recursão sem otimização.

2.  `fibonacci2.cpp` (Recursividade com Memoização):
    Implementação otimizada utilizando Memoização e Alocação Dinâmica (`malloc`).
    O algoritmo salva resultados já calculados em um vetor para evitar repetições.
    Objetivo: Mostrar a diferença drástica na performance e no número de chamadas em relação à versão simples.

3.  `Hanoi.cpp` (Torres de Hanoi):
    Resolução do clássico quebra-cabeça das Torres de Hanoi.
    Exibe o passo a passo dos movimentos e o total de jogadas realizadas.
    Objetivo: Aplicar a lógica de dividir para conquistar.

Conceitos Utilizados
- Linguagem C++
- Recursividade
- Alocação Dinâmica de Memória
- Análise de Complexidade de Algoritmos

Como Executar: 
Para rodar qualquer um dos arquivos, você pode usar um compilador C++.
```bash
g++ nome_do_arquivo.cpp -o programa
./programa
