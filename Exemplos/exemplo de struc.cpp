#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int idade;
	int matricula;
	char nome [18];
}Aluno;

int main (){
	Aluno a;
	a.idade = 23;
	a.matricula = 422160;
	strcpy(a.nome, "Johnatas Felix Zuza");
	
	printf("%d, %d, %s", a.idade, a.matricula, a.nome);
	
	return 0;
}
