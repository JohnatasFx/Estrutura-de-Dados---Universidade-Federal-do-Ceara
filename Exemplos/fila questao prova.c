#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_info();

//definição de lista
typedef struct lista{
	int info;
	struct lista *prox;
}Lista;

//definição de fila
typedef struct fila{
	struct lista *ini;
	struct lista *fim;
}Fila;

Lista* inserir_na_fila(Lista* lista, int x){
	Lista *novo = malloc(sizeof(Lista));
	Fila* fila = NULL;
	if(novo){
		if(lista==NULL){
			novo->info = x;
			novo->prox = NULL;
			fila->ini = novo;
			fila->fim = novo;
			lista = novo;
		}else{
			fila->ini = lista;
			Lista* lAux = lista;
			while(lAux){
				lAux = lAux->prox;
			}
			fila->fim = lAux;
		}
	}else{
		printf("erro");
	}
	return lista;
}
int main(){
	Lista* lista = NULL;
	lista = inserir_na_fila(lista, 5);
	printf("%d", lista->info);
	return 0;
}
