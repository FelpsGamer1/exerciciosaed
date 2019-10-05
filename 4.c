#include <stdio.h>

int main(){
	int n;

	printf("Digite o tamanho:\n");
	scanf("%d", &n);

	int v[n], aux =0;

	for(int i=0; i < n; i++){
		printf("Digite os valores:\n");
		scanf("%d", &v[i]);
	}

	for(int k=0; k < n; k++){
		for(int p = k; p < n; p++){
			if(v[k] > v[p]){
				aux++;
			}

		}
	}

	if(aux ==0){
		printf("Ordenado");
	}

	return 0;
}
