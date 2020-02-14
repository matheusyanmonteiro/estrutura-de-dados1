#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
  int *dados;
  int N, p, u;
}fila;

int desenfileira(fila *f, int *y){
  if(f->p == f->u){
    f->N*=2;
    f->dados = realloc(f->dados, f->N * sizeof(fila));
    if(f->dados==NULL)
      return 0;
  }
  *y = f->dados;
  f->p = (f->p+1)%f->N;
  return 1;
}
