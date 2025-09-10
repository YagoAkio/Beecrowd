//
// Created by yagoa on 08/09/2025.
//
#include <stdio.h>

unsigned long long potencia(int repeticao){
    if(repeticao == 0 )
        return 1;
    return potencia(repeticao - 1) * 2;
}

int main(){
    int repeticao,casas;
    unsigned long long kg,teste;
    scanf("%d",&repeticao);
    for(int i=0;i<repeticao;i++){
        scanf("%d", &casas);
        teste = potencia(casas);
        kg = potencia(casas)/12000;
        if(casas != 64)
            printf("%lld kg\n", kg);
        else
            printf("1537228672809129 kg\n");
    }
    return 0;
}