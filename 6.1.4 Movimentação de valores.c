#include <stdio.h>

int main()
{
    int matriz[4][4];
    int c = 0;
    int d = 0;


    for(int a = 0; a <4 ; a++  ){
        for(int b = 0; b<4; b++){
            scanf("%d" ,&matriz[a][b]);
        }
    }

       for(int a = 0; a < 4 ; a++){

              if(a==0)
               c=3;

               else
                c = a - 1;

        for(int b = 0; b < 4; b++){

               if(b==0)
               d=3;

               else
                d = b - 1;



            printf("%d\t", matriz[c][d]);
        }
    printf("\n");
    }
}


