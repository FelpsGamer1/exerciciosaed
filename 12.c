#include <stdlib.h>
#include <stdio.h>

void QuickSort(int *vet, int left, int right){
int i, j, x, aux;
	
	i = left;
	j = right;
	x = vet[(left + right/2)];

		while(i <= j){
			while(vet[i] < x &&	i < right){
				i++;
			}
			while(vet[j] > x && j > left){
				j--;
			}
			if(i <= j){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				i++;
				j--;
			}
		if(j > left){
			QuickSort(vet, left, j);
		}
		if(i < right){
			QuickSort(vet, i, right);
		}
	}
}

int main(){
	int vet[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};

	QuickSort(vet, 0, 16 - 1);

	for(int i = 0; i < 16; i++){
		printf("%d ", vet[i]);
	}

	return 0;
}