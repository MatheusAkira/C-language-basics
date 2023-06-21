#include <stdio.h>

int main()
{
    float r1 = 1;
    float p1 = 2 * 3.1416 * r1;
    float a1 = 3.1416*( r1 * r1);
    float v1 = 4*3.1416*( r1 * r1 * r1)/ 3;

    float r2 = 2.5;
    float p2 = 2*3.1416*r2;
    float a2 = 3.1416 *( r2 * r2);
    float v2 = 4*3.1416*( r2 * r2 * r2)/ 3;

    float r3 = 5.2;
    float p3 = 2 * 3.1416 * r3;
    float a3 = 3.1416*( r3 * r3);
    float v3 = 4*3.1416*( r3 * r3 * r3)/ 3;

    printf("P=%.2f   A=%.2f   V=%.2f\n",p1 ,a1 ,v1 );
    printf("P=%.2f  A=%.2f  V=%.2f\n",p2 ,a2 ,v2 );
    printf("P=%.2f  A=%.2f  V=%.2f\n",p3 ,a3 ,v3 );

    return 0 ;
}