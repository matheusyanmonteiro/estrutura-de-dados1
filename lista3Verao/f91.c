#include <stdio.h>

unsigned f91(int n){
  if(n==0)
    return 0;
  else if(n>100)
    return n - 10;
  else if(n<=100)
    return f91(f91(n+11));
}

int main(){
  int k;
  while(scanf("%d",&k)!=EOF)
    if(k!=0)
      printf("f91(%d) = %d\n",k,f91(k));
    else
      break;
}
