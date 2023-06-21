#include <stdio.h>

int main()
{
    int a, b,  maior, menor;

    scanf ("%i" ,&a);
    scanf ("%i" ,&b);



   if( b >= a){
     maior = b ;
        menor = a;
   }


    for(int x =0 ; x <= maior; x++ ){
        int r = x * x;
        if( r <= maior && r>= menor)
        printf("%i\n" ,r);
    }


}
