#include <stdio.h>

int main(){

    int vet[11], tmp;
    
    for(int i=0; i < 10; i ++){
        vet[i] = i;
    }

    printf("insira um valor no vetor ordenado:\n");
    scanf("%d", &vet[10]);    

    for(int i=0; i<11; i++){
        for(int j=0; j<11-1; j++){
            if(vet[i] < vet[j]){
                tmp = vet[i];
                vet[i] = vet[j];
                vet[j] = tmp;
            }
        }
    }
    
    for(int i=0; i<11; i++) printf("%d ", vet[i]);


return 0;
}