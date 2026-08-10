#include <stdio.h>
#include <stdlib.h>

double calculaS(int num) {
    double s = 0.0;

    for (int i = 1; i <= num; i++) {
        double numerador = ((double)i * i) + 1.0;
        double denominador = i + 3.0;

        s += numerador / denominador;
    }

    return s;
}

int main() {
    double calcula;
    int num;

    scanf("%d", &num);

    calcula = calculaS(num);

    printf("%.6lf\n", calcula);

    return 0;
}
