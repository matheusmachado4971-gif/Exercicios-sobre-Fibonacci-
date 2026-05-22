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

/* =====================================================
   PARTE 2 - BUSCA POR VALOR
===================================================== */

int buscarValor(No *head, int valor) {

    int posicao = 0;

    while (head != NULL) {

        if (head->valor == valor) {
            return posicao;
        }

        head = head->prox;

        posicao++;
    }

    return -1;
}

/* =====================================================
   PARTE 3 - INVERTER LISTA
===================================================== */

void inverterLista(No **head) {

    No *anterior = NULL;
    No *atual = *head;
    No *proximo = NULL;

    while (atual != NULL) {

        proximo = atual->prox;

        atual->prox = anterior;

        anterior = atual;

        atual = proximo;
    }

    *head = anterior;
}

/* =====================================================
   PARTE 4 - DIVIDIR LISTA EM DUAS
===================================================== */

void dividirLista(No *head, No **lista1, No **lista2) {

    if (head == NULL) {

        *lista1 = NULL;
        *lista2 = NULL;

        return;
    }

    No *lento = head;
    No *rapido = head->prox;

    while (rapido != NULL && rapido->prox != NULL) {

        lento = lento->prox;

        rapido = rapido->prox->prox;
    }

    *lista1 = head;

    *lista2 = lento->prox;

    lento->prox = NULL;
}
