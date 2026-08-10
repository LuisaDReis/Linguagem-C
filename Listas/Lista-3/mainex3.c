#include <stdio.h>
#include <stdlib.h>


int poe_em_ordem(int quantos, int x, int y, int z){

    int armazena;

     for (int i = 0; i < quantos; i++){
        scanf("%d%d%d", &x, &y, &z);

        if (x > y){

            armazena = x;
            x = y;
            y = armazena;
        }

        if (x > z){

            armazena = x;
            x = z;
            z = armazena;
        }

        if (y > z){

            armazena = y;
            y = z;
            z = armazena;
        }

        printf("%d %d %d\n", x, y, z);

     }

}

int main()
{

    int quantos, x, y, z;
    int ordena;

    scanf("%d", &quantos);

    ordena = poe_em_ordem(quantos, x, y, z);


    return 0;
}
