#include <stdio.h>

int main()

{
    char sexo;
    int idade;
    int contribuicao;

    scanf ("%c" ,&sexo);


    if(sexo == 'M'){

        scanf("%i" ,&idade);


        if(idade < 60){
            printf("Idade invalida!\n");
        }

        if(idade >= 60 && idade <= 65){
           scanf("%i" ,&contribuicao);

                if(contribuicao < 0){
                    printf("Tempo de contribuicao invalido!\n");
                }

                if(contribuicao >=35){
                    printf("O servidor pode aposentar\n");
                }

                 if(contribuicao > 0 && contribuicao < 35){
                    printf("O servidor nao pode aposentar\n");
                }
                }


         if(idade > 65 && idade < 70){
            printf("O servidor pode aposentar\n");

         }
         if(idade >= 70){
            printf("Aposentadoria compulsoria\n");
         }
    }

    if(sexo == 'F'){


        scanf("%i" ,&idade);


        if(idade < 55){
            printf("Idade invalida!\n");
        }

        if(idade >= 55 && idade < 60){

            scanf("%i" ,&contribuicao);

                if(contribuicao < 0){
                    printf("Tempo de contribuicao invalido!\n");
                }

                 if(contribuicao > 0 && contribuicao < 30){
                    printf("O servidor nao pode aposentar\n");
                }

                if(contribuicao >=30){
                    printf("O servidor pode aposentar\n");
                }

        }
         if(idade >= 60 && idade < 70){
            printf("O servidor pode aposentar\n");

         }
         if(idade >= 70){
            printf("Aposentadoria compulsoria\n");
         }
    }

    if ( sexo != 'M' && sexo != 'F'){
        printf("Sexo invalido!\n");
    }

    return 0;
}
