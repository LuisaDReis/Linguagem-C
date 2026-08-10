#include <stdio.h>
#include <stdlib.h>

void calcula(){

    int num, fatorial = 1;
    float e = 1;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fatorial *= i;
        e += 1.00/fatorial;
    }

    printf("%.6f", e);

}

int main()
{

    calcula();

    return 0;
}
