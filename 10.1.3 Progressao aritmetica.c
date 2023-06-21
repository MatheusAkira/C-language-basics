#include <stdio.h>
#include <stdlib.h>

void imprimirPA(int r, int x, int n){
    if(n==1){
        int aux;
        aux = x;
        printf("%d\n", aux);
    }
    else{
        int aux;
        aux = x + (n-1)*(r);
        printf("%d\n", aux);
        imprimirPA(r,x,(n-1));
        
    }
    
}

int main() {
    int r, x, n;

    scanf("%d" ,&r);
    scanf("%d" ,&x);
    scanf("%d" ,&n);
    
    imprimirPA(r,x,n);
            
}

