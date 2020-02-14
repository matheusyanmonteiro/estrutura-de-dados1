#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
	int topo;
	char pe;
	struct celula *prox;
}celula;

void inicializaPilha(celula *p){
	
}

int main(){
	char pe;
	int num;
	celula pilha[31];
	while(scanf("%d%c",&num,&pe)!=EOF){

	}
}

/*int main(){
	int *peE,*peD;
	int M,total=0;
	char L;
	peE = calloc(31,sizeof(int));
	peD = calloc(31,sizeof(int));
	while(scanf("%d",&M)!=EOF&&scanf("%c",&L)!=EOF){
		if(L=='D')
			peD[M-30]++;
		else if(L=='E')
			peE[M-30]++;
	}
	for(int i=0;i<32;i++){
		if(peD[i]<peE[i])
			total+=peD[i];
		else
			total+=peE[i];
	}
	printf("%d\n",total);
	return 0;
}*/
