//
// Created by yagoa on 29/08/2025.
//
#include <stdio.h>

void funcaoAuxiiar(int vet[10], int num){
    if(num>0){
        vet[num%10]++;
        funcaoAuxiiar(vet, (num - (num%10))/10);
    }
}

int main(){
    int Inicio, Fim, vetorDeInteiro[10] = {0},i;
    scanf("%d %d",&Inicio,&Fim);
    while (Inicio != 0 || Fim != 0){
        for(i = Inicio; i<=Fim; i++){
            funcaoAuxiiar(vetorDeInteiro, i);
        }
        printf("%d ",vetorDeInteiro[0]);
        for(i = 1; i<10; i++)
            printf( "%d ",vetorDeInteiro[i]);
        printf("\n");
        scanf("%d %d",&Inicio,&Fim);
    }

    return 0;
}