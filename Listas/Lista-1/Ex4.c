#include <stdio.h>
#include <math.h>

int main() {
    
    //Declarando variavel:
    float nota;

    //Entrada de variaveis:
    scanf("%f", &nota);

    //Condicão:
    if(nota >= 8 && nota <=10){
        printf("Otimo");
    }
    else if(nota >= 7 && nota < 8){
        printf("Bom");
    }
    else if(nota >= 5 && nota < 7){
        printf("Regular");
    }
    else{
        printf("Insatisfatorio");
    }

   
    

    return 0;
}