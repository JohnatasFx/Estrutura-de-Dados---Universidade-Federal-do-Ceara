#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_info();

typedef struct pilha{
    int info;
    struct pilha *prox;
} Pilha;

Pilha *empilhar(Pilha *topo){
    Pilha *novo = malloc(sizeof(Pilha));
    if(novo){
        novo->info = ler_info();
        novo->prox = topo;
        topo = novo;
        return topo;
    }else{
        printf("Erro");
    }
    return NULL;
}

Pilha* desempilhar(Pilha **topo){
	if(*topo != NULL){
		Pilha *remover = *topo;
		*topo = remover->prox;
		return remover;
	}else{
		printf("vazia");
	}
	return NULL;
	
}

void imprimir_pilha(Pilha *topo){
	while(topo){
		printf("%d\n", topo->info);
		topo = topo->prox;
	}
}

int ler_info(){
    int a = 5;
    return a;
}

int main(){
    Pilha *topo = NULL;
    Pilha *remover;
    topo = empilhar(topo);
    topo = empilhar(topo);
    topo = empilhar(topo);
    topo = empilhar(topo);
    topo = empilhar(topo);

	printf("info: %d\n", topo->info);
    imprimir_pilha(topo);
	/*remover = desempilhar(&topo);
    if(remover){
    	printf("%d", remover->info);
	}else{
		printf("/sem pilha");
	}*/
    return 0;
}

