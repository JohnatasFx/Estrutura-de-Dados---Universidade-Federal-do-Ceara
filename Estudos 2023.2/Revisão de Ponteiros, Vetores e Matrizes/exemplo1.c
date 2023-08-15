#include <stdio.h>
#include <stdlib.h>

void somaprod(int x, int y, int *s, int *p){
	*s = x + y;
	*p = x * y;
}

int main(){
	int s, p;
	somaprod(3,5,&s,&p);
	printf("A soma eh: %d\n", s);
	printf("\n");
	printf("O Produto eh: %d", p);
	return 0;
}

