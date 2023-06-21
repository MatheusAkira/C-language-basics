#include <stdio.h>

int main()
{
    int num1 = 10;
    int a = num1 % 10;
    int b = (num1/10) % 10;
    printf("valor invertido: %i%i00\n" ,a ,b);

    int num2 = 9899;
    int c = num2 % 10;
    int d = (num2/10) % 10;
    int e = (num2/100) % 10;
    int f = (num2/1000) % 10;
    printf("valor invertido: %i%i%i%i\n" ,c ,d ,e ,f);

    int num3 = 1723;
    int g = num3 % 10;
    int h = (num3/10) % 10;
    int i = (num3/100) % 10;
    int j = (num3/1000) % 10;
    printf("valor invertido: %i%i%i%i\n" ,g ,h ,i ,j);

    return 0;

}