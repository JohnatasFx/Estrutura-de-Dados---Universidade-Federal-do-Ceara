#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_info();

typedef struct fila{
    int info;
    struct fila *prox;
} Fila;

void inserir_na_fila(Fila **fila, int info){
    Fila *aux, *novo = malloc(sizeof(Fila));
    if(novo){
    	novo->info = info;
    	novo->prox = NULL;
    	if(*fila ==	NULL){
    		*fila = novo;
		}else{
			aux = *fila;
			while(aux->prox != NULL){
				aux = aux->prox;
			}
			aux->prox = novo;
		}
	}else{
		printf("erro");
	}
}

Fila* remover_da_fila(Fila **fila){
	Fila* remover = NULL;
	
	if(*fila){
		remover = *fila;
		*fila = remover->prox;
	}else{
		printf("vazia");
	}
	return remover;
}

void imprimir(Fila *fila){
	while(fila){
    	printf("%d", fila->info);
    	fila = fila->prox; 	
	}
}

int ler_info(){
	
    int a;
	printf("digita ai: ");
	scanf("%d",&a);
    return a;
}

int main(){
	int i, j;
    Fila *topo = NULL;
    scanf("%d", &i);
    for(j = 0; j < i; j++){
    	inserir_na_fila(&topo,ler_info());
	}
    imprimir(topo);
    remover_da_fila(&topo);
    imprimir(topo);
    inserir_na_fila(topo,5);
    
    return 0;
}

