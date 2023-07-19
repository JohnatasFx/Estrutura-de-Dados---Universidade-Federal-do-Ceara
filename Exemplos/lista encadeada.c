#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//um programa que adicione dois nós, um no inicio da lista e outro no final

int ler_info();

typedef struct lista{
    int info;
    struct lista *prox;
} Lista;

//inserir no inicio e no fim

Lista* insere_inicio_fim_lista(Lista **lista, int x, int y){
	
	Lista *lAux = malloc(sizeof(Lista));
	Lista *novo1 = malloc(sizeof(Lista)); 
	Lista *novo2 = malloc(sizeof(Lista));
	
	if(novo1){
		novo1->info = x;
		novo1->prox = *lista;
		*lista = novo1;
	}else{
		printf("\nErro ao alocar memoria para no 1.\n");
	}
	if(novo2){
		novo2->info = y;
		novo2->prox = NULL;
		if(*lista==NULL){
			*lista = novo2;
		}else{
			lAux = *lista;
			while(lAux->prox){
				lAux = lAux->prox;
			}
			lAux->prox = novo2;
		}
	}else{
		printf("\nErro ao alocar memoria para no 2.\n");
	}
}

void inserir_na_lista(Lista **lista, int numero){
    Lista *novo = malloc(sizeof(Lista));
    if(novo){
    	novo->info = numero;
    	novo->prox = *lista;
    	*lista = novo;
	}else{
		printf("\nErro ao alocar memoria.\n");
	}
}

void inserir_no_fim(Lista **lista, int numero){
	Lista *lAux, *novo = malloc(sizeof(Lista));
	if(novo){
		novo->info = numero;
		novo->prox = NULL;
		if(*lista == NULL){
			*lista = novo;
		}else{
			lAux = *lista;
			while(lAux->prox){
				lAux = lAux->prox;
			}
			lAux->prox = novo;
		}
	}else{
		printf("\nErro ao alocar memoria.\n");
	}
}

Lista* remover_da_lista(){
	
}

void imprimir_lista(Lista* lista){
	Lista* lAux = lista;
	while(lAux){
		printf("%d", lAux->info);
		lAux = lAux->prox;
	}
}

int ler_info(){
	
    int a;
	printf("Digite um numero: ");
	scanf("%d",&a);
    return a;
}

int main(){
	Lista *lista = NULL;
//    insere_inicio_fim_lista(&lista, 5, 6);
    inserir_na_lista(&lista, 5);
        inserir_na_lista(&lista, 6);
            inserir_na_lista(&lista, 7);
    inserir_no_fim(&lista, 6);
    imprimir_lista(lista);
    return 0;
}

