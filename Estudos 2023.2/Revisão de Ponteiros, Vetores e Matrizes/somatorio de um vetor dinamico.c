#include <stdio.h>
#include <stdlib.h>

float somatorio(int n, float *v){
	
	int i;
	float s = 0.0F;
	for(i = 0; i <n;i++){
		s += v[i];
	}
	
	return s;
}

int main(){
	
	float *v;
	float s;
	int n; 
	int i;
	
	scanf("%d", &n);
	getchar();
	
	v = (float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++){
		scanf("%f", &v[i]);
	}
	
	s = somatorio(n,v);
	printf("%f", s);
	
	free(v);
	return 0;
}

