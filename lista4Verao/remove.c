#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

void remove_depois(celula *le){
  if(le->prox!=NULL){
    celula *tmp = le->prox;
    le->prox = tmp->prox;
    free(tmp);
  }
}

void remove_elemento(celula *le, int x){
  celula *p;
  for(p=le; p->prox!=NULL&&p->prox->dado!=x; p=p->prox);
  if(p->prox!=NULL){
    celula *tmp = p->prox;
    p->prox = tmp->prox;
    free(tmp);
  }
}

void remove_todos_elementos(celula *le, int x){
  celula *p;
  p = le;
  while(p->prox!=NULL){
    if(p->prox->dado==x){
      celula *tmp = p->prox;
      p->prox = tmp->prox;
      free(tmp);
    }
    else
      p=p->prox;
  }
}
/*
void *imprime(celula *le){
  if(le==NULL)
    printf("NULL\n");
  else{
    for(celula *p=le->prox; p!=NULL; p=p->prox)
      printf("%d -> ",p->dado);
    printf("NULL\n");
  }
}

int main(){
  int x,y;
  celula *p,*nova1, *nova2, *nova3, *nova4, *nova5;
  p = malloc(sizeof(celula));
  p->prox = NULL;
  p->dado = 293827;
  nova1 = malloc(sizeof(celula));
  nova2 = malloc(sizeof(celula));
  nova3 = malloc(sizeof(celula));
  nova4 = malloc(sizeof(celula));
  nova5 = malloc(sizeof(celula));
  nova1->dado = 2;
  nova2->dado = 1;
  nova3->dado = 1;
  nova4->dado = 1;
  nova5->dado = 5;
  nova5->prox = NULL;
  nova4->prox = nova5;
  nova3->prox = nova4;
  nova2->prox = nova3;
  nova1->prox = nova2;
  p->prox = nova1;
  imprime(p);
  scanf("%d",&x);
  remove_elemento(p,x);
  imprime(p);
  free(p);
  free(nova1);
  free(nova2);
  free(nova3);
  free(nova4);
  free(nova5);
  return 0;
}*/
