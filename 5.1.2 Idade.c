#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][20];
    int idades[5];
    int idademaior ;
    int idademenor ;
    char nomen[20] , nomev[20] ;
    int r =0;
    int i = 0;



    for ( i=0; i<5; i++){
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%i", &idades[i]);

        if(r==0){
            idademaior = idades[i];
            strcpy(nomen, nomes[i]);
            idademenor = idades[i];
            strcpy(nomev, nomes[i]);
            r++;

        }


    if(idades[i] > idademaior){
        idademaior = idades[i];
        strcpy(nomev, nomes[i]);

    }

    if(idades[i] < idademenor){
        idademenor = idades[i];
        strcpy(nomen, nomes[i]);

   }

}
 printf("Pessoa mais nova: %s\n" ,nomen);
 printf("Pessoa mais velha: %s\n" ,nomev);

}

