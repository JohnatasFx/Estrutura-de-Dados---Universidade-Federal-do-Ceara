#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb){
	int ptemp;
	ptemp = *pa;
	*pa = *pb;
	*pb = ptemp;
}

int main(){
	
	int a = 10, b = 20;
	printf("a: %d", a);
	printf("\n");
	printf("b: %d", b);
	printf("\n");
	
	troca(&a, &b);
	printf("a: %d", a);
	printf("\n");
	printf("b: %d", b);
	printf("\n");
	return 0;
}

