#include <stdio.h>

int main()
{

   int matriz[4][4];
   int c = 0;
   int d = 0;
   int e =0;
   int f = 0;

   for(int a=0; a<4; a++){
       for(int b=0; b<4; b++){
        scanf("%i" ,&matriz[a][b]);
       }
   }


    for(int a =0; a<4; a++){
    for(int b =0; b<4; b++){

        if(matriz[a][b]==0){
            c++;
                if(c==4){
                    d++;
                }
        }

    }
    c=0;
    }

    for(int b =0; b<4; b++){
    for(int a =0; a<4; a++){
        if(matriz[a][b]==0){
            e++;
                if(e==4){
                    f++;

                }
        }
    }
    e=0;
    }



       printf("Total de colunas nulas: %d\n" ,f);
       printf("Total de linhas nulas: %d\n",d);


}
