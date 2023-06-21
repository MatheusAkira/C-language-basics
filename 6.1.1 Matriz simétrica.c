#include <stdio.h>

int main()
{
    int matriz[4][4];
    int c = 0;

    for(int a = 0; a <4 ; a++  ){
        for(int b = 0; b<4; b++){
            scanf("%d" ,&matriz[a][b]);
        }

    }

    for(int e=0; e<4; e++){
        for (int d=0; d<4; d++){
            if(matriz[e][d]==matriz[d][e])
                c++;
        }
    }

    if(c==16)
        printf("Matriz simetrica");
    else
        printf("Nao e uma matriz simetrica");

}
