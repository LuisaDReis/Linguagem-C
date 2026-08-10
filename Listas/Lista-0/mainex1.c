#include <stdio.h>
#include <stdlib.h>

int main() {

    //Declarando variavel:
    int num, centena, dezena, unidade, invertido;

    //Entrada de dados:
    scanf("%d", &num);
    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;
    invertido = unidade * 100 + dezena * 10 + centena;

    //Saida de dados:
    printf("%d", invertido);

    return 0;
}
