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

//inserir da lista para a pilha
Pilha* pilha_push_lista(Lista** lista) {
    Pilha* pilha = NULL;
    Lista* lAux = *lista;
    while (lAux) {
        Pilha* novo = malloc(sizeof(Pilha));
        if (novo) {
            novo->info = lAux->info;
            novo->prox = pilha;
            pilha = novo;
            lAux = lAux->prox;
        } else {
            printf("\nErro ao alocar memoria.\n");
            while (pilha) {
                Pilha* aux = pilha;
                pilha = pilha->prox;
                free(aux);
            }
            return NULL;
        }
    }
    return pilha;
}

//inserir da pilha para a lista
Lista* lista_insere_pilha(Pilha *pilha){
	Lista *lista = NULL;
	while(pilha){
		Lista *novo = malloc(sizeof(Lista));
		if(novo){
			novo->info = pilha->info;
			novo->prox = lista;
			lista = novo;
			pilha = pilha->prox;
		}else{
			printf("\nErro ao alocar memoria.\n");
		}
	}
	return lista;
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
    imprimir_lista(lista);
    
    Pilha* pilha = pilha_push_lista(&lista);
    if(pilha){
    	imprimir_pilha(pilha);
	}

	lista = lista_insere_pilha(pilha);
	imprimir_lista(lista);
    return 0;
}
