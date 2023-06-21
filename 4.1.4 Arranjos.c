#include <stdio.h>


int main()
{
    int n, r,  den1,  arran;



    scanf("%d" ,&n);
    scanf("%d" ,&r);



    if( n < 0){
        printf("n invalido!\n");
    }

    if( r < 0){
        printf("r invalido!\n");
    }


    if ( r > 0 && n >0 ){
            if(r <= n ){

        den1 = n -r;

        for( int i = (n-1) ; i >= 1 ; i-- ){
            n *=  i;
        }

        if(den1 ==0 || den1 == 1){
        den1=1;
    }

      if( den1 > 1 ){
       for( int j = (den1 -1 ); j>=1 ; j--) {
        den1 *= j;
       }
      }





       arran = n/den1;

        printf("%d\n" ,arran);
    }

    if(r > n){
       printf("r nao pode ser maior do que n!\n");
    }
    }



}
