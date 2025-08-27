//
// Created by yagoa on 27/08/2025.
//
#include <stdio.h>

int contador(int igualdade, int repeticao) {
    int numero;
    if (repeticao == 0)
        return 0;
    scanf("%d", &numero);
    if (numero == igualdade)
        return contador(igualdade, repeticao-1) + 1;
    else
        return contador(igualdade, repeticao-1);
}

int main () {
    int igualdade;
    scanf("%d",&igualdade);
    printf("%d\n", contador(igualdade, 5));
    return 0;
}