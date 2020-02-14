#include <stdio.h>

int somaDigitos(){
  int soma=0;
  char c;
  scanf("%c",&c);
  if(c=='0')
    return 0;
  while(c>=48 && c<=57){
    soma+=c-48;
    printf("%c",c);
    scanf("%c",&c);
  }
  return soma;
}

int soma(int n){
  if(n/10==0)
    return n;
  else
    return soma(n/10)+n%10;
}

int grau9(int n){
  if (n<10 && n == 9)
    return 1;
  else if(n<10 && n!=9)
    return 0;
  else{
    int grau = grau9(soma(n));
    if(grau==0)
      return 0;
    else
      return 1+grau;
  }
}

int main(){
  int s,grau;
  while(1){
    s = somaDigitos();
    if(s==0)
      break;
    grau = grau9(s);
    if(grau == 0)
      printf(" is not a multiple of 9.\n");
    else
      printf(" is a multiple of 9 and has 9-degree %d.\n",grau);
  }
  return 0;
}
