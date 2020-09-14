/*
RA - NOME
19132 - Leonardo Henrique Cardoso
19597 - Nicolas Garcia Cabrini Madjarov
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

Lista * inicializa()
{
    return NULL;
}

int vazia (Lista* l)
{
    return l==NULL;
 }

 Lista * criaNo(int v)
 {
     Lista * aux;
     aux=(Lista *)malloc(sizeof(Lista));

     if(aux!=NULL)
     {
         aux->info = v;
         aux->prox = NULL;
     }

     return aux;
 }

 Lista* insere (Lista* l, int i)
 {
      Lista * novo = criaNo(i);
      novo->prox = l;
      return novo;
 }

 Lista * separa(Lista * l, int n){
     Lista *p;
     Lista *aux;
     for(p=l;p!=NULL&&p->prox!=NULL;p=p->prox){
        if(p->info==n){
            aux=p->prox;
            p->prox=NULL;
            return aux;
        }
     }
 }

 Lista * concatena (Lista * l1, Lista * l2){
    Lista *p;
    Lista *aux;

    for(p=l1;p!=NULL&&p->prox!=NULL;p=p->prox){
        aux=p->prox;
    }
    aux->prox = l2;

    return l1;
 }

 Lista * constroi (int n, int* v){
     Lista *novo;
     if(n!=0){
        for(int aux=n-1;0<=aux;aux--){
            novo=insere(novo,v[aux]);
        }
     }
     else{
        return NULL;
     }
     return novo;
 }


 Lista * retira_prefixo (Lista * l, int n){
     Lista *p;
     for(int i=0;i<n;i++){
        if(l!=NULL&&l->prox!=NULL){
        p=l;
        l=l->prox;
        free(p);
        }
        else{
            return NULL;
        }
     }
     return l;
 }

void imprime (Lista* l)
{
    Lista * p;
    if(vazia(l)){
        printf("Lista vazia!");
    }
    else{
        printf(" | ");
        for(p=l; p!=NULL; p=p->prox)
        {
            printf("%d | ",p->info);
        }
        printf("\n");
    }
}







