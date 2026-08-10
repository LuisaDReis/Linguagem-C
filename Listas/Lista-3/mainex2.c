#include <stdio.h>
#include <stdlib.h>



float calcula_media(float salario, int filhos){

    float salario_total = 0;
    float media;
    int conta_pessoa = 0;

    while (salario >= 0){

        salario_total += salario;
        scanf("%f%d", &salario, &filhos);
        conta_pessoa ++;

    }

    media = salario_total/conta_pessoa;

    return media;

}


int main(){

    float salario;
    int filhos;
    float media;

    scanf("%f%d", &salario, &filhos);

    media = calcula_media(salario, filhos);

    printf("%.2f", media);

    return 0;
}


