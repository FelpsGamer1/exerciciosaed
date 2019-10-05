#include <stdio.h>
#include <stdlib.h>

int main(){
int vet[10], aux;

    for(int i = 0; i < 10; i ++){
        vet[i] = rand()%50;
    }

    for(int i = 0; i < 10; i++){
        for(int k = 0; k < 10-1; k++){
            if(vet[i] > vet[k]){
                aux = vet[i];
                vet[i] = vet [k];
                vet[k] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i ++){
        printf("%d ", vet[i]);
    }


	return 0;
}
