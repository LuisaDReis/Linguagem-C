#include <stdio.h>
#include <math.h>

int main() {
    
    //Declarando variavel:
    float a;
    float b;
    float x;

    //Lendo os valores de a e b:
    scanf("%f%f", &a,&b);

    //Calculando o valor de x:
    x = -b/a;

    //Saida:
    printf("%.2f", x);



    return 0;
}