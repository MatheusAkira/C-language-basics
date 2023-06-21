#include <stdio.h>
#include <stdlib.h>

float somatorio (int n){ 
    if(n==0){return 0;}
    
    else{
        float result;
        result = (float)n/(n+1) + somatorio(n-1);
        
        return result;
    }
    
}
int main() {
    int number;
    float result;

    scanf("%d", &number);
    result = somatorio(number);
    printf("%.2f\n", result);
}