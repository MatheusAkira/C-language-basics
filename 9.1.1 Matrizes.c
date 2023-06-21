#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int **m, int l, int c){ // l = linha, c = coluna
 int i, j;
 for (i=0; i<l; i++){
 for (j=0; j<c; j++){
 printf("%d\t", m[i][j]);
 }
 printf("\n");
 }
}



 

int main() {
    
    int numberOfLinesA;
    int numberOfcolumnsA;
    int numberOfLinesB;
    int numberOfcolumnsB;
    
    scanf("%d",&numberOfLinesA );
    scanf("%d",&numberOfcolumnsA);
    scanf("%d",&numberOfLinesB );
    scanf("%d",&numberOfcolumnsB);
    
    if( numberOfcolumnsA == numberOfLinesB ){
        
        int matrizA[numberOfLinesA][numberOfcolumnsA];
        
        for(int a=0; a<numberOfLinesA; a++){
            for(int b =0; b<numberOfcolumnsA; b++){
                scanf("%d", &matrizA [a][b]);
            }
	}
        
        int matrizB[numberOfLinesB][numberOfcolumnsB];
        
        for(int a=0; a<numberOfLinesB; a++){
            for(int b =0; b<numberOfcolumnsB; b++){
                scanf("%d", &matrizB [a][b]);
            }
	}
        
        int matrizAxB[numberOfLinesA][numberOfcolumnsB];
        
        int d =0;
	for(int a=0; a<numberOfLinesA; a++){
            for(int b =0; b<numberOfcolumnsB; b++){
                for(int k = 0; k < numberOfLinesB; k++){
                    d += (matrizA[a][k] * matrizB[k][b]);
                }
                matrizAxB[a][b]= d;
                d = 0;
            }
        }
        
        
        
        int **m = (int**)malloc(numberOfLinesA * sizeof(int*));
 
  for (int i = 0; i < numberOfLinesA; i++){ 
       m[i] = (int*) malloc(numberOfcolumnsB * sizeof(int)); 
       for (int j = 0; j < numberOfcolumnsB; j++){ 
            m[i][j] = matrizAxB[i][j]; 
       }
  }
      
          imprimir_matriz( m,  numberOfLinesA,  numberOfcolumnsB);
        
    }
   
    else{printf("Operacao invalida!\n");}      
    
    
}