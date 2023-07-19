#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_info();

//definição de lista duplamente encadeada
typedef struct lista_dupl{
	int info;
	struct lista_dupl *ant;
	struct lista_dupl *prox;
}ListaDupl;

ListaDupl* insere_fim_lista_dupl(ListaDupl* lista, int x){
	ListaDupl* novo = malloc(sizeof(ListaDupl));
	if(novo){
		novo->info = x;
		novo->prox = NULL;
		novo->ant = NULL;
		if(lista==NULL){
			return novo;
		}
		ListaDupl* lAux = lista;
		while(lAux){
			lAux = lAux->prox;
		}
		lAux->prox = novo;
		novo->ant = lAux;
	}
	return lista;
}

//numeros maiores que x e menores do que y
int qtd_lista(ListaDupl* lista, int x , int y){
	int qtd;
	ListaDupl* lAux = lista;
	while(lAux){
		if(lAux->info>x){
			qtd++;
		}else if(lAux->info<y){
			qtd++;
		}
		lAux= lAux->prox;
	}
	return qtd;
}

void imprimir_lista_dupla(ListaDupl* lista){
	ListaDupl* lAux = lista;
	while(lAux){
		printf("%d", lAux->info);
		lAux=lAux->prox;
	}
}

int ler_info(){
	
    int a;
	printf("Digite um numero: ");
	scanf("%d",&a);
    return a;
}

int main(){
	ListaDupl *lista = NULL;
	lista = insere_fim_lista_dupl(lista, 5);
	imprimir_lista_dupla(lista);
	printf("%d", qtd_lista(lista, 4, 6));
	return 0;
}
