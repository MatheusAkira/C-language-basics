#include <stdio.h>
#include <stdlib.h>

int contarVogais(char *palavra, int n){
    
    
    if(n == 0){
        if(palavra[n] == 'A' || palavra[n] == 'E' ||palavra[n] == 'I' || palavra[n] == 'O' || palavra[n] == 'U'||palavra[n] == 'a' || palavra[n] == 'e' ||palavra[n] == 'i' || palavra[n] == 'o' || palavra[n] == 'u' ){
            return 1;
        }
        else{return 0;}
    
    }
    
    else{
        int result = 0;
        if(palavra[n] == 'A' || palavra[n] == 'E' ||palavra[n] == 'I' || palavra[n] == 'O' || palavra[n] == 'U'||palavra[n] == 'a' || palavra[n] == 'e' ||palavra[n] == 'i' || palavra[n] == 'o' || palavra[n] == 'u' ){
            result=1;
        }
        return result + contarVogais(palavra, (n-1));          
           

    }
    
   
}

int main() {
    char vowels[30];
    int result; 
    
    scanf("%s" , vowels);
    
    int numberOfCharacters = 0;

    while(vowels[numberOfCharacters] != '\0'){numberOfCharacters++;}
    
    result = contarVogais(vowels, numberOfCharacters);
    printf("%d\n", result);
    
}

