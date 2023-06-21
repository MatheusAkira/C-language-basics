#include <stdio.h>

int main()
{
    int  a1, r, n;

    scanf("%i" ,&a1);
    scanf("%i" ,&r);
    scanf("%i" ,&n);

    for (int x = 1 ; x<=n ; x++){

        printf("%i\n" ,a1);
        a1 = a1 +r;


    }

    return 0;
}
