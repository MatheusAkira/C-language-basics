#include <stdio.h>


int main()
{
    float a = 789.54;
    float b = (a * 1.0056) + 303.20;
    float c = ( b * 1.0056) - 58.25;
    float d = c * 1.0056;
    printf("R$%.2f" ,d);
    return 0;

}
