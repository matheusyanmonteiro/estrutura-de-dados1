#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindro(const char *str, int n){
	for (int i=0, j=n-1; i<j; i++, j--)
		if (str[i] != str[j])
			return 0;
	return 1;
}

int main(){
  int n;
  scanf("%d",&n);
	char *palavra;
  palavra = malloc(n*sizeof(char));
	scanf("%s",palavra);
	printf("%d\n", isPalindro(palavra,n));
	return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i,j=0;
  int res=0;
  scanf("%d",&n);
  int topo = n;
  char *aux = malloc((n+1) * sizeof(char));
  char *str = malloc((n+1) * sizeof(char));
  for(i=0; i<=n; i++)
    scanf("%c",&str[i]);
  while(topo!=0){
    aux[j] = str[topo];
    topo--;
    j++;
  }
  for(i=0; i<n; i++)
    if(str[i]!=aux[i])
      res++;
  if(res == n)
    printf("1\n");
  else
    printf("0\n");
  return 0;
}*/
