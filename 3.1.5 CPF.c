#include <stdio.h>

int main()
{

    int a, b, c, d, e, f, g, h, i, soma1, soma3, v1, v2;

    scanf("%d" ,&a);
    scanf("%d" ,&b);
    scanf("%d" ,&c);
    scanf("%d" ,&d);
    scanf("%d" ,&e);
    scanf("%d" ,&f);
    scanf("%d" ,&g);
    scanf("%d" ,&h);
    scanf("%d" ,&i);

    soma1 = (10*a)+(9*b)+(8*c)+(7*d)+(6*e)+(5*f)+(4*g)+(3*h)+(2*i);
   
    if(soma1 % 11 == 0 || soma1 % 11 ==1){
        v1 = 0;
    }
    else{
        v1= 11 - ( soma1 % 11);
    }

    soma3 = (11*a)+(10*b)+(9*c)+(8*d)+(7*e)+(6*f)+(5*g)+(4*h)+(3*i)+(2*v1);
    

    if(soma3 % 11 == 0 || soma3 % 11 ==1){
        v2 = 0;
    }
    else{
        v2= 11 - ( soma3 % 11);
    }
    printf("Digitos verificadores: %d%d\n",v1 ,v2);
    
    return 0;
}
