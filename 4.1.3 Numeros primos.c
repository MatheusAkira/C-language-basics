#include <stdio.h>


int main()
{
    int a =0;
    int b =0;
    int c =0;
    int e =0;
    int d =0;

    while(a==b){
        scanf("%d" ,&c);


        if(c >0){
        for(int i = 1 ; i <=c ; i++){
            if(c % i == 0){
                d++;
            }
        }

        if( d == 2){
            e++;
        }
        d = 0;

        }

    if( c < 0){
        b = 1;
        }

    }

    printf("Foram identificados %d numeros primos\n" ,e);

}

