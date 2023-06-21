#include <stdio.h>
#include <stdlib.h>

int menor (int *v, int n){
    int result, aux;
    
    
    if(n == 0){return v[0];}
    
    else{
        
        if (n==1) return (v[0]);
        else {
	int x;
	x=menor(v, n-1);
	
	if (x<v[n-1]) return (x);
	else return (v[n-1]);
}
    }
}


int main() {
    
    int n;
    scanf("%d", &n);
    
    int vector[n];
    
    for(int i =0; i < n ; i++){
        scanf("%d" ,&vector[i]);
    }
    int result = menor (vector,  n);
    
    printf("%d\n", result);
}