#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

void insere_inicio(celula *le, int x){
  celula *nova = malloc(sizeof(celula));
  nova->dado = x;
  nova->prox = le->prox;
  le->prox = nova;
}

void insere_antes(celula *le, int x, int y){
  celula *nova = malloc(sizeof(celula));
  nova->dado = x;
  celula *p;
  for(p=le; p->prox!=NULL&&p->prox->dado!=y; p=p->prox);
  nova->prox = p->prox;
  p->prox = nova;
}
