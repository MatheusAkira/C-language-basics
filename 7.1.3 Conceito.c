#include <stdio.h>

int obter_conceito(int n1, int n2, int n3, int n4, char *conceito){

char a = 'A';
char b = 'B';
char c = 'C';
char d = 'D';
char e = 'E';
char f = 'F';


if( n1 < 0 || n1 > 100 || n2 < 0 || n2 > 100 || n3 < 0 || n3 > 100 ||n4 < 0 || n4 > 100 )
    return 0;


else{
int media = (n1 + n2 + n3 + n4)/4;

if( media >= 90)
    *conceito = a;

if( media >= 80 && media < 90)
    *conceito = b;

if( media >= 70 && media < 80)
    *conceito = c;

if( media >= 50 && media < 70)
    *conceito = d;

if( media >= 40 && media < 50)
    *conceito = e;

if( media >= 0 && media < 40)
    *conceito = f;

return 1;
}

}

int main()
{
    int n1, n2, n3, n4;
    int r;

    char conceito;




    scanf ("%d %d %d %d" ,&n1 ,&n2 ,&n3 ,&n4);

    int b = obter_conceito( n1, n2, n3, n4, &conceito);
    if(b == 0)
        printf("Nota invalida!\n");

    else{
    obter_conceito( n1, n2, n3, n4, &conceito);
    printf ("Conceito: %c\n" , conceito);
    }

    return 0;
}
