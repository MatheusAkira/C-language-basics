#include <stdio.h>

   struct Registro{
   char nome[20];
   int matricula;
   float n1, n2, n3, n4, media, soma;
   }alunos[5];

   int main (){

   for(int i = 0; i < 5; i++){
    scanf("%s", alunos[i].nome);
    scanf("%d", &alunos[i].matricula);
    scanf("%f %f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3, &alunos[i].n4);
   }
   
   for( int i =0; i< 5 ; i++){
       alunos[i].soma = alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4;
       alunos[i].media = alunos[i].soma/4.0;
       
   }

   int maior = 0;
   int menor = 0;
   int r = 0;

   for (int i = 0; i < 5; i++){
        if(r == 0){
            alunos[maior].media = alunos[i].media;
            alunos[menor].media = alunos[i].media;
            r++;
    }

    if(alunos[i].media > alunos[maior].media){
        maior = i ;
    }if(alunos[i].media < alunos[menor].media){
        menor = i;
    }
   }
   float mediageral;
   mediageral = (alunos[0].soma + alunos[1].soma + alunos[2].soma + alunos[3].soma + alunos[4].soma)/20;

   printf("Maior media\n");
   printf("Aluno: %s - %d\n", alunos[maior].nome, alunos[maior].matricula);
   printf("Media: %.2f\n", alunos[maior].media);
   printf("Menor media\n");
   printf("Aluno: %s - %d\n", alunos[menor].nome, alunos[menor].matricula);
   printf("Media: %.2f\n", alunos[menor].media);
   printf("Media geral: %.2f\n", mediageral);
   }
