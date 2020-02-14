#include <stdio.h>
#include <string.h>

int contapar(char *string){
  if(strlen(string)==3){
    if(string[0]==string[2])
      return 1;
    else
      return 0;
  }
  else if(strlen(string)<3)
    return 0;
  else{
    int count=0;
    if(string[strlen(string)-1]==string[strlen(string)-3])
      count++;
    string[strlen(string)-1] = '\0';
    return count+contapar(string);
  }
}

int main(){
  char s[200];
  int x;
  scanf("%s",s);
  x = contapar(s);
  printf("%d\n",x);
  return 0;
}
