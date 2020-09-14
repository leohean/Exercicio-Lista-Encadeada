/*
RA - NOME
19132 - Leonardo Henrique Cardoso
19597 - Nicolas Garcia Cabrini Madjarov
*/
#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

struct lista{
    int info;
    struct lista * prox;
};

typedef struct lista Lista;

Lista * inicializa();
int vazia (Lista* l);
void imprime (Lista* l);
Lista* insere (Lista* l, int i);

Lista * separa(Lista * l, int n);
Lista * concatena (Lista * l1, Lista* l2);
Lista * constroi (int n, int* v);
Lista * retira_prefixo (Lista * l, int n);

#endif // FUNCOES_H_INCLUDED
