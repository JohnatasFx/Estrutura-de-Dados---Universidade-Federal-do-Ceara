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

void inserir_na_fila(Lista* lista, int x){
	Lista *novo = malloc(sizeof(Lista));
	Fila* fila = NULL;
	if(novo){
		if(lista==NULL){
			novo->info = x;
			novo->prox = NULL;
			fila->ini = novo;
			fila->fim = novo;
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
}
int main(){
	Lista* lista = NULL;
	inserir_na_fila(lista, 5);
	return 0;
}
