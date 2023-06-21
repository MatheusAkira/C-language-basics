#include <stdio.h>

int main()
{
	int matriza [3][3];
	int matrizt [3][3];
	int matrizr [3][3];
	int d =0;


	for(int a=0; a<3; a++){
		for(int b =0; b<3; b++){
		scanf("%d", &matriza [a][b]);
		}
	}
	

	for(int a=0; a<3; a++){
		for(int b =0; b<3; b++){
         matrizt[a][b] = matriza[b][a];
		}
	}

	for(int a=0; a<3; a++){
		for(int b =0; b<3; b++){
            for(int k = 0; k < 3; k++){

            d += (matriza[a][k] * matrizt[k][b]);

           }
           matrizr[a][b]= d;
           d = 0;

		}

	}

     for(int a = 0; a < 3 ; a++){
        for(int b = 0; b < 3; b++){
            printf("%d\t" ,matrizr[a][b]);
        }
    printf("\n");
    }


}