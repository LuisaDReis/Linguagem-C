#include <stdio.h>

void verifica_triangulo(double x, double y, double z) {
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (x != y && x != z && y != z) {
            printf("TRIANGULO ESCALENO\n");
        }
        else {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else {
        printf("NAO TRIANGULO\n");
    }
}

int main() {
    double x, y, z;

    while (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
        if (x < 0 || y < 0 || z < 0) {
            break;
        }
        verifica_triangulo(x, y, z);
    }

    return 0;
}
