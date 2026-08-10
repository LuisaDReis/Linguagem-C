#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variaveis:
    float pi = 3.14159;
    float raio;
    float area;
    float perimetro;

    //Entrada de variaveis:
    scanf("%f", &raio);
    area = pi*raio*raio;
    perimetro = 2*pi*raio;

    //Saida de dados:
    printf("Perimetro: %.2f\n",perimetro);
    printf("Area: %.2f",area);



    return 0;
}
