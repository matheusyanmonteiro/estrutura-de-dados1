#include<stdio.h>
#include<stdlib.h>

typedef struct pilha{
    int *dados;
    int topo;
}pilha;

pilha *p;

void criaPilha(int n){
    p = malloc(sizeof(pilha));
    p->dados = malloc(n*sizeof(int));
    p->topo = -1;
}

void empilha(int e){
    p->topo++;
    p->dados[p->topo] = e;
}

void desempilha(int *y){
    *y = p->dados[p->topo];
    p->topo--;
}

void teleport(){
    int i;
    int aux = p->dados[p->topo];
    for(i=p->topo;i>0;i--){
        p->dados[i] = p->dados[i-1];
    }
    p->dados[0] = aux;
}

int main(){
    int n,y,i;
    scanf("%d",&n);
    criaPilha(n);

    for(i=n;i>0;i--){
        empilha(i);
    }

    printf("Cartas descartadas: ");

    for(i=0;i<n-2;i++){
        desempilha(&y);
        printf("%d, ",y);
        teleport();
    }
    desempilha(&y);
    printf("%d\n",y);
    printf("Carta restante: %d\n",p->dados[0]);

    return 0;
}
