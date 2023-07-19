#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//escreva uma função que insira os elementos de uma lista em uma pilha

int ler_info();

// definição de lista
typedef struct lista{
    int info;
    struct lista *prox;
} Lista;

//definição de pilha
typedef struct pilha{
	int info;
	struct pilha *prox;
}Pilha;

//definição de fila
typedef struct fila{
	struct lista *inicio;
	struct lista *fim; 
}Fila;

Fila* iniciar_fila(){
	Fila *fila = malloc(sizeof(Fila));
	if(fila){
		fila->inicio = NULL;
		fila->fim = NULL;
	}else{
		printf("\nErro ao alocar memoria.\n");
	}
	return fila;
}
//inserir na lista
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

//retira um elemento do inicio e insere no fim da fila
void fila_retira_inicio_insere_fim(Fila *fila){
	if(fila == NULL || fila->inicio == NULL){
		printf("\nFila vazia.\n");
	}else{
		Lista *novo = malloc(sizeof(Lista));
		Lista *retirado = fila->inicio;
		novo->info = retirado->info;
//		printf("%d", novo->info);
		novo->prox = NULL;
		fila->inicio = retirado->prox;
//		printf("retirado: %d", fila->inicio->info);
		if(fila->inicio == NULL){
			fila->fim = NULL;
		}else{
			Lista *lAux = fila->inicio;
			while(lAux){
				printf("%d", lAux->info);
				lAux = lAux->prox;
			}
			lAux = novo;
/*			retirado = fila->inicio;
			fila->inicio = retirado->prox;
//			fila->fim->prox = retirado;
//			fila->fim = retirado;

			Lista *lAux = fila->inicio;
*/			
		}
	}
}

//imprimir pilha
void imprimir_pilha(Pilha* pilha){
	Pilha *pAux = pilha;
	while(pAux){
		printf("%d", pAux->info);
		pAux = pAux->prox;
	}
}

//imprimir lista
void imprimir_lista(Lista* lista){
	Lista* lAux = lista;
	while(lAux){
		printf("%d", lAux->info);
		lAux = lAux->prox;
	}
}

//imprimir fila
void imprimir_fila(Lista *lista){
	Lista *lAux = lista;
	while(lAux){
		printf("%d ", lAux->info);
		lAux = lAux->prox;
	}
}

//ler valor
int ler_info(){
    int a;
	printf("Digite um numero: ");
	scanf("%d",&a);
    return a;
}

//função principal
int main(){
	Lista *lista = NULL;
	inserir_na_lista(&lista, 1);
	inserir_na_lista(&lista, 2);
	inserir_na_lista(&lista, 3);
	inserir_na_lista(&lista, 4);
	inserir_na_lista(&lista, 5);
//    imprimir_lista(lista);
    
//    Pilha* pilha = pilha_push_lista(&lista);
//    if(pilha){
//	  imprimir_pilha(pilha);
//	  }

//	lista = lista_insere_pilha(pilha);
//	imprimir_lista(lista);

	Fila *fila = iniciar_fila();
	fila->inicio = lista;
	fila->fim = lista;
	fila_retira_inicio_insere_fim(fila);
	imprimir_lista(fila->fim);
    return 0;
}
