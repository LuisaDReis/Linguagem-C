#include <stdio.h>

int main()
{
    //Declarando variaveis:
    char sinal;

    //Lendo o sinal:
    scanf(" %c", &sinal);

    //Verificando qual sinal foi colocado:
    switch(sinal)
    {
        case '-':
            printf("SINAL DE MENOR");
        break;
        
        case '+':
            printf("SINAL DE MAIOR");
        break;

        case '=':
            printf("SINAL DE IGUAL");
        break;

        default:
            printf("OUTRO SINAL");
        break;

    }







    return 0;
}