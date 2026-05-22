Atividade Avaliativa — Estruturas de Dados em C
Gerenciador de Listas Encadeadas 

Este repositório contém a resolução da atividade avaliativa da disciplina de Estrutura de Dados (2º Bimestre) da UniCesumar. O objetivo do projeto é consolidar conceitos de alocação dinâmica de memória, manipulação de ponteiros e estruturas de dados lineares (Listas Encadeadas Simples e Listas Circulares Duplamente Encadeadas).


Funcionalidades Implementadas

Parte 1: Inserção em Posição Específica
Função: `void inserirPosicao(No **head, int valor, int posicao);`
Permite a inserção de um novo nó em qualquer posição indexada (iniciando em 0), tratando cenários de inserção no início, meio, fim ou em listas vazias, além de validar posições inválidas.

Parte 2: Busca por Valor
Função:`int buscarValor(No *head, int valor);`
Realiza a busca linear na lista e retorna o índice da primeira ocorrência do valor solicitado. Caso o elemento não seja encontrado, retorna `-1`.

Parte 3: Inversão de Lista In-Place
Função:`void inverterLista(No **head);`
Inverte a ordem dos elementos da lista rearranjando puramente os ponteiros, sem utilizar vetores auxiliares ou criar uma nova lista em memória.

Parte 4: Divisão de Lista (Split)
Função:`void dividirLista(No *head, No **lista1, No **lista2);`
Divide a lista original em duas metades perfeitas utilizando a técnica de **Ponteiro Rápido e Lento (Fast/Slow Pointers)**, sem realizar a contagem prévia dos elementos.

Parte 5: Playlist Circular Duplamente Encadeada
Sistema de reprodução de músicas com navegação bidirecional contínua, onde o último nó conecta-se ao primeiro. Inclui controle de percurso para evitar loops infinitos na exibição.

📂 Estrutura do Projeto

text
├── Manipulação_de_Listas_Encadeadas/
│   ├── main.cpp          # Código-fonte principal com as implementações e testes
│   └── README.md         # Documentação do projeto (este arquivo)
