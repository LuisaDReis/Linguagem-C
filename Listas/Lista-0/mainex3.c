#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando variaveis:
    float base;
    float altura;
    float perimetro, area, diagonal;

    //Entrada de dados:
    scanf("%f%f",&base,&altura);

    //Calculando:
    perimetro = base+base+altura+altura;
    area = base*altura;
    diagonal = sqrt((base*base)+(altura*altura));

    //Saida de dados:
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);
}
