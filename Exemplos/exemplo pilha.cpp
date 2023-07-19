#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_info();

typedef struct pilha{
    int info;
    struct pilha *prox;
} Pilha;

Pilha* empilhar(Pilha* topo){
    Pilha* novo = malloc(sizeof(Pilha));
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

int ler_info(){
    int a = 5;
    return a;
}

int main(){
    Pilha *topo = NULL;
    topo = empilhar(topo);
    return 0;
}

