#include <stdio.h>

int soma(long int n){
  int s=0;
  if(n/10==0)
    return n;
  else
    return soma(n/10)+n%10;
}

int main(){
  long int n,r;
  scanf("%ld",&n);
  r = soma(n);
  printf("%ld\n",r);
  return 0;
}
