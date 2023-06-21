#include <stdio.h>

int main()
{
    int a , b, c, d, e, maior  , menor, v=0;

    scanf("%d" ,&a);

    if( a % 3 == 0) {
        v++;
    }

    maior = a;
    menor = a;

    scanf("%d" ,&b);

    if( b % 3 == 0) {
        v++;
    }

    if( b > maior){
        maior =b;
    }
    if(b < menor){
        menor =b;
    }

    scanf("%d" ,&c);

    if( c % 3 == 0) {
        v++;
    }

    if( c > maior){
        maior = c;
    }
    if(c < menor){
        menor = c;
    }

    scanf("%d" ,&d);

    if( d % 3 == 0) {
        v++;
    }

    if( d > maior){
        maior = d;
    }
    if(d < menor){
        menor =d;
    }

    scanf("%d" ,&e);

     if( e % 3 == 0) {
        v++;
     }

    if( e > maior){
        maior = e;
    }
    if(e < menor){
        menor = e;
    }

    printf("Maior: %d\n" ,maior);
    printf("Menor: %d\n" ,menor);
    printf("Divisiveis por 3: %d\n" ,v);


    return 0;

}