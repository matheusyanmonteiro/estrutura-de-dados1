#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

/*void insere(celula *le, int x){
  celula *p;
  celula *nova = malloc(sizeof(celula));
  nova->dado = x;
  for(p=le; p->prox!=NULL; p=p->prox);
  nova->prox = p->prox;
  p->prox = nova;
}

void *imprime(celula *le){
  if(le==NULL)
    printf("NULL\n");
  else{
    for(celula *p=le->prox; p!=NULL; p=p->prox)
      printf("%d -> ",p->dado);
    printf("NULL\n");
  }
}*/

void mescla_listas(celula *l1, celula *l2, celula *l3){
  celula *p1=l1->prox;
  celula *p2=l2->prox;
  while(p1!=NULL && p2!=NULL){
    if(p1->dado <= p2->dado){
      l3->prox = p1;
      p1 = p1->prox;
      l3->prox->prox = NULL;
      l3 = l3->prox;
    }
    else if(p2->dado < p1->dado){
      l3->prox = p2;
      p2 = p2->prox;
      l3->prox->prox = NULL;
      l3 = l3->prox;
    }
  }
  if(p1!=NULL)
    l3->prox = p1;
  else if(p2!=NULL)
    l3->prox = p2;
}

/*int main(){
  int x;
  celula *l1, *l2, *l3;
  l1 = malloc(sizeof(celula));
  l2 = malloc(sizeof(celula));
  l3 = malloc(sizeof(celula));
  l1->prox = NULL;
  l2->prox = NULL;
  l3->prox = NULL;
  for(int i=0; i<4; i++){
    scanf("%d",&x);
    insere(l1,x);
  }
  for(int i=0; i<3; i++){
    scanf("%d",&x);
    insere(l2,x);
  }
  printf("\nl1 -> ");
  imprime(l1);
  printf("\nl2 -> ");
  imprime(l2);
  mescla_listas(l1,l2,l3);
  printf("\nl3 -> ");
  imprime(l3);
  return 0;
}*/
