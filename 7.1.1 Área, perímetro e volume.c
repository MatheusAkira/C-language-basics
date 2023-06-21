#include <stdio.h>


float calcular_perimetro(float r){

    float perimetro = 2 * 3.1415* r;
    return perimetro;
}

float calcular_area(float r){

    float area = 3.1415 * (r*r);
    return area;
}

float calcular_volume(float r){

    float volume =  4 * 3.1415 * ((r*r*r)/3) ;
    return volume;
}




int main()
{

float r, v;

scanf("%f", &r);

v = calcular_perimetro(r);
printf("Raio: Perimetro: %.2f\n", v);

v = calcular_area(r);
printf("Area: %.2f\n", v);

v = calcular_volume(r);
printf("Volume: %.2f\n", v);


return 0;
}
