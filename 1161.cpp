//
// Created by yagoa on 05/09/2025.
//
#include <stdio.h>

long long fatorial(long long fator){
    if(fator == 0)
        return 1;
    return fator * fatorial(fator-1);
}

int main (){
    long long fatorial1, fatorial2;
    while(scanf("%lld %lld",&fatorial1,&fatorial2)!=EOF)
        printf("%lld\n", fatorial(fatorial1)+ fatorial(fatorial2));
    return 0;
}