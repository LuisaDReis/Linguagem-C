#include <stdio.h>

void exibe_conceito(int quantos){

    float media;

    for (int i = 0; i < quantos; i++){
        scanf("%f", &media);

        if (media <= 39){
            printf("F\n");
        }

        else if (media > 39 && media <= 59){
            printf("E\n");
        }

        else if (media > 59 && media <= 69){
            printf("D\n");
        }

        else if (media > 69 && media <= 79){
            printf("C\n");
        }

        else if (media > 79 && media <= 89){
            printf("B\n");
        }

        else if (media > 89){
            printf("A\n");
        }
    }
}

int main()
{
    int quantos;
    scanf("%d", &quantos);

    exibe_conceito(quantos);

    return 0;
}
