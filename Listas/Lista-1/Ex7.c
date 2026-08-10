#include <stdio.h>
#include <math.h>

int main()
{

    //Declarando variaveis:
    int X;

    //Lendo o valor de X:
    scanf("%d", &X);

    //Condicao:
    if(X <= 1)
    {
        printf("1");
    }
    else if(X > 1 && X <= 2)
    {
        printf("2");
    }
    else if(X > 2 && X <= 3)
    {
        printf("%.2f", pow(X,2));
    }
    else if(X > 3)
    {
        printf("%.2f", pow(X,3));
    }





    return 0;
}