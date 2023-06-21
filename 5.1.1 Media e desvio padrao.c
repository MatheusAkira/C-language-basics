#include <stdio.h>
#include <math.h>

int main()
{
    float valor[10];
    float total = 0;
    float media =0;
    float numero=0;
    float ne = 0;


    for(int i = 0 ; i <10 ; i++){
        scanf("%f" ,&valor[i]);
        ne ++;

    }

    for(int b =0 ; b <10 ; b++)
        total += valor[b];

    media = total/10;

    float dp = 0.0;
    for(int i = 0 ; i <10 ; i++)
    dp += pow(valor[i] - media, 2);

    dp= sqrt(dp/(ne-1));


    printf("Media: %.2f\n" ,media);
    printf("Desvio padrao: %.2f\n" ,dp);

    return 0;
}


