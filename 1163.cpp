//
// Created by yagoa on 05/09/2025.
//
#include <stdio.h>
#include <math.h>

#define gravidade 9.80665
#define pi 3.14159

double lancamentoObliquo(double v, double anguloGraus, double h) {
    double anguloRad = anguloGraus * pi / 180.0;

    // Componentes da velocidade
    double vx = v * cos(anguloRad);
    double vy = v * sin(anguloRad);

    // Tempo total de voo (raiz positiva da equação quadrática)
    double tTotal = (vy + sqrt(vy*vy + 2.0 * gravidade * h)) / gravidade;

    // Alcance horizontal
    return vx * tTotal;
}

int main() {
    double altura, angulo, velocidade;
    double velocidadeInicialX, velocidadeInicialY, tempo, distanciaPercorrida;
    int inicio, termino, repeticao;

    while(scanf("%lf", &altura) != EOF){
        scanf("%d %d", &inicio, &termino);
        scanf("%d", &repeticao);

        for(int i = 0; i < repeticao; i++){
            scanf("%lf %lf", &angulo, &velocidade);
            distanciaPercorrida = lancamentoObliquo(velocidade, angulo, altura);

            printf("%.5lf -> ", distanciaPercorrida);
            if(distanciaPercorrida > inicio && distanciaPercorrida < termino)
                printf("DUCK\n");
            else
                printf("NUCK\n");
        }
    }

    return 0;
}
