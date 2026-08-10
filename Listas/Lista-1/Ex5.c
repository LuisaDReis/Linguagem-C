#include <stdio.h>
#include <math.h>

int main() {
    
    //Declarando variavel:
    float diaria;
    float novadiaria;
    float taxanova;
    float taxa;
    float diferenca;

    //Entrada de dados:
    scanf("%f", &diaria);

    //Calculo da nova diaria:
    novadiaria = diaria - (diaria*0.25);

    //Calculo da taxa com nova diaria:
    taxanova = novadiaria * 64;

    //Calculo da taxa com diaria normal:
    taxa = diaria * 40;

    //Diferença entre as taxas:
    diferenca = taxanova - taxa;

    printf("Valor promocional: %.2f\n", novadiaria);
    printf("Promocional com 80%% ocupado: %.2f\n", taxanova);
    printf("Normal com 50%% ocupado: %.2f\n", taxa);
    printf("Diferenca entre os valores: %.2f\n", diferenca);


    return 0;
}