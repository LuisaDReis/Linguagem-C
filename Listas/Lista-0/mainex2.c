#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declarando variaveis:
    float salario, kw, valorKw, valorPagar, valorDesconto;

    //Entrada de dados:
    scanf("%f", &salario);
    scanf("%f", &kw);

    //Calculando:
    valorKw = (salario / 7) / 100;
    valorPagar = valorKw * kw;
    valorDesconto = valorPagar * 0.9;

    //Saida de dados:
    printf("Valor do kW: %.2f\n", valorKw);
    printf("Valor a pagar: %.2f\n", valorPagar);
    printf("Valor com desconto: %.2f\n", valorDesconto);

    return 0;
}
