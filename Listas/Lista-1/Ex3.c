#include <stdio.h>

int main() {
    int ano, idade;
    char resposta;

    scanf("%d", &ano);
    scanf(" %c", &resposta);

    idade = 2026 - ano;

    if (resposta == 'N' || resposta == 'n') {
        idade = idade - 1;
    }

    printf("%d\n", idade);

    if (idade >= 18) {
        printf("Pode dirigir");
    } else {
        printf("Nao pode dirigir");
    }

    return 0;
}