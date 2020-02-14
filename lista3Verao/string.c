#include <stdio.h>

void inverte(char *string){
  if(*string){
    inverte(string+1);
    putchar(*string);
  }
}

int main(){
  char s[500];
  scanf("%s",s);
  inverte(s);
  printf("\n");
  return 0;
}
