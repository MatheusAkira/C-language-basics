#include <stdio.h>

struct dataStruct{
    int dia;
    int mes;
    int ano;
};

typedef struct dataStruct Data;

struct eventoStruct{
    char nome[100];
    char local[100];
    Data data;  
};

typedef struct eventoStruct Evento;

 
void cadastrar_eventos( Evento agenda[], int n ){
    scanf("%s %s %d %d %d", agenda[n].nome, agenda[n].local, &agenda[n].data.dia ,&agenda[n].data.mes ,&agenda[n].data.ano);   
}

void imprimir_eventos(Evento agenda[], Data d, int n){
    int c =0;
    
    for(int i = 0 ; i<n; i++){   
        if(d.dia== agenda[i].data.dia && d.mes== agenda[i].data.mes && d.ano == agenda[i].data.ano){
            printf("%s %s\n" ,agenda[i].nome, agenda[i].local);
            c++;
        }
    }
        if(c==0){
        printf("Nenhum evento encontrado!\n");
    }
}
    


int main() {
    
    int quant = 3;
    Evento agenda[quant];
    Data d;
   
     
    for (int i = 0; i < quant; i++) {
        cadastrar_eventos( agenda, i );
    }
    
    scanf("%d",&d.dia);
    scanf("%d", &d.mes);
    scanf("%d", &d.ano);   
     
    

    imprimir_eventos(agenda, d, quant);
    

   
    
    //imprimir_eventos(Evento agenda[], Data d, int n);
    
      
}

