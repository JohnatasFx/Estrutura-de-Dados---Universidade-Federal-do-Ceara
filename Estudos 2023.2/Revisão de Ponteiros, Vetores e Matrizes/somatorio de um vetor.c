#include <stdio.h>
#include <stdlib.h>
float somatorio(int m, float *v){
	int i; 
	float somatorio = 0.0F;
	for(i=0;i<m;i++){
		somatorio += v[i];
	}
	return somatorio;
}
int main(){
	float v[] = {2,3,4};
	float soma = somatorio((sizeof(v)/sizeof(v[0])),v);
	printf("%f", soma);
	return 0;
}

