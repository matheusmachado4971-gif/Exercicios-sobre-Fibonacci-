#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* =====================================================
   ESTRUTURA DA LISTA SIMPLESMENTE ENCADEADA
===================================================== */

typedef struct No {
    int valor;
    struct No *prox;
} No;

/* =====================================================
   FUNCOES AUXILIARES
===================================================== */

void inserirFinal(No **head, int valor) {

    No *novo = (No*) malloc(sizeof(No));

    novo->valor = valor;
    novo->prox = NULL;

    if (*head == NULL) {
        *head = novo;
        return;
    }

    No *temp = *head;

    while (temp->prox != NULL) {
        temp = temp->prox;
    }

    temp->prox = novo;
}

void exibirLista(No *head) {

    while (head != NULL) {
        printf("%d -> ", head->valor);
        head = head->prox;
    }

    printf("NULL\n");
}

void liberarLista(No *head) {

    No *temp;

    while (head != NULL) {

        temp = head;

        head = head->prox;

        free(temp);
    }
}

/* =====================================================
   PARTE 1 - INSERCAO EM POSICAO ESPECIFICA
===================================================== */

void inserirPosicao(No **head, int valor, int posicao) {

    if (posicao < 0) {
        printf("Posicao invalida!\n");
        return;
    }

    No *novo = (No*) malloc(sizeof(No));

    novo->valor = valor;
    novo->prox = NULL;

    if (posicao == 0) {

        novo->prox = *head;

        *head = novo;

        return;
    }

    No *temp = *head;

    int i;

    for (i = 0; i < posicao - 1 && temp != NULL; i++) {
        temp = temp->prox;
    }

    if (temp == NULL) {

        printf("Posicao invalida!\n");

        free(novo);

        return;
    }

    novo->prox = temp->prox;

    temp->prox = novo;
}