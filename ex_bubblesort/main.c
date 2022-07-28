#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {9,2,8,4,5,6,1};
    int tam = sizeof(vet)/sizeof(int);
    int aux, i, j;


    for(j=0;j<tam;j++){
        for(i=0;i<tam;i++){

            if((i!=0) && vet[i-1]>vet[i]){
            aux=vet[i];
            vet[i]=vet[i-1];
            vet[i-1]=aux;
            }
            //printf("%d: %d \n", i, vet[i]);
        }
        //printf("%d: %d \n", j, vet[j]);
    }
    for(int l=0;l<tam;l++){
        printf("%d: %d \n", l, vet[l]);
    }
}

