#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *v,int n, int x){
    int e,d,m;
    e=-1;
    d=n;
    while(e<d-1){
        m=(e+d)/2;
        if (v[m]==x) return m;
        if(v[m]<x)e=m;
        else d=m;
    }
    if(v[d]==x)
      return d;
    else
      return -1;
}

void insertionSort(int *v, int *aux, int n){
  int i,j;
  for(i=1; i<n; i++)
    for(j=i; j>0&&v[j]<v[j-1]; j--){
      int tmp = v[j];
      v[j] = v[j-1];
      v[j-1] = tmp;
      int tmp1 = aux[j];
      aux[j] = aux[j-1];
      aux[j-1] = tmp1;
    }
}

int main(){
  int n,m,busca;
  int *vn,*vm,*aux, *aux1;
  scanf("%d%d",&n,&m);
  vn = malloc(n * sizeof(int));
  vm = malloc(m * sizeof(int));
  aux = malloc(m * sizeof(int));
  aux1 = malloc(n * sizeof(int));
  for(int i=0; i<n; i++){
    scanf("%d",&vn[i]);
    aux1[i] = i;
  }
  insertionSort(vn, aux1, n);
  for(int i=0; i<m; i++){
    scanf("%d",&vm[i]);
    aux[i] = buscaBinaria(vn, n, vm[i]);
  }
  printf("\n");
  for(int i=0; i<m; i++){
    if(aux[i]!=-1)
      printf("%d\n",aux1[i]);
    else
      printf("-1\n");
  }    
  free(vn);
  free(vm);
  free(aux);
  free(aux1);
  return 0;
}
