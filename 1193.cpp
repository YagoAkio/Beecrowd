//
// Created by yagoa on 09/09/2025.
//
#include <stdio.h>
#include <stdlib.h>

#define TFlinha 68
#define TFnumero 64

void CasoNumeroDecimal(char numero[TFnumero]){
    int aux,num,hex;
    aux = num = atoi(numero);
    while(aux!=0){
        printf("%d",aux%2);
        aux = (aux-(aux%2))/2;
    }
    printf(" bin\n")
    aux = num;
    while(aux!=0){
        hex = aux % 16;
        if(hex == 10)
            printf("a");
        else if(hex == 11)
            printf("b");
        else if(hex == 12)
            printf("c");
        else if (hex == 13)
            printf("d");
        else if(hex == 14)
            printf("e");
        else if(hex == 15)
            printf("f");
        else
            printf("%d",hex);
        aux = (aux-(aux%16))/16;
    }
    printf(" hex\n");
}

int main(){
    int repeticao,aux;
    char linha[TFlinha], numero[TFnumero], tipoDoNumero;
    scanf("%d",&repeticao);
    for(int i = 0; i<repeticao; i++){
        fflush(stdin);
        gets(linha);
        aux = 0;
        while(linha[aux]!=' '){
            numero[aux] = linha[aux];
            aux++;
        }
        aux++;
        tipoDoNumero = linha[aux];
        switch (tipoDoNumero) {
            case 'd':
                printf("Case %d:\n", i);
                CasoNumeroDecimal(numero);
                break;
            case 'h':

                break;
            case 'b':

                break;
        }
    }

    return 0;
}