//
// Created by yagoa on 28/08/2025.
//
#include <stdio.h>

int Blobs (double suprimentos){
    if(suprimentos <= 1)
        return 0;
    return Blobs(suprimentos/2) + 1;
}

int main (){
    int repeticao, i;
    double suprimentos;
    scanf("%d",&repeticao);
    for(i=0; i<repeticao; i++){
        scanf("%lf", &suprimentos);
        printf("%d dias\n",Blobs(suprimentos));
    }
    return 0;
}