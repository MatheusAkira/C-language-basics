#include <stdio.h>

int main()
{
    int vm;
    int vv;

    scanf("%i" ,&vm);
    if(vm <=0){
        printf("Velocidade invalida!\n");
    }
    else{
    scanf("%i" ,&vv);
    
    if(vv <=0 ){
        printf("Velocidade invalida!\n");
    }
  
    if(vv > 0 && vv <= vm ){
    printf("Nenhuma infracao cometida\n");
    }

    if(vv > vm &&  vv <= (1.2 * vm) ) {
        printf("Infracao media\n");
    }

    if(vv > 1.2 * vm &&  vv <= (1.5* vm) ){
        printf("Infracao grave\n");
    }

    if(vv > 1.5 * vm ){
        printf("Infracao gravissima\n");
    }
    }
    return 0;
}
