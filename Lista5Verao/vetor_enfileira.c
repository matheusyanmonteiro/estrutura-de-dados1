#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
  int *dados;
  int N, p, u;
}fila;

int enfileira(fila *f, int x){
  if(f->u == f->N){
    f->N*=2;
    f->dados = realloc(f->dados, f->N * sizeof(fila));
    if(f->dados==NULL)
      return 0;
  }
  f->dados[f->u] = x;
  f->u++;
  return 1;
}
