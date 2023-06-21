#include <stdio.h>

int main()
{
    float pb = 122;
    float ab = 1.84;
    float po = 45;
    float ao = 1.76;

    float imcb = pb / (ab * ab);
    float imco = po / (ao * ao);
    
    float pib = 25 * (ab*ab);
    float pio = 18.5 * (ao*ao);
    
    float bp = (pb - pib);
    float og = (pio - po);

    printf("IMC Brutos = %.2f\n" ,imcb);
    printf("IMC Olivia = %.2f\n" ,imco);
    printf("Brutos precisa perder %.2f quilos\n" ,bp);
    printf("Olivia precisa ganhar %.2f quilos\n" ,og);

    return 0;
}