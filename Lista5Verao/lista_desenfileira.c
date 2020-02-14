#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

int desenfileira(celula *f, int *y){
  celula *lixo = f->prox;
  if(f->prox == f)
    return 0;
  *y =  lixo->dado;
  f->prox = lixo->prox;
  free(lixo);
  return 1;
}
