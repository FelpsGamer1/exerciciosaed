#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10], tmp;

    for(int i=0; i<10; i++){
        vet[i] = i;
    }

    printf("que numero deseja procurar:\n");
    scanf("%d", &tmp);

    for(int i=0; i<10; i++){
        if(tmp == vet[i]){
            printf("valor encontrado:\n");
            exit(1);
        }       
    }
    printf("valor nao encontrado:\n");

    return 0;
}