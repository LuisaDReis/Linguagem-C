#include <stdio.h>
#include <stdlib.h>

void verifica(){

    int quantos, num;
    scanf("%d", &quantos);

    for (int i = 0; i < quantos; i++)
    {

        scanf("%d", &num);
        {
            if (num <= 0)
            {
                printf("NAO\n");
            }
            else
            {
                printf("SIM\n");
            }



        }



    }



}

int main()
{

    verifica();

    return 0;
}
