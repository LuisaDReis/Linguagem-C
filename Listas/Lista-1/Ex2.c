#include <stdio.h>
#include <math.h>

int main() {
    
    //Declarando variavel:
    int n1;
    int n2;
    int soma;

    //Entrada de dados:
    scanf("%d%d",&n1,&n2);
    soma = n1+n2;

    //Condição e saida de dados:
    if(soma >= 10){
        soma = soma + 5;
        printf("%d", soma);
    }
    else{
        soma = soma + 7;
        printf("%d", soma);
    }


   
    

    return 0;
}