#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int *pa;
	a = 10;
	printf("%d", a);
	pa = &a;
	printf("%d", *pa);
	
	return 0;
}

