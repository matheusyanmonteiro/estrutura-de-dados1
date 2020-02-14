#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *v, int n){
  int i,j;
  for(i=1; i<n; i++)
    for(j=i; j>0&&v[j]<v[j-1]; j--){
      int tmp = v[j];
      v[j] = v[j-1];
      v[j-1] = tmp;
    }
  for(i=0; i<n-1; i++)
    printf("%d ",v[i]);
  printf("%d\n",v[n-1]);
}

int main(){
  int v[1000];
  int i=0;
  while(scanf("%d",&v[i])!=EOF)
    i++;
  insertionSort(v,i);
  return 0;
}
