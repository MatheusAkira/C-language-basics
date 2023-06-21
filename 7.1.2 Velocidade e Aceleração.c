#include <stdio.h>


float velocidade_final(float v, float a, float t){

    float vf = v + a*t;
    return vf;
}

float distancia_percorrida(float v, float a, float t){

    float s = v * t + ((a*t*t)/2);
    return s ;
}





int main()
{

float v, a, t ,vf, s;

scanf("%f %f %f",&v ,&a ,&t);

vf = velocidade_final(v, a, t);
printf("Velocidade final: %.2f\n", vf);

s = distancia_percorrida(v, a, t);
printf("Distancia percorrida: %.2f\n", s);




return 0;
}
