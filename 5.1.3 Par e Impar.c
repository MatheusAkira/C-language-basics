#include <stdio.h>

int main()
{
    int valor[10];

    for(int i=0; i<10; i++)
    scanf("%d", &valor[i]);

    printf("Valores impares:\n");
    for(int i=0; i<10; i++){
        if( valor[i]%2!=0){
           printf("%d\n" ,valor[i]);
        }
    }
    printf("Valores pares:\n");
    for(int i=0; i<10; i++){
        if( valor[i]%2==0){
           printf("%d\n" ,valor[i]);
        }
    }


}
