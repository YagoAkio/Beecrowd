//
// Created by yagoa on 28/08/2025.
//
#include <stdio.h>

int main(){
    float Ev1, Ev2, At, D, chance , a;
    int quantidadeRodadas;
    while(Ev1 == Ev2 == At == D == 0){
        scanf("%f %f %f %f", &Ev1, &Ev2, &At, &D);
        quantidadeRodadas = D / Ev2;
        a = quantidadeRodadas;
        chance = ((At/6) / a) * 100;
        printf("%.1f\n",chance);
    }
    return 0;
}