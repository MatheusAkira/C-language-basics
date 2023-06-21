#include <stdio.h>
#include <math.h>

struct irisStruct{
    float comp_da_sep;
    float largura_sep;
    float comp_pet;
    float larg_pet;
    char tipo[50];
};



typedef struct irisStruct iris;



void classificar(iris *nao_identificada, iris registros_identificados[], int n){
    float num[6];
    

    for(int i = 0 ; i <n ; i++){
    num[i] =pow(registros_identificados[i].comp_da_sep - nao_identificada->comp_da_sep, 2) +
	    pow(registros_identificados[i].largura_sep - nao_identificada->largura_sep, 2) + 
            pow(registros_identificados[i].comp_pet - nao_identificada->comp_pet, 2) + 
            pow(registros_identificados[i].larg_pet - nao_identificada->larg_pet, 2);
	    

    }
    float res[6];

    for(int i = 0; i < n; i++){
        res[i] = sqrt(num[i]);

    }
    int a;
    
    
    int menor= res[0];
    if (menor = res[0]){
        a = 0;
    }
    for(int i =1; i<6; i++){
        if(res[i] < menor){
            a = i;
            menor= res[i];
        }
    }

    

    printf("Tipo de flor: %s\n", registros_identificados[a].tipo );
}




int main() {
    iris registros_identificados[6];
    iris nao_identificada;

    for(int i = 0; i <6; i++){
        scanf("%f",&registros_identificados[i].comp_da_sep);
        scanf("%f",&registros_identificados[i].largura_sep);
        scanf("%f",&registros_identificados[i].comp_pet);
        scanf("%f",&registros_identificados[i].larg_pet);
        scanf("%s",registros_identificados[i].tipo);
    }

    scanf("%f",&nao_identificada.comp_da_sep);
    scanf("%f",&nao_identificada.largura_sep);
    scanf("%f",&nao_identificada.comp_pet);
    scanf("%f",&nao_identificada.larg_pet);

    classificar(&nao_identificada, registros_identificados, 6);

}