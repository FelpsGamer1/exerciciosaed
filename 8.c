#include <stdio.h>

int main(){

    int vet[10] = {5,3,7,9,1,6,0,8,672,85}, cout = 0, tmp;

    printf("vetor sem ordenar:\n");
        for(int i=0; i<10; i++){
            printf("%d ", vet[i]);
        }
    printf("\n\n");

        for(int i=0; i < 10; i++){
            for(int k=0; k<10-1;k++){
                if(vet[i] < vet[k]){
                    tmp = vet[i];
                    vet[i] = vet[k];
                    vet[k] = tmp;
                    cout ++;
                    if(cout == 4){
                        printf("vetor apos 4 trocas:\n");
                        for(int j=0; j<10;j++){
                            printf("%d ", vet[j]);
                        }
                    printf("\n\n");
                    }
                }
            }
        }
    printf("vetor totalmente ordenado:\n");
        for(int i=0; i<10;i++){
            printf("%d ", vet[i]);
        }   
    printf("\n\n");
    return 0;
}