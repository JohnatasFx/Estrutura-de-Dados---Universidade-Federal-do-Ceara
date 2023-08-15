#include <stdio.h>
#include <stdlib.h>
void array1(){
	int v[] = {2,3,4};
	int i;
	for(i = 0; i < (sizeof(v)/sizeof(v[0])); i++){
		printf("%d", v[i]);
	}
}

void array2(){
	int v[3] = {2,3,4};
	int i;
	for(i = 0; i < 3; i++){
		printf("%d", v[i]);
	}
}

void array3(){
	int v[3];
	*v = 2;
	*(v+1) = 3;
	*(v+2) = 4;
	int i;
	for(i = 0; i < 3; i++){
		printf("%d", v[i]);
	}
}

void array4(int *v){
	*v = 2;
	*(v+1) = 3;
	*(v+2) = 4;
}

int main(){
	//array1();
	//array2();
	//array3();
	
	int v[3];
	array4(v);
	int i;
	for(i = 0; i < 3; i++){
		printf("%d", v[i]);
	}
	
	return 0;
}

