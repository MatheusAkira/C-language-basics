#include <stdio.h>


int main()
{
    int a = 5498;
    int b = ( a/ 3600);
    int c =  a - ( b * 3600);
    int d = c / 60;
    int e =  a - ( b * 3600 + d * 60);
    printf ("%ih %im %is\n" ,b ,d ,e);

    int f = 1478;
    int g = ( f/ 3600);
    int h =  f - ( g * 3600);
    int i = h / 60;
    int j =  f - ( g * 3600 + i * 60);
    printf ("%ih %im %is\n" ,g ,i ,j);

    int k = 48590;
    int l = ( k/ 3600);
    int m =  k - ( l * 3600);
    int n = m / 60;
    int o =  k - ( l * 3600 + n * 60);
    printf ("%ih %im %is\n" ,l ,n ,o);



}


