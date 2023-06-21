#include <stdio.h>



int divisores(int a, int b, int n, int *mdc){
    static int c = 1;
    int bigger,smaller;
    
    if(a>=b){
        bigger = a;
        smaller = b;
    }
    else{
        bigger = b;
        smaller = a;
    }
    
    if(c == smaller){
            if (bigger%smaller == 0){
                *mdc = c;
                n++;
            }
             return n;
               
    }
    if(bigger%c == 0 && smaller%c == 0){
        *mdc = c;
        n++;
    }
    c++;
    divisores(bigger,smaller,n,mdc);
}



int main(){
    int mdc,a,b;
    int n = 0;
  
    scanf("%d", &a);
    scanf("%d", &b);
    
    n = divisores(a,b,n,&mdc);
    printf("%i %i",mdc,n);
}

